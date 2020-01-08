#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:
        Node* removeDuplicates(Node *head){
            if(!head) return head;

            Node *n, *t;

            n = head;

            while(n->next){
                t = n; //Seg Fault HackerRank compiler
                while(t->next){
                    if(n->data == t->next->data){
                        Node *duplicate = t->next;
                        t->next = t->next->next;
                        delete(duplicate);
                    }
                    else{
                        t = t->next;
                    }
                }
                n = n->next;
            } 
            return head;

            /*Alternate Version

            struct Node *ptr1, *ptr2, *dup; 
            ptr1 = head; 
        
            while (ptr1 != NULL && ptr1->next != NULL) 
            { 
                ptr2 = ptr1; 
        
                
                while (ptr2->next != NULL) 
                { 
                    
                    if (ptr1->data == ptr2->next->data) 
                    { 
                    
                        dup = ptr2->next; 
                        ptr2->next = ptr2->next->next; 
                        delete(dup); 
                    } 
                    else 
                        ptr2 = ptr2->next; 
                } 
                ptr1 = ptr1->next; 
            } 
            */
        }


        Node* insert(Node *head,int data){

            Node* p=new Node(data);
            if(head==NULL){
                head=p;  

            }
            else if(head->next==NULL){
                head->next=p;

            }
            else{
                Node *start=head;
                while(start->next!=NULL){
                    start=start->next;
                }
                start->next=p;   

            }
                return head;
            
        
        }

        void display(Node *head){
                Node *start=head;
                while(start)
                {
                    cout<<start->data<<" ";
                    start=start->next;
                }
        }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}        