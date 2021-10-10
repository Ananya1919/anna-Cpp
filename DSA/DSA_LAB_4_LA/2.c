#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;
    struct node * preptr;
    struct node * nextptr;
}*stnode, *ennode;
 

void creation(int n);
void display();

int main()
{
    int n;
    stnode = NULL;
    ennode = NULL;
	printf("\n\nCreate and display a double linked list :\n");
	printf("-------------------------------------------------------------------\n");	   	

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
 
    creation(n); 
    display();
    return 0;
}
 
void creation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));
 
        if(stnode != NULL)
        {
            printf(" Input data for node 1 : "); 
            scanf("%d", &num);
 
            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;    
                    fnNode->nextptr = NULL;
 
                    ennode->nextptr = fnNode;   
                    ennode = fnNode;            
                }
                else
                {
                    printf(" Memory cannot be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void display()
{
    struct node * tmp;
    int n = 1;
    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        printf("\n\n Data entered on the list are :\n");
 
        while(tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->num);
            n++;
            tmp = tmp->nextptr; 
        }
    }
}