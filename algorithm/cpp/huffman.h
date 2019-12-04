#ifndef _HUFFMAN_H
#define _HUFFMAN_H
#include"bintree.h"
#include"compare.h"
#include<queue>
BinaryTree *huffman(int *f,char *d, int n){
    priority_queue<BinaryTree*,vector<BinaryTree*>,Greater<BinaryTree>> q;
    int i;
    for(i=0;i<n;i++)
        q.push(new BinaryTree(f[i],d[i]));
    for(i=0;i<n-1;i++){
        BinaryTree *x,*y,*z;
        x=q.top();q.pop();
        y=q.top();q.pop();
        z=new BinaryTree(x->key+y->key,'*',x,y);
        q.push(z);
    }
    return q.top();
}
void printCode(BinaryTree *t,string c){
    if(t->left!=NULL)
        printCode(t->left,c+"0");
    if(t->right!=NULL)
        printCode(t->right,c+"1");
    if(t->left==NULL&&t->right==NULL)
        cout<<"character: "<<t->data<<" frequency: "<<t->key<<" code: "<<c<<endl;
}
#endif /* _HUFFMAN_H */