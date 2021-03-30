#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;

};


int main(){
    // List must consists of 
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link =NULL;

    // head = malloc(sizeof(struct node));
    // head -> data = 98;
    head -> link = current;
    printf("List of nodes %d %u ", head -> data, current->data);
    return 0;


}