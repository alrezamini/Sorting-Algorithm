#include<iostream>
using namespace std;

struct node{int value=-1;struct node *left=NULL;struct node *right=NULL;};

struct StackNode{
    StackNode *next=NULL; 
    StackNode *pre; 
    node *tnode;
    StackNode(node *tn){tnode=tn;}
};

class Stack{
    private: StackNode *top; StackNode *tail=NULL;
    public:
        void Push(node *val);
        node *Pop(){
            if(top->pre!=NULL){
                StackNode *pre = top->pre;
                delete pre->next;
                StackNode *top_temp = top;
                top=pre;
                return top_temp->tnode;
            }else{tail=NULL;return top->tnode;}
        }
        int CheckStatus();
};



void Stack::Push(node *val){
    StackNode *new_node=new StackNode(val);
    if(tail!=NULL){
        new_node->pre=top;
        top->next=new_node;
        top=new_node;
    }
    else{top=new_node;tail=new_node;new_node->pre=NULL;}
}

int Stack::CheckStatus(){
    int result=(tail!=NULL)?0:1;
    return result;
}