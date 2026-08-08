#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int x){
    struct node* root;
    root = (struct node*)malloc(sizeof(struct node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void inorder(struct node* root){
    if(root != NULL){
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
    }
    
}
int main(){
    struct node* root;
    root = create(15);
    root->left = create(10);
    root->right = create(20);
    inorder(root);

    return 0;
}