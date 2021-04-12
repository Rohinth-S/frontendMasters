#include<stdio.h>
#include<stdlib.h>
// Skeleton Every node or element of linked list

struct Node {
    int data;
    struct Node *next;

};
// Function to print all the elements of the linked list
void display(struct Node *n) {
while(n!=NULL) {
    printf("%d ", n->data);
    n = n->next;
}
}
int main(){
    struct Node*head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    //  Memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third == (struct Node *)malloc(sizeof(struct Node));
    // Assigning the values
    head -> data = 10;
    second ->data = 20;
    third  ->data =30;

    // Linking nodes
    head ->next = second;
    second ->next = third;
    third ->next = NULL;
    // Calling display()
    display(head);
    return 0;

}
