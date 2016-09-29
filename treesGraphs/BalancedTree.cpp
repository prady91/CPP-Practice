
#include <iostream>
using namespace std;

struct TreeNode{

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};


int isBalancedCheck(TreeNode* root){

        if(root == NULL){

            return 0;

        }

        int leftHeight = isBalancedCheck(root->left);

        if(leftHeight == -1){

            return -1;

        }

        int rightHeight = isBalancedCheck(root->right);

        if(rightHeight == -1){

            return -1;

        }

        int diff = rightHeight - leftHeight;

        if(abs(diff) > 1){

            return -1;

        }

        return max(rightHeight,leftHeight)+1;



    }

    bool isBalanced(TreeNode* root) {

        if(isBalancedCheck(root) != -1){

            return true;

        }else{

            return false;

        }


    }




int main(){

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);

    cout<<isBalanced(root)<<endl;


}