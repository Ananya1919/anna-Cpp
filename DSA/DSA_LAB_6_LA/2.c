#include<stdio.h>
#include<conio.h>
#define max 5
typedef struct Queue
{
    int r,f;
    int data[max];
}queue;
void  initialize(queue *p);
int empty (queue *p);
int full(queue *p);
void enqueue(queue *p,int x);
int dequeue(queue *p);
void printQueue(queue *p);

void main()
{
    queue q;
    int op,x;
    initialize(&q);

    do
        {
        printf("\n 1. INSERT \n 2. DELETE \n 3. PRINT \n 4. QUIT") ;
        printf("\n Enter your choice");
        scanf("%d",&op);

        switch(op)
            {
                    case 1 : printf("\n Enter a number");
                        scanf("%d",&x);
                        if(!full(&q))
                        {
                        enqueue(&q,x);
                        }
                        else
                        {
                        printf("\n QUEUE IS FULL");
                        }
                        break;

                    case 2 : if(!empty(&q))
                    {
                    x=dequeue(&q);
                    printf("\n DELETED ELEMENT IS %d",x);
                    }
                    else
                    {
                    printf("\n QUEUE IS EMPTY");
                    }
                    break;

                    case 3 : if(!empty(&q))
                    {
                    printQueue(&q);
                    }
                    else
                    {
                    printf("\n QUEUE IS EMPTY");
                    }
                    break;

                    default : printf("\n INVALID OPTION ");


                }

        }while(op!=4);

    }
    void initialize(queue *p)
    {
        p->r=-1;
        p->f=-1;
    }
    int empty(queue *p)
    {
        if(p->r==-1)
        {
            return (1);

        }
        else
        {
            return(0);
        }
    }
    int full(queue *p)
    {
        if(p->r==max-1)
        {
                return(1);
        }
        else
        {
        return(0);
        }
    }
    void enqueue(queue *p,int x)
    {
        if(p->r==-1)
        {
            p->r=p->f=0;
            p->data[p->r]=x;
        }
        else
        {
            p->r=p->r+1;
            p->data[p->r]=x ;
        }
    }
    int dequeue(queue *p)
    {
        int t;
        t=p->data[p->f];
        if(p->f==p->r)
        {
            p->f=-1;
            p->r=-1;
        }
        else
        {
                p->f=p->f=+1;
        }
        return(t);
    }
    void printQueue(queue *p)
    {
        int i;
        for(i=p->f;i<=p->r;i++)
        {
            printf(" %d ",p->data[i]);
        }

    }

