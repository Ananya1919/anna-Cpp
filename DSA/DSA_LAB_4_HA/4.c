#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef struct {
int data[MAX];
int top;
}stack;

void ini(stack *s)
{
s->top=-1;
}

int push(stack *s,int val)
{
if(s->top== MAX-1)
{
printf("Overflow\n");
return 1;
}
s->top++;
s->data[s->top]=val;
return 0;
}

int pop(stack *s,int *val)
{
if(s->top==-1)
{
printf("Underflow\n");
return 1;
}
*val=s->data[s->top];
s->top--;
return 0;
}

int empty(stack s)
{
if(s.top==-1)
return 1;
else
return 0;
}

int sort(stack inf,stack *out,int n);
void display(stack s);
void displayarray(int *k,int n);
void sortarray(int *p,int n,int *q);
int main()
{
int *k;
int n;
printf("how many number you want to insert:");
scanf("%d", &n);
k=malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
printf("give data:");
scanf("%d", (k+i));
}
int *p;
p=malloc(n*sizeof(int));
sortarray(k,n,p);
displayarray(p,n);
}
void displayarray(int *k,int n)
{
for(int i=0;i<n;i++)
{
printf("%d\n",k[i]);
}
}
void display(stack s)
{
while(s.top>-1)
{
printf("%d\n", s.data[s.top]);
s.top--;
}
printf("\n");
}

void sortarray(int *p,int n,int *q)
{
int i;
stack s,s1;
ini(&s);
ini(&s1);
for(i=0;i<n;i++)
{
push(&s,p[i]);
}
sort(s,&s1,n);
for(i=0;i<n;i++)
{
pop(&s1,&q[i]);
}
}

int sort(stack inf,stack *out,int n)
{
int temp[n];
int i=0;
while(inf.top!=-1)
{
pop(&inf,&temp[i]);
i++;
}
for(i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(temp[i]>temp[j])
{
int k=temp[i];
temp[i]=temp[j];
temp[j]=k;
}
}
}
for(i=0;i<n;i++)
{
push(out,temp[i]);
}
}