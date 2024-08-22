
#include<iostream>
using namespace std;

class Node 
{
    public :
    int data;
    Node *next;

    Node(int value) 
    {
        data = value;
        next = NULL;
    }
};
int main () 
{
    Node *Head;
    Head = new Node(4);
    //cout<<Head->data<<endl;
    //cout<<Head->next<<endl;

    //insert  the node at beginning 
    int arr[] = { 2,4,6,8,10};


    for (int i=0; i<5; i++) 

    {
    if (Head == NULL) 
    {
    Head = new Node(arr [i]) ;

     }
    //Linked list exist karti
   else
   {
    Node *temp;
    temp = new Node(arr[i]) ;
    temp->next = Head;
    Head = temp;

   }

   }
   //print the value
   Node *temp = Head;
   while(temp!=NULL) 
   {
    cout<<temp->data<<" ";
    temp=temp->next;

   };

}

//output: 2 4 6 8 10
 //         10 8 6 4 2

