#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

class KDNode {
public:
    std::vector<double> point;
    KDNode* left;
    KDNode* right;

    KDNode(std::vector<double> pt) : point(pt), left(nullptr), right(nullptr) {}

};

class KDTree {
private:
    KDNode* root;
    int dimensions;

    KDNode* insertRec(KDNode* node, std::vector<double>& point, unsigned depth);

    double distance(const std::vector<double>& point1, const std::vector<double>& point2);

    void nearestNeighborRec(KDNode* node, const std::vector<double>& point, unsigned depth, KDNode** bestNode, double* bestDist);


public:
    KDTree(int dims) : root(nullptr), dimensions(dims) {}

    void insert(std::vector<double> point);

    std::vector<double> nearestNeighbor(const std::vector<double>& point);

    void preorder(KDNode* node, int depth);

    static void printPoint(const std::vector<double>& point) {
        std::cout << "(";
        for (size_t i = 0; i < point.size(); i++) {
            std::cout << point[i];
            if (i < point.size() - 1) std::cout << ", ";
        }
        std::cout << ")";
    }

    KDNode* getRoot() {
        return root;
    }
};


