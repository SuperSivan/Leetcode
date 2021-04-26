[二叉树的层序遍历](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/solution/cchao-100de-yan-du-bian-li-jie-fa-by-ffr-j5eg/)


[据说是BFS模板](https://leetcode-cn.com/problems/binary-tree-level-order-traversal/solution/tao-mo-ban-bfs-he-dfs-du-ke-yi-jie-jue-by-fuxuemin/)
# 解法一：BFS
- 直接在Leetcode 102上面改

```C++
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != NULL) que.push(root);
        //vector<vector<int>> result;
        vector<int> result;

        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            // 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
            //for (int i = 0; i < size; i++) {//进行几次循环就pop几次,可以自己写一下步骤
                TreeNode* node = que.front();
                que.pop();
                vec.push_back(node->val);
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            //}
            //result.push_back(vec);
        }
        //return result;
        return vec;
    }
};
```

