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
void emptycheck(node *head)
{
    if (head == NULL)
        printf("empty\n");
    else
        printf("Not empty\n");
}
void insert(node **head, int val, int pos)
{
    node *temp = *head;
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
    n->next = NULL;
    int i = 0;
    if (pos == 0)
    {
        n->next = *head;
        *head = n;
        return;
    }
    while (i < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
}
void del(node **head, int pos)
{
    node *temp = *head;
    int i = 0;
    if (pos == 0)
    {
        node *tod = *head;
        *head = temp->next;
        free(tod);
        return;
    }
    while (i < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    node *tod = temp->next;
    temp->next = temp->next->next;
    free(tod);
}
void keydel(node **head, int key)
{
    node *temp = *head;
    int i = 0;
    if (temp->data == key)
    {
        node *tod = *head;
        *head = temp->next;
        free(tod);
        return;
    }
    while (temp->next->data != key)
    {
        temp = temp->next;
        i++;
    }
    node *tod = temp->next;
    temp->next = temp->next->next;
    free(tod);
}
void count(node *head)
{
    int i = 0;
    node *temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    printf("Count is:%d\n", i);
}
void find(node *head, int key)
{
    node *temp = head;
    int i = 0;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            printf("Found at position:%d\n", i);
            break;
        }
        i++;
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    int n;
    printf("Enter number of nodes you want to enter:");
    scanf("%d", &n);
    int ch;
    printf("Enter values:");
    for (int i = 0; i < n; i++)
    {
        int val = 0;
        scanf("%d", &val);
        makell(&head, val);
    }
    printf("1)Traversal of the list\n2)Empty Check\n3)Insert at certain position\n4)Delete at any position\n5)Delete node for a key\n6)Count the total number of nodes\n7)search for an element\n");
    printf("Enter you choice:");
    scanf("%d", &ch);
    int pos = 0, val = 0, key;
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            display(head);
            break;
        case 2:
            emptycheck(head);
            break;
        case 3:
            printf("Enter the position and value of insertion:");
            scanf("%d%d", &pos, &val);
            insert(&head, val, pos);
            break;
        case 4:
            printf("Enter the positio:");
            scanf("%d", &pos);
            del(&head, pos);
            break;
        case 5:
            printf("What do you want to delete? ");
            scanf("%d", &key);
            keydel(&head, key);
            break;
        case 6:
            count(head);
            break;
        case 7:
            printf("Which element you want to search:");
            scanf("%d", &key);
            find(head, key);
            break;
        default:
            printf("\nEnter valid choice\n");
            break;
        };
        printf("Want to exit? enter 0:");
        scanf("%d", &ch);
    }
    return 0;
}