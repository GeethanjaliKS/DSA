#include<stdio.h>
#include<stdlib.h>
void bubble_sort();
int n,a[10];
void main()
{
int i;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble_sort();
printf("Elements are sorted\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
void bubble_sort()
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
