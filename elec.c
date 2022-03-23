#include<stdio.h>

int main()
{

char name[20];

float unit,price,extra,amount,total;

printf("Enter the name");
gets(name);

printf("Enter the number of units used: ");
scanf("%f",&unit);


if(unit<=200)
{
  amount=(unit*0.80)+100;
  puts(name);
  printf("\nunits=%.2f rate=80 paise/unit meter charges=100 price=%.2f",unit,price);

}

else if(unit>200 && unit<=300)

{
   extra=unit-200;
   amount=(unit*0.90)+(unit*0.80)+100;
   puts(name);
   printf("\nunits=%.2f rate=80 paise/unit for 200 units and 90 paise above meter charges=100 price=%f total=%f" ,unit,price,total);


}

else if(unit>300 && unit<400)
{
      puts(name);
      printf("\nunits=%.2f rate=1 rupees/unit meter charges=100 price=%.2f",unit,price);
 
  
  
}

else if(unit>400)
{
   total=unit+(unit*0.15)+100;
   printf("\nunits=%.2f rate=1 rupees/unit meter charges=100 extra charges=0.15percent price=%f",unit,price);

 

}


  return 0;
}

