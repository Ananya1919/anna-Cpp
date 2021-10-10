#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void create(node **head, node **tail, int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = *tail = n;
        return;
    }
    (*tail)->next = n;
    *tail = n;
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
void krev(node **head, int k)
{
    if (k == 0)
    {
        return;
    }
    node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = *head;
    temp = *head;
    for (int i = 0; i < k - 1; i++)
    {
        temp = temp->next;
    }
    *head = temp->next;
    temp->next = NULL;
    display(*head);
}
int main()
{
    node *head = NULL, *tail = NULL;
    int val, ch, n, i;
    printf("1. Create a Linked list\n2. Display the Linked List\n3. Rotate k nodes\n");
    printf("Enter Your Choice:");
    scanf("%d", &ch);
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            printf("How many nodes: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Enter element:");
                scanf("%d",&val);
                create(&head, &tail, val);
            }
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter a value:");
            scanf("%d", &val);
            krev(&head, val);
            break;
        default:
            printf("wrong input");
            break;
        }
        printf("to exit enter 0 or to continue enter your choice :");
        scanf("%d", &ch);
    }
}