//both square and cube//
#include<stdio.h>
#include<conio.h>

int main()
{
   int no, square, cube;
   
   printf("\n enter any number to display it's cube and cube=");
   scanf("%d",&no);
   
   printf("\n square of %d is %d",no,(no*no));
   
   
   printf("\n cube of %d is %d",no,(no*no*no));
   
   printf("\n thanks.");
   
   getch();
   return 0;
}