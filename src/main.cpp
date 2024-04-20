#include "dTree.h"

void test2d2() {
    KDTree kdTree(2);

    kdTree.insert({1, 2});
    kdTree.insert({30, 40});
    kdTree.insert({5, 25});
    kdTree.insert({10, 12});
    kdTree.insert({14, 22});
    kdTree.insert({70, 70});
    kdTree.insert({50, 30});
    kdTree.insert({35, 45});
    kdTree.insert({55, 70});
    kdTree.insert({-4, -20});

    std::vector<double> point = {20, -20};
    std::vector<double> nearest = kdTree.nearestNeighbor(point);
    std::cout << std::endl;
    std::cout << "Nearest neighbor of ";
    KDTree::printPoint(point);
    std::cout << " is ";
    KDTree::printPoint(nearest);
}


void test3d2() {
    KDTree kdTree(3);

    kdTree.insert({1, 2, 3});
    kdTree.insert({30, 40, 50});
    kdTree.insert({5, 25, 35});
    kdTree.insert({10, 12, 13});
    kdTree.insert({14, 22, 23});
    kdTree.insert({70, 70, 70});

    std::vector<double> point = {15, 23, 33};

    std::vector<double> nearest = kdTree.nearestNeighbor(point);
    std::cout << std::endl;
    std::cout << "Nearest neighbor of ";
    KDTree::printPoint(point);
    std::cout << " is ";
    KDTree::printPoint(nearest);

}

int main() {
    KDTree kdTree(3);

    kdTree.insert({1, 2, 0});
    kdTree.insert({30, 40, 0});
    kdTree.insert({5, 25, 0});
    kdTree.insert({10, 12, 0});
    kdTree.insert({14, 22, 0});
    kdTree.insert({70, 70, 0});
    kdTree.insert({50, 30, 0});
    kdTree.insert({35, 45, 0});
    kdTree.insert({55, 70, 0});
    kdTree.insert({-4, -20, 0});

    std::vector<double> point = {20, -20, 0};
    std::vector<double> nearest = kdTree.nearestNeighbor(point);
    std::cout << std::endl;
    std::cout << "Nearest neighbor of ";
    KDTree::printPoint(point);
    std::cout << " is ";
    KDTree::printPoint(nearest);


    return 0;
}
