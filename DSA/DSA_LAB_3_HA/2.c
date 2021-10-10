#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *head = NULL;
Node *tail = NULL;
int main()
{
    int choice;
	void create_list();
	void insertAtBeg();
	void insertAtEnd();
	void insertAtPos();
	void deleteAtBeg();
	void deleteAtEnd();
	void deleteAtPos();
	void display_list(); 
	void display_list_pos();
	void search();
	int countNodes(Node *head);
	printf("\nCircular Singly Linked List\n");
    printf("\n1.Create List");
	printf("\n2.Display List");
	printf("\n3.Insert at beginning");
	printf("\n4.Insert at end");
	printf("\n5.Insert after a node");
	printf("\n6.Delete at beginning");
	printf("\n7.Delete at end");
	printf("\n8.Delete at position");
	printf("\n9.Display List from a position"); 
	printf("\n10.Search for an element");
	printf("\n11.Count no. of nodes");
    printf("\n12.Exit\n");
    while(1)
    {
    	printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create_list(); 
            break;
        case 2:
            display_list(); 
            break;
        case 3:
        	insertAtBeg();
        	break;
        case 4:
        	insertAtEnd();
        	break;
        case 5:
        	insertAtPos();
        	break;
        case 6:
        	deleteAtBeg();
        	break;
        case 7:
        	deleteAtEnd();
        	break;
        case 8:
        	deleteAtPos();
        	break;	
        case 9:
        	display_list_pos();
        	break;
        case 10:
        	search();
        case 11:
        	countNodes(head);
        	break;
        case 12:
            exit(0); 
        }
    }
	return(0);
}
void create_list()
{
	int c;
	Node *temp, *n;
    do{
        n = (struct node*)malloc(sizeof(struct node));
    	printf("\nEnter the data: ");
    	scanf("%d", &n->data);
    	n->next = n;
    	if(head == NULL)
		{
			head = tail = temp = n;
		}
		else
		{
			temp->next = n;
			temp = temp->next;
		}
		temp->next = head; 
		tail = temp;
		printf("\nEnter your choice to continue press 1 otherwise 0: ");
    	scanf("%d",&c);
    }while(c!=0);
}
void display_list()
{
	Node *temp;
	temp = head;
	if (temp == NULL)
    printf("\nList is empty");
    else
    {
        while (temp->next != head) 
        { 
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void insertAtBeg()
{
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	printf("Enter the element: ");
	scanf("%d",&temp->data);
	temp->next = tail->next;
	tail->next = temp;
	head = temp;	
}
void insertAtEnd()
{
	Node *temp;
	temp = (Node *)malloc(sizeof(Node));
	printf("\nEnter the element: ");
	scanf("%d",&temp->data);
	temp->next = tail->next;
	tail->next = temp;
	tail = temp;
}
void insertAtPos()
{
	Node *temp,*t;
	int key;
	t = tail->next;
	printf("Enter the key after which new node to be inserted: ");
	scanf("%d",&key);
	do{
		if(t->data == key)
		{
			temp = (Node *)malloc(sizeof(Node));
			printf("Enter the element to be inserted: ");
			scanf("%d",&temp->data);
			temp->next = t->next;
			t->next = temp;
			if(t == tail)
			tail = temp;
			return;
		}
		t = t->next;
	}while(t != tail->next);
	printf("\n%d not present in the list\n",key);
}
void deleteAtBeg()
{
	Node *temp = tail->next;
	head = temp->next;
	tail->next = temp->next;
	free(temp);
}
void deleteAtEnd()
{
	Node *temp, *p;
	p = tail->next;
	while(p->next != tail)
	{
		p = p->next;
	}
	p->next = tail->next;
	temp = tail;
	tail = p;
	free(temp);	
}
void deleteAtPos()
{
	Node *prev, *temp;
	int i=1,pos;
	printf("Enter the position of node to be deleted: ");
	scanf("%d",&pos);
	temp = tail->next;
	while(i < pos)
	{
		prev = temp;
		temp = temp->next;
		++i;
	}
	prev->next = temp->next;
	if(temp == tail)
		tail = prev;
	free(temp);
}
void display_list_pos()
{
	int n, i=1;
	Node *temp, *halt;
	temp = head;
	printf("Enter the start position: ");
	scanf("%d",&n);
	if (temp == NULL)
        printf("\nList is empty");
    else
    {
    	while(i<n)
    	{
    		temp = temp->next;
    		++i;
		}
		halt = temp;
        while (temp->next != halt)
        { 
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void search()  
{  
    Node *temp;  
    int item,i=0,flag=1;  
    temp = head;   
    if(temp == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (temp->next != head)  
        {  
            if(temp->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            temp = temp -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
} 
int countNodes(Node* head)
{
    Node* temp = head;
    int result = 0;
    if (head != NULL) {
        do {
            temp = temp->next;
            result++;
        } while (temp != head);
    }
    printf("Total number of node is :%d",result);
}