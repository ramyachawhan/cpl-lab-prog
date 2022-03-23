#include<stdio.h>
#include<math.h>


int main()
{


float a,b,c,d,r1,r2;

printf("Enter the values of a,b,c as coefficients");
scanf("%f %f %f",&a,&b,&c);

d=b*b-4*a*c;

   if(a==0)

   { 
      printf("the formed equation is not quadratic");

   
   }

   else if(d==0)

   {
      r1=-b/(2.0*a);
      r2=-b/(2.0*a);
      //r1=%f+i%f;

     printf("roots are equal =%f %f",r1,r2);
   
              

    }

   else if(d>0)

{
  
     r1=-b+sqrt(d)/(2.0*a);
     r2=-b-sqrt(d)/(2.0*a);
     

     printf("r1=%f r2=%f",r1,r2);

}

 

     else if(d<0)
{

    printf("the equation has real and imaginary roots");

    float real =(-b)/(2.0*a);
    float img = (sqrt(d))/(2.0*a);
     

    printf("r1=%f+i%f",real,img);
    printf("r2=%f+i%f",real,img);


}

   else
 {

   printf("It will not give roots");


}



return 0;

//getch()
}

