#include<stdio.h>
#include<math.h>

int main()
{  
   
    int i;
    float x,t,sum,sum1,y;
    

    printf("Enter the angle\n");
    scanf("%f",&x);
    
    y=x;
    x=3.14+(x/180);
    
    sum=x;
    t=x;
    i=1;
    

   do
     {
	i=i+2;
        t=(-t*x*x)/((i-1)*i);
        sum=sum+t;
         }

     while(fabs(t)>0.0001);
     printf("sin(%f) using taylors series=%f\n",y,sum);
     sum1=sin(x);
     printf("using builtin function for sin(%f)=%f",y,sum);
    

return 0;
}
