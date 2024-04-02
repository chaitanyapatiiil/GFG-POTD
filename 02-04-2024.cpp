
class Solution
{
    public:
    int ans = INT_MAX, temp = INT_MAX;
    void inorder(Node *root){
        if(root==NULL)
            return;
        inorder(root->left);
        ans = min(ans, abs(root->data - temp));
        temp = root->data;
        inorder(root->right);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        inorder(root);
        return ans;
    }
};
