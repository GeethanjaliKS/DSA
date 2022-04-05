#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int q[MAX_SIZE];
int front=-1;
int rear=-1;
void Enqueue(int ele)
{
rear=(rear+1)%MAX_SIZE;
if(rear==front)
{
printf("queue is full");
exit(0);
}
else
if(front==-1)
front=0;
q[rear]=ele;
}
int dequeue()
{
int ele;
if(front=rear=-1)
{
printf("queue empty");
exit(0);
}
else if(front==rear)
{
ele=q[front];
printf("the dequeue elements is %d",q[front]);
front=(front+1)%MAX_SIZE;
}}
void display()
{
if(front=rear=-1)
{
printf("queue is empty");
exit(0);
}
else
{
printf("element in queue are");
for(int i=front;i<=rear;i++)
{
printf("%d",q[i]);
}}}
void main()
{
int ch,opt=1,n,ele;
printf("1.insert\n2.delete\n3.display\n4.exit");
printf("enter your choice");
scanf("%d",&ch);
while(opt)
{
switch(ch)
{
case 1:printf("enter no.of elements");
scanf("%d",&ele);
Enqueue(ele);
break;
case 2:ele=dequeue();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("do you want to continue(y/n)");
scanf("%d",&opt);
}
}
}

