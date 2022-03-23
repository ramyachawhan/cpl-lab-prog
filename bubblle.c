#include<stdio.h>

int main()
{
  int A[100];
  int i,j,n,temp;
  printf("Enter the value of n :");

  scanf("%d",&n);

  printf("enter the unsorted array :");
  
for(i=0;i<n;i++)
 {   
   scanf("%d",&A[i]);

 }

//bubble sorting

for(i=0;i<(n-1);i++)
{
  for(j=0;j<n-i-1;j++)
{
  if(A[j]>A[j+1])
{
  temp=A[j];
  A[j]=A[j+1]; 
  A[j+1]=temp;


}

}

}
  
printf("The sorted array is : \n");
for(i=0;i<n;i++)
{
  printf("%d\n",A[i]);

}


return 0;
}
