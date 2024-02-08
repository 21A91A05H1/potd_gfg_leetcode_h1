class Solution{
  public:
    /*You are required to complete this method*/
    
    void getleaf(Node *root,set<int>&s,int l)
    {
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) {
            s.insert(l);
            return;
        }
        if(root->left) {
            getleaf(root->left,s,l+1);
            
        }
        
        if(root->right){
             getleaf(root->right,s,l+1);
            
        }
        
    }
    bool check(Node *root)
    {
        //Your code here
        set<int>s;
        getleaf(root,s,0);
        if(s.size()==1) return true;
        else return false;
    }
};