#include <iostream>
using namespace std;

struct Node{
int key;
Node *left,*right;	
};

struct Node* newNode(int data)
{
  struct Node *temp = new struct Node;
  temp->key = data;
  temp->left = NULL;
  temp->right = NULL;
 
  return temp;
}


void preorderTraversal(Node *root){
if(root==NULL) return;
cout<<root->key<<",";
preorderTraversal(root->left);
preorderTraversal(root->right);	
	
}

void postorderTraversal(Node *root){
if(root==NULL)return;
postorderTraversal(root->left);
postorderTraversal(root->right);
cout<<root->key<<",";	
}

void inorderTraversal(Node *root){
if(root==NULL)return;
inorderTraversal(root->left);
cout<<root->key<<",";
inorderTraversal(root->right);		
}

//print bst within given range
void printbst(int k1,int k2,Node *root){

if(root==NULL)return;

if(k1<root->key){

printbst(k1,k2,root->left);

}

if(k1<=root->key && root->key<=k2){
cout<<root->key<<",";

	
}

if(root->key<k2)
{
	printbst(k1,k2,root->right);
}
}



int main(){
	
struct Node *root = new struct Node;

   /* Constructing tree given in the above figure */
  root = newNode(20);
  root->left = newNode(8);
  root->right = newNode(22);
  root->left->left = newNode(4);
  root->left->right = newNode(12);
 
 //preorderTraversal(root);
 cout<<endl;
 //postorderTraversal(root);
 cout<<endl;
 //inorderTraversal(root); 
 cout<<endl;
 //print a BST within range in increasing order
 int k1=5,k2=30;
 
 printbst(k1,k2,root);
 
 
 return 0;
		
}


