#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{// this is a tree node
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void llorder(Node* root,vector<int>& v,int lev){
    if(root==NULL) return;
    v[lev]=root->val;
    llorder(root->right,v,lev+1);
    llorder(root->left,v,lev+1);
}

int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node* a=new Node(1); //root
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    


    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    int lev=level(a);
    vector<int> v(lev);
    llorder(a,v,0);
    for(int i=0;i<lev;i++){
        cout<<v[i]<<" ";
    }
}
