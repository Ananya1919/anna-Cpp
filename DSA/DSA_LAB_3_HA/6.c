#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
void create(node **h, int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->prev = n->next = NULL;
    if (*h == NULL)
    {
        *h = n;
        return;
    }
    node *temp = *h;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node *h)
{
    node *temp = h;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int length(node *h)
{
    node *temp = h;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void printmid(node *h)
{
    int l = length(h);
    if (l == 0)
    {
        return;
    }
    node *temp = h;
    for (int i = 0; i < l / 2 ; i++)
    {
        temp = temp->next;
    }
    printf("%d\n", temp->data);
}
int main()
{
    node *head = NULL;
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);
        create(&head, val);
    }
    display(head);
    printmid(head);
    return 0;
}