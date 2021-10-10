#include<stdio.h>
int stack[100],sstack[100],top=-1,a=-1;

void push(int p, int i)
{
   
    if(i==1)
    {
        
        top++;
        stack[top]=p;
    }
    else if(i==2)
    {
        
        a++;
        sstack[a]=p;
    }
    return;
}
int pop(int i)
{
    int x;
    
    if(i==1)
    {
        x=stack[top];
        top--;
    }
    else if(i==2)
    {
        x=sstack[a];
        a--;
    }
    return x;
}

int peek(int i)
{
    int x;
    
    if(i==1)
    {
        x=stack[top];
        
    }
    else if(i==2)
    {
        x=sstack[a];
     
    }
    return x;
}
void bubbleSort(int p[], int n)
{
	for(int i = 0; i < n; i++)
	{
		push(p[i],1);
	}
	for(int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			while (top != -1)
			{
				int t = stack[top];
				pop(1);

				if (a==-1)
				{
					push(t,2);
				}

				else
				{
					if (peek(2) > t)
					{
						int temp = sstack[a];
						pop(2);
						push(t,2);
						push(temp,2);
					}
					else
					{
						push(t,2);
					}
				}
			}
			p[n - 1 - i] = sstack[a];
			pop(2);
		}

		else
		{
			while (a != -1)
			{
				int t = sstack[a];
				pop(2);

				if (top==-1)
				{
					push(t,1);
				}

				else
				{
					if (stack[top] > t)
					{
						int temp = stack[top];
						pop(1);

						push(t,1);
						push(temp,1);
					}

					else
					{
						push(t,1);
					}
				}
			}
			p[n - 1 - i] = stack[top];
			pop(1);
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d\n",p[i]);
	}
	
}

int peekLowest(int q[],int x)
{
	return q[0];
}

int peekHighest(int q[], int x)
{
	return q[x-1];
}

int peekMiddle(int q[], int x)
{
	return q[x/2];
}
int main()
{
	int x,i;
	printf("Enter size of stack :");
	scanf("%d",&x);
	int arr[x],sorted[x];
	printf("Enter %d elements into stack: \n",x);
	for(i=0;i<x;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<x;i++)
		sorted[i]=arr[i];
	
	printf("\n\nPrinting stack after sorting :\n");
	bubbleSort(sorted, x);
	printf("\nPeeking lowest element: %d\n",peekLowest(sorted,x));
	printf("\nPeeking highest element: %d\n",peekHighest(sorted,x));
	printf("\nPeeking middle element: %d\n",peekMiddle(sorted,x));
	return 0;
}