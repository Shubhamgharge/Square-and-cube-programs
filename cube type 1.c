//number of cube//
#include<stdio.h>
#include<conio.h>

int main()
{
   int no, cube;
   
   printf("\n enter any number to display it's cube=");
   scanf("%d",&no);
   
   cube=no*no*no;
   
   printf("\n cube of %d is %d",no,cube);
   
   printf("\n thanks!!");
   
   getch();
   return 0;
}