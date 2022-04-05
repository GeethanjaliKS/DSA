#include<stdio.h>
int main()
{
int a[7],n,i,mid,k,l,h;
printf("Enter total number size");
scanf("%d",&n);
printf("Enter numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the search element:");
scanf("%d",&k);
l=0;
h=n-1;
while(l<=h)
{
mid=(l+h)/2;
if(k==a[mid])
{
printf("Search number found at location""%d",mid);
return 0;
}
else if(k<a[mid])
{
h=mid-1;
}
else
{
l=mid+1;
}}
printf("Search number not found");
}
