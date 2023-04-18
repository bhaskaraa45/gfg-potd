/*
  This code is written by Bhaskar
*/

//User function Template for C++

class Solution {
public:
struct Pair {
    int nodeMin;
    int nodeMax;
    int nodeSum;
    int countNode;
    bool isBST;
};

int min = INT_MAX;

Pair minSubtree(Node* root, int target) {
    if (root == nullptr) {
        Pair p;
        p.nodeMin = INT_MAX;
        p.nodeMax = INT_MIN;
        p.nodeSum = 0;
        p.countNode = 0;
        p.isBST = true;
        return p;
    }
    
    Pair left = minSubtree(root->left, target);
    Pair right = minSubtree(root->right, target);
    int nodeSum = left.nodeSum + right.nodeSum + root->data;
    int countNode = left.countNode + right.countNode + 1;
    int nodeMin = std::min(root->data, std::min(left.nodeMin, right.nodeMin));
    int nodeMax = std::max(root->data, std::max(left.nodeMax, right.nodeMax));
    bool isBST = root->data > left.nodeMax && root->data < right.nodeMin &&
                 left.isBST && right.isBST;
    if (isBST && nodeSum == target) {
        min = std::min(min, countNode);
    }
    
    Pair p;
    p.nodeMin = nodeMin;
    p.nodeMax = nodeMax;
    p.nodeSum = nodeSum;
    p.countNode = countNode;
    p.isBST = isBST;
    return p;
}

int minSubtreeSumBST(int target, Node* root) {
    min = INT_MAX;
    minSubtree(root, target);
    if (min == INT_MAX) min = -1;
    return min;
}
    
};

