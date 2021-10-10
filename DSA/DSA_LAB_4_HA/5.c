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
int sort(stack inf,stack *out);
void display(stack s);
int main()
{
stack s;
int i=0;
ini(&s);
push(&s,8);
push(&s,7);
push(&s,10);
push(&s,3);
display(s);
stack out;
ini(&out);
sort(s,&out);
display(out);
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
int sort(stack inf,stack *out)
{
int temp[4];
int i=0;
while(inf.top!=-1)
{
pop(&inf,&temp[i]);
i++;
}
for(i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
if(temp[i]>temp[j])
{
int k=temp[i];
temp[i]=temp[j];
temp[j]=k;
}
}
}
for(i=0;i<4;i++)
{
push(out,temp[i]);
}
}