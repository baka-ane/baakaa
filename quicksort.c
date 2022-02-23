#include <stdio.h>
#define size 100
QUICKSORT(int A[],int BEG,int END) {
int Q;
if(BEG<END) 
{
Q=PARTITION(A,BEG,END);
QUICKSORT(A,BEG,Q-1);
QUICKSORT(A,Q+1,END);
}
}
PARTITION(int A[],int BEG,int END) {
int X,t,i,j;
X=A[END];
i=BEG-1;
for(j=BEG;j<=END-1;j++)
{
if(A[j]<=X) 
{
i=i+1;
t= A[i];
A[i]=A[j];
A[j]=t;
}
}
t= A[i+1];
A[i+1]=A[END];
A[END]=t;
return i+1;
}
int main()
{
int n,i;
int a[10];
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
QUICKSORT(a,0,n-1); 
printf("After sorting the elements are:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
