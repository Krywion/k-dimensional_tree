#include "dTree.h"


KDNode* KDTree::insertRec(KDNode* node, std::vector<double>& point, unsigned depth) {
    if (node == nullptr) {
        return new KDNode(point);
    }

    unsigned cd = depth % dimensions;

    if (point[cd] < (node->point[cd])) {
        node->left = insertRec(node->left, point, depth + 1);
    } else {
        node->right = insertRec(node->right, point, depth + 1);
    }
    return node;
}

void KDTree::insert(std::vector<double> point) {
    root = insertRec(root, point, 0);
}

double KDTree::distance(const std::vector<double>& point1, const std::vector<double>& point2) {

        std::cout << "Distance between ";
        printPoint(point1);
        std::cout << " and ";
        printPoint(point2);
        std::cout << std::endl;

        double distance = 0.0;
        for (int i = 0; i < dimensions; i++) {
            distance += (point1[i] - point2[i]) * (point1[i] - point2[i]);
        }
        std::cout << "Distance: " << sqrt(distance) << std::endl;
        return distance;
}

void KDTree::nearestNeighborRec(KDNode *node, const std::vector<double> &point, unsigned int depth, KDNode **bestNode, double *bestDist) {
    if (node == nullptr) {
        return;
    }

    double d = distance(point, node->point);

    unsigned axis = depth % dimensions;

    if (*bestNode == nullptr || d < *bestDist) {
        *bestDist = d;
        *bestNode = node;
    }

    double dx = point[axis] - node->point[axis];
    KDNode* closer = dx < 0 ? node->left : node->right;
    KDNode* farther = dx < 0 ? node->right : node->left;

    nearestNeighborRec(closer, point, depth + 1, bestNode, bestDist);

    if (dx * dx < *bestDist) {
        nearestNeighborRec(farther, point, depth + 1, bestNode, bestDist);
    }
}

std::vector<double> KDTree::nearestNeighbor(const std::vector<double> &point) {
    KDNode* bestNode = nullptr;
    double bestDist = std::numeric_limits<double>::max();

    nearestNeighborRec(root, point, 0, &bestNode, &bestDist);

    std::cout << "Best distance: " << sqrt(bestDist) << std::endl;
    return bestNode->point;
}

void KDTree::preorder(KDNode* node, int depth) {
    if (node == nullptr) {
        return;
    }

    printPoint(node->point);
    std::cout << " at depth " << depth << std::endl;

    preorder(node->left, depth + 1);
    preorder(node->right, depth + 1);
}