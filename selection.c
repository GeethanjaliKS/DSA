#include<stdio.h>
#include<stdlib.h>
void selection_sort();
int n,a[10];
void main()
{
int i,j;
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
selection_sort();
printf("Sorted elements are");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
void selection_sort()
{
int i,j,temp,min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]<a[j])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}

}
