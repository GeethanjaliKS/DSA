#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int q[max_size];
void enqueue(int);
int dequeue();
int front=-1;
int rear=-1;
void enqueue(int ele)
{
if(rear==max_size-1)
{
printf("queue is full");
exit(0);
}
q[++rear]=ele;
if(front==-1)
front=0;
}
int dequeue()
{
int ele;
if(front==-1)
{
printf("queue is empty");
exit(0);
}
ele=q[front];
if(front==rear)

front=rear=-1;
else
front=front++;
}
void display()
{
int i;
if(front==-1)
{
printf("queue is empty");
exit(0);
}
printf("queue elements are");

for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
void main()
{
int ch,opt=1,ele;
while(opt)
{
printf("1.insert\n2.delete\n3.display\n4.exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("insert the element");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("enter valid number");
break;
}}}
