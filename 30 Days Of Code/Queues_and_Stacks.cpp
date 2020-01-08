#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

class Solution {
    public:
        struct node {
            char data;
            struct node *next;
        };

        struct node* front = NULL;
        struct node* rear = NULL;
        struct node* temp;

        queue<char> q;
        stack<char> s;

        void pushCharacter(char ch){
            s.push(ch);
        }

        void enqueueCharacterLibrary(char ch){
            q.push(ch);
        }

        void enqueueCharacter(char ch){
            if(rear == NULL){
                rear = new node;
                rear->data = ch;
                rear->next = NULL;
                front = rear;
            }

            else {
                temp = new node;
                rear->next = temp;    
                temp->data = ch;
                temp->next = NULL;
                rear = temp;
            }
        }

        char popCharacter(){
            char c = s.top();
            s.pop();

            return c; 
        }

        char dequeueCharacterLibrary(){
            char c = q.front();
            q.pop();
            return c;
        }

        char dequeueCharacter(){
            temp = front;

            if(temp == NULL){
                return 'N';
            }

            else{
                front = temp->next;
                return temp->data;
            }
        }
};

int main() {