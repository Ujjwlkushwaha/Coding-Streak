
#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int kthLargestLevelSum(TreeNode* root, int k) {
    priority_queue<int> maxHeap;

    vector<TreeNode*> childArr = { root };

    while (!childArr.empty()) {
        int sum = 0;
        vector<TreeNode*> nextChildArr;

        for (TreeNode* child : childArr) {
            sum += child->val;
            if (child->left) nextChildArr.push_back(child->left);
            if (child->right) nextChildArr.push_back(child->right);
        }

        maxHeap.push(sum);
        childArr = nextChildArr;
    }

    int top = -1;
    while (k-- > 0 && !maxHeap.empty()) {
        top = maxHeap.top();
        maxHeap.pop();
    }

    return top != -1 ? top : -1;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int k = 3;
    cout << "Kth largest level sum: " << kthLargestLevelSum(root, k) << endl;

    return 0;
}