#include <iostream>
#include "stack.h"
using namespace std;

class BT{
    public:node *cr=NULL;Stack stack_obj;
    public:void add(int);void minimum();void maximum();void ch(int,node *a);void sort(node *p);
};

int main()
{
    BT obj;
    obj.add(16);obj.add(5);
    obj.add(15);obj.add(14);
    obj.add(3);obj.add(2);
    obj.add(6);obj.add(9);
    obj.add(17);obj.add(4);
    obj.add(26);obj.add(20);
    obj.minimum();   // Get The Minimum Number
    obj.maximum();   // Get The Maximum Number
    cout<<"Sort : ";
    obj.sort(obj.cr);
    cout<<"\n";
}

void BT::ch(int value,node *a){
    if(value>a->value&&a->right!=NULL){ch(value,a->right);}
    else if(value<a->value&&a->left!=NULL){ch(value,a->left);}
    else{
        node *nw=new node();nw->value=value;
        if(value>a->value){a->right=nw;}
        else{a->left=nw;}
    }
}

void BT::add(int value){
    if(cr==NULL){cr=new node();cr->value=value;}
    else{ch(value,cr);}
}

void BT::minimum(){
    node *tmp=cr;
    while(tmp->left!=NULL){tmp=tmp->left;}
    cout<<tmp->value<<" Is The Minimum Number"<<endl;
}

void BT::maximum(){
    node *tmp=cr;
    while(tmp->right!=NULL){tmp=tmp->right;}
    cout<<tmp->value<<" Is The Maximum Number"<<endl;
}

void BT::sort(node *p){
    node *nd=p;
    while(nd!=NULL){
        stack_obj.Push(nd);
        nd=nd->left;
    }
    while(stack_obj.CheckStatus()!=1){
        node *pp=stack_obj.Pop();
        cout<<pp->value<<" ";
        if(pp->right!=NULL){sort(pp->right);}
    }
}