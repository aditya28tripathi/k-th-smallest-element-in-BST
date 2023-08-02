class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int solve(Node *root , int &i,int K){
        if(root == NULL) {
            return -1;
        }
        
        int left = solve(root->left ,i, K);
        if(left != -1) {
            return left;
        }
        i++;
        if(i==K) 
        {
            return root->data;
        }
        return solve(root->right, i,K);
        
    }
    
    
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int i=0;
        int ans= solve(root,i, K);
        return ans;
    }
};
