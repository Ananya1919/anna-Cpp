#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
	struct node*prev;
    struct node *next;
} node;
void create(node **head, node **tail, int val)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = val;
	n->prev=NULL;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = *tail = n;
        return;
    }
    (*tail)->next = n;
	n->prev=*tail;
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
void duplicate(node **head)
{
    node *temp = *head;
    node *s;
    node *n = *head;
    while (temp != NULL && temp->next != NULL)
    {
        n = temp;
        while (n->next != NULL)
        {
            if (temp->data == n->next->data)
            {
                s = n->next;
                n->next = s->next;
				s->next->prev=n;
                free(s);
            }
            else
                n = n->next;
        }
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL, *tail = NULL;
    int val, ch, n, i;
    printf("1.)Create a Linked list\n2.)Display the Linked List\n3)duplicate\n");
    printf("Enter Your Choice:");
    scanf("%d", &ch);
    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            printf("How many nodes? ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                create(&head, &tail, rand() % 10);
            }
            break;
        case 2:
            display(head);
            break;
        case 3:
            duplicate(&head);
            break;
        default:
            printf("wrong input");
            break;
        }
        printf("to exit enter 0 or to continue enter your choice again:");
        scanf("%d", &ch);
    }
}