#include<stdio.h>
#include<stdlib.h>
int main(){

int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;

system("cls");
printf("enter the number of rows");
scanf("%d",&r);

printf("enter the number of columns");
scanf("%d",&c);

printf("enter the first matrix element=\n");
for(i=0;i<r;i++)
{
	for(j=0;j<r;j++)
		{

			scanf("%d",&a[i][j]);

			
		}
}

printf("Enter the second matrix elements=\n");
for(i=0;i<r;i++)
{
	for(j=0;j<r;j++)
		{

			scanf("%d",&b[i][j]);

			
		}
}

printf("multiplication of the matrix=\n");
for(i=0;i<r;i++)
{
	for(j=0;j<r;j++)
		{

		  mul[i][j]=0;
		  for(k=0;k<c;k++)
 			{

				mul[i][j]+=a[i][j]*b[i][j];
				}

			
		}
}



for(i=0;i<r;i++)
{
	for(j=0;j<r;j++)
		{

                 printf("%d\t",mul[i][j]);

			
		}
}
printf("\n");
return 0;
}
//return 0;

//}
