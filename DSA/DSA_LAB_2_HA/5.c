#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void makell(node **head, int val)
{
    node *temp = (node *)malloc(sizeof(node));
    node *n = *head;
    temp->data = val;
    temp->next = NULL;
    if (*head == NULL)
    {
        temp->next = *head;
        *head = temp;
        return;
    }
    while (n->next != NULL)
    {
        n = n->next;
    }
    n->next = temp;
    n = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int length(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void displaym(node *head,int m)
{
    int l=length(head),count=0;
    node *temp = head;
    while (count<(l-m)&&temp->next!=NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("%d\n",temp->data);
}
int main()
{
    node *head = NULL;
    int n,m;
    printf("Enter number of nodes you want to enter:");
    scanf("%d", &n);
    printf("Enter values:");
    for (int i = 0; i < n; i++)
    {
        int val = 0;
        scanf("%d", &val);
        makell(&head, val);
    }
    display(head);
    printf("Enter m:");
    scanf("%d", &m);
    displaym(head,m);
    return 0;
}