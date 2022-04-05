#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],i,n,k;
printf("Enter the ");
scanf("%d",&n);
printf("Enter");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
printf("Found at location""%d",i);
exit(0);
}
}
printf("Not");
}

