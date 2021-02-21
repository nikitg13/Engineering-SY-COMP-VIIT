#include<iostream> 
using namespace std; 
 
struct node  
{  
 int key;  
 struct node *left, *right;  
};  
 
struct node *newNode(int item)  
{  
 struct node *temp; 
 temp=new node;   
 temp->key = item;  

 temp->left = temp->right = NULL;  
 return temp;  
}  
 
void printPostorder(struct node *node)  
{  
 if (node == NULL)  
 { 
  return;  
 } 
 
 printPostorder(node->left);  
 
 printPostorder(node->right);  
 
 cout<< node->key << " ";  
}  
 
void printInorder(struct node *node)  
{  
 if (node == NULL) 
 {  
  return;  
 } 
 
 printInorder(node->left);  
 
 cout << node->key << " ";  
 
 printInorder(node->right);  
}  

 
void printPreorder(struct node *node)  
{  
 if (node == NULL) 
 {  
  return; 
 } 
 
 cout << node->key << " ";  
 
 printPreorder(node->left);  
 
 printPreorder(node->right);  
}  
 
struct node* insert(struct node* node, int key)  
{  
 if (node == NULL) 
 { 
   return newNode(key);  
 } 
 
 if (key < node->key)  
 { 
  node->left = insert(node->left, key); 
 } 
 else if (key > node->key)  
 { 
  node->right = insert(node->right, key);  
 } 
 return node;  
}  
 
int main()  
{  
   
 struct node *root = NULL; 
 int j,i,n; 
 cout<<"Enter number of elements :"; 
 cin>>n; 
 cout<<"Enter elements:"<<endl; 
 cin>>j;  
 root = insert(root, j); 
 for(i=1;i<n;i++)  
 { 
  cin>>j; 
  insert(root,j); 
 } 
 cout << "\nPreorder traversal of binary tree is \n";  
 printPreorder(root);  
 
 cout << "\nInorder traversal of binary tree is \n";  
 printInorder(root);  
 
 cout << "\nPostorder traversal of binary tree is \n";  
 printPostorder(root); 
 
 return 0;  
}  
 
