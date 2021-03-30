#include <stdio.h>
#include <stdlib.h>
// Stucture created for storing the pointer address
struct node{
    int data;
    struct node *link;

};
int main(){
    struct node *head = NULL;
    head =(struct node *)malloc(sizeof(struct node));// Typecasting but not necessary its implicit conversion
    head -> data = 45;
    // Way of pointing the acces of data using structure method
    printf("%d\n",head -> data); 
}