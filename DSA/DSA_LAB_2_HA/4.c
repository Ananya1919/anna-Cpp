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
node *reverse(node *head)
{
    node *cptr = head;
    node *pptr = NULL;
    node *nptr;
    while (cptr != NULL)
    {
        nptr = cptr->next;
        cptr->next = pptr;
        pptr = cptr;
        cptr = nptr;
    }
    return pptr;
}
int main()
{
    node *head = NULL;
    int n;
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
    node*ptr=reverse(head);
    display(ptr);
    return 0;
}