#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next_node, *prev_node;
};
void insert(struct node **start, int value)
{
    if(*start == NULL)
    {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode -> data = value;
        newnode-> next_node = newnode ->prev_node = newnode;
        *start = newnode;
        return;
    }
    struct node *last = (*start) -> prev_node, *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next_node = *start;
    (*start)-> prev_node = newnode;
    newnode->prev_node = last;
    last-> next_node =newnode;
}
void display(struct node *start)
{
    struct node *temp = start;
    printf("\n Circular double linked list \n");
    while(temp->next_node !=start)
    {
        if(temp==start)
        printf("----");
    else if(temp->next_node->next_node == start)
    {
        printf("----");
    }
    else
    {
        printf("-----");
    }
    temp = temp->next_node;
    }
    printf("\n");
    temp= temp->next_node;
    while(temp->next_node !=start)
    {
        printf("%d ",temp->data);
        temp = temp->next_node;
    }
    printf("%d\n",temp->data);
}
int main()
{
    struct node *start= NULL;
    insert(&start,3);
    insert(&start,9);
    insert(&start,7);
    insert(&start,5);
    insert(&start,6);
    display(start);
    return 0;
}