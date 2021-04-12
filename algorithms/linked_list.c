// Time complexity of traversal is o(n) - linear time complexity
#include<stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;

    }
}
// Count of nodes
void count_of_nodes(struct  Node *head){
    int count = 0;
    if (head == NULL){
        printf("Empty linked list");

    }
    struct Node * ptr= NULL;
    ptr = head;
    while(ptr != NULL){
        count ++;
        ptr = ptr->link;
        
    } 
    printf("%d", count);

}
// Add the items at the end of the List
void add_at_end(struct node *head , int data){
    struct Node *ptr, *temp;
    ptr = head;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp ->data = data;
    temp -> link = NULL;
    
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// Printing of data
void print_data(struct Node *head){
if head == NULL)
printf("Linked list is empty");
struct Node *ptr= NULL;
ptr = head;
while(ptr != NULL){
    printf("%d ",ptr->data);
    ptr = ptr->link;


}



}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


    //  Allocates memory for the linked list in the Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    head->data =7;
    head->next = third;
    second->data =11;
    second->next =third;
    // Terminate the list after the third node
    third -> data =66;
    third -> next =NULL;
    add_at_end(head, 67);
    
    
    }