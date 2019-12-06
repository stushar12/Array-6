#include<stdio.h>
int main()
{                             //program to check weather a triplet exist in an array or not whose sum is 0
  int n,arr[10],c=0,largest;
    int sum;
  printf("\nEnter the number of elements ");
  scanf("%d",&n);
  printf("\n Enter the elements ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  largest=arr[0];
  for(int i=0;i<n;i++)
  {
    if(largest>arr[i])
    largest=arr[i];
  }
  for(int i=0;i<n;i++)
  {
   sum=0;
    for(int j=i;j<n;j++)
    {
sum=sum+arr[j];
if(sum>largest)
  {
    largest=sum;
  }
}
}
printf("\n Subarray with largest sum is =%d",largest);
}
