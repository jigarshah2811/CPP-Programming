#include <string>
#include <iostream>
#include <tuple>
#include <list>

using namespace std;

class Node{
    private:
        int data;
    public:
        Node *next;
        Node(int val){
            data = val;
            next = NULL;
        };

        static void InsertNodeAtEnd(Node *head, int val){
            Node *newNode = new Node(val);

            Node *current = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = newNode;
        };

        static void InsertNodeAtPos(Node *head, int val, int pos){
            Node *current = head;
            Node *newNode = new Node(val);

            if(pos == 1){
                //HEAD NODE
                head = newNode;
            }

            // Tranverse till pos-1
            for(int i=1; i<pos-1 && current->next != NULL; i++){
                 current = current->next;
            }
            // Attach link for newNode
            newNode->next = current->next;
            current->next = newNode;
        };

        static void DeleteNodeAtPos(Node *head, int pos){
            Node *current = head;

            if(pos == 1){
                //HEAD NODE
                head = head->next;
                free(current);
                return;
            }

            // Tranverse till pos-1
            for(int i=1; i<pos-1 && current->next != NULL; i++){
                 current = current->next;
            }
            // Attach link for newNode
            Node *temp = current->next;
            current->next = current->next->next;
            free(temp);
        };


        static void PrintLL(Node *head){
             Node *current = head;
             while(current->next != NULL){
                 cout<<current->data<<" ";
                 current = current->next;
             }

            cout<<current->data<<endl;
        };
};

int main()
{
    Node head(10);
    Node::InsertNodeAtEnd(&head, 20);
    Node::PrintLL(&head);
    Node::InsertNodeAtEnd(&head, 40);
    Node::PrintLL(&head);
    Node::InsertNodeAtEnd(&head, 50);
    Node::PrintLL(&head);

    Node::InsertNodeAtPos(&head, 30, 3);
    Node::PrintLL(&head);
	Node::InsertNodeAtPos(&head, 60, 6);
    Node::PrintLL(&head);

    Node::DeleteNodeAtPos(&head, 1);
    Node::PrintLL(&head);
	Node::DeleteNodeAtPos(&head, 4);
    Node::PrintLL(&head);



    return 0;
}
