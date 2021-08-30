/*
linked stack is like node
node is :
NULL<--pointerTo--{value1}--pointerTo-->{value2}--pointerTo-->{value}.....etc
*/
#include<iostream>
using namespace std;
 template<class T>
class LinStack
{
    struct Node{
    T item;
    Node*next;
    };
    Node *top,*cur;
public:
LinStack(){top=NULL;}
void push(T newitem )
{
    Node*newitemptr=new Node;//reserve pointer for node struct
    if(newitemptr==NULL){cout<<"Error, cant allocate memory\n";}
    else{
    newitemptr->item=newitem;
    newitemptr->next=top;
    top=newitemptr;
    }
}
bool isEmpty()
{
    return top==NULL;
}
void pop()
{
    if (isEmpty()){cout<<"Stack is Empty\n";}
    else{
        Node *temp=top;
        top=top->next;
        temp=temp->next=NULL;delete temp;
        }

}
void pop(T stackTop)
{
    if (isEmpty()){cout<<"Stack is Empty\n";}
    else{
        stackTop=top->item;
        Node *temp=top;
        top=top->next;
        temp=temp->next=NULL;delete temp;
        }

}
void getTop(T stackTop)
{
    if (isEmpty()){cout<<"Stack is Empty\n";}
    else{
        stackTop=top->item;
        cout<<stackTop<<endl;
    }

}
void Dsiplay()
{
    cur=top;
    cout<<"[\t";
    while (cur!=NULL)
    {
        cout<<cur->item<<"\t";
        cur=cur->next;
    }
    cout<<"]"<<endl;
    
}
};