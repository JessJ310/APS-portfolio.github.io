#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

class KDTree {
private:
    Node *root;

public:
    KDTree() : root(nullptr) {}

    void buildTree(vector<int> &points) {
        root = buildTreeHelper(points, 0, points.size() - 1, 0);
    }

    Node* buildTreeHelper(vector<int> &points, int start, int end, int depth) {
        if (start > end) {
            return nullptr;
        }

        int axis = depth % 1; 
        sort(points.begin() + start, points.begin() + end + 1);

        // Find median index
        int medianIndex = start + (end - start) / 2;
        Node *node = new Node(points[medianIndex]);

        node->left = buildTreeHelper(points, start, medianIndex - 1, depth + 1);
        node->right = buildTreeHelper(points, medianIndex + 1, end, depth + 1);

        return node;
    }

    void inorderTraversal(Node *node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void printTree() {
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    vector<int> points = {3, 7, 4, 9, 5, 2, 8, 1, 6, 0};
    KDTree tree;
    tree.buildTree(points);
    tree.printTree();

    return 0;
}
