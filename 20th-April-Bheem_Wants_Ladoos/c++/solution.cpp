/*
  This code is written by Bhaskar
*/

class Solution{
    
    private:
    void add_subtree(Node* n, int dist, int* sum)
    {
        if( !n || dist<0 ) return;
        *sum += n->data;
        add_subtree(n->left, dist-1, sum);
        add_subtree(n->right, dist-1, sum);
    }
    
    int traverse(Node* n, int target, int k, int* sum)
    {
        if(!n) return -1;
        if(n->data==target)
        {
            add_subtree(n, k, sum);
            return k-1;
        }
        
        int dist = traverse(n->left, target, k, sum);
        if(dist>-1)
        {
            *sum += n->data;
            add_subtree(n->right, dist-1, sum);
            return dist-1;
        }
        
        dist = traverse(n->right, target, k, sum);
        if(dist>-1)
        {
            *sum += n->data;
            add_subtree(n->left, dist-1, sum);
            return dist-1;
        }
        
        return -1;
    }
    
    public:
    int ladoos(Node* root, int home, int k)
    {
        int sum = 0;
        traverse(root, home, k, &sum);
        return sum;
    }


};
