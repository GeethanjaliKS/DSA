#include<stdio.h>
#include<stdlib.h>
typedef struct node* lstptr;
struct node{
int data;
lstptr link;
};

lstptr first=NULL;

lstptr getnode()
{
lstptr ptr;
ptr=(lstptr)malloc(sizeof(struct node));
return ptr;
}

void insertBegin(int ele)
{
lstptr new;
new=getnode();
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
new->link=first;
}
first=new;
}


void insertEnd(int ele)
{
lstptr new,temp;
new=getnode();
new->data=ele;
new->link=NULL;
if(first==NULL)
{
new->link=first;
first=new;
}
else
{
temp=first;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
}}

int deleteBegin()
{
lstptr temp;
if(first==NULL)
{
printf("list is empty");
return 0;
}
else
{
temp=first;
first=first->link;
free(temp);
}}

void deleteEnd()
{
lstptr temp,prev;
if(first==NULL)
{
printf("list is empty");
exit(0);
}
prev=temp=first;
if(first->link==NULL)
{
first=NULL;
free(temp);
}
else
{
prev=first;
//first=first->link;
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}}


lstptr delete_pos(int ele)
{
lstptr prev,temp;
temp=first;
if(first==NULL)
{
printf("empty list");
exit(0);
}
else if(first->data==ele)
{
if(first->link!=NULL)
{
first=first->link;
}
else
first=NULL;
printf("element deleted");
}
else
{
while(temp->data!=ele&&temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}

if(temp->link==NULL && temp->data!=ele)
{
printf("specified item not found");
return(first);
}
else if(temp->link!=NULL)
{
prev->link=temp->link;
}
else
{
prev->link=NULL;
}
free(temp);
return(first);
}
}

void display()
{
lstptr temp;

if(first==NULL)
{
printf("list is empty");
exit(0);
}
else
{
temp=first;
while(temp->link!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
printf("%d\t",temp->data);
}}

void main()
{
int op=1,ch,ele;
while(op)
{
printf("\n1Insert_Begin\n2.Insert_End\n3Delete_begin\n4.delete_end\n5.delete position\n6.display\n7.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the element");
scanf("%d",&ele);
insertBegin(ele);
break;

case 2:printf("enter the element");
scanf("%d",&ele);
insertEnd(ele);
break;

case 3:deleteBegin();
break;

case 4:deleteEnd();
break;

case 5:printf("enter element to be deleted");
       scanf("%d",&ele);
       delete_pos(ele);
break;

case 6:display();
break;
}
printf("\ndo you want continoue(1/0)");
scanf("%d",&op);
}
}

