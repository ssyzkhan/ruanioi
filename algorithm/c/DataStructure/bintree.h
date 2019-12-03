#ifndef _BINTREE_H
#define _BINTREE_H
#include<stdlib.h>
#include<stdio.h>
struct BinaryTree{
    int key;
    char data;
    BinaryTree *left;
    BinaryTree *right;
};
typedef struct BinaryTree BinaryTree;
BinaryTree * buildTree(int k,char d,BinaryTree *l,BinaryTree *r){
    BinaryTree *root=(BinaryTree *)malloc(sizeof(BinaryTree));
    root->key=k;
    root->data=d;
    root->left=l;
    root->right=r;
    return root;
}
void inorderWalk(BinaryTree *root){
    if(root->left!=NULL)
        inorderWalk(root->left);
    printf("%c, %d ",root->data,root->key);
    if(root->right!=NULL)
        inorderWalk(root->right);
}
void clearTree(BinaryTree *root){
    if(root->left==NULL&&root->right==NULL)
        return;
    if(root->left!=NULL){
        clearTree(root->left);
        free(root->left);
        root->left=NULL;
    }
    if(root->right!=NULL){
        clearTree(root->right);
        free(root->right);
        root->right=NULL;
    }
}
#endif /* _BINTREE_H */