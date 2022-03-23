#include<stdio.h>
int main()
{
  int A[100];
  int i,j,n,temp,first,last,mid,key;
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


first=0;
last=n-1;
printf("enter key:\n");
scanf("%d",&key);

while(first<=last);
{
  mid=(first+last)/2;	
if(key==A[mid])
{
 printf("%d found at %d",key,mid);
return 1;
}


else if(key<A[mid])
{
last=mid-1;
}

else{
  first=mid+1;
}

}

printf("%d not found\n",key);

return 0;
}
