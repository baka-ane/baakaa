#include <stdio.h>
int main() {
int a[50],n,i,temp,min,j;
printf("\nEnter the limit:");
scanf("%d",&n);
printf("\nEnter the %delements of the array:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++) 
{
if(a[j]<a[min]) 
{
min=j;
}
}
if(min!=i) 
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("\n Displaying the sorted elements:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
