/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/  int min = 0;
	bool checkBST(Node* root) {
		
        if(root==NULL)
        {
            return true;
        }
        bool abc = checkBST(root->left);
        if(abc)
        {
           if(root->data > min)
           {
               min = root->data;
               return checkBST(root->right);
           }
           else{
               return false;   
           }
        }
        return abc;
	}