#include<stdio.h>
#include<math.h>

int main()
{

int i,n;
float a[22],mean,sd,sum,var;
float *p;


printf("\nenter number of elements");
scanf("%d",&n);
printf("Enter the element :");

p=a;


for(i=0;i<n;i++)

{
scanf("%f",p);
p++;
}

p=a;

printf("\ninput elements:");
for(i=0;i<n;i++)

{
scanf("%f",p);
p++;
}

p=a;

sum=sd=mean=var=0;

for(i=0;i<n;i++)
{
sum=sum+(*p);

}


mean=sum/n;

p=a;

for(i=0;i<n;i++)
{

var=var+pow((*p-mean),2);
p++;
}


var=var/n;


sd=sqrt(var);

printf("\n\nmean=%f\nsum=%f\nsd=%f\nvar=%f\n",mean,sum,sd,var);

return 0;

}
