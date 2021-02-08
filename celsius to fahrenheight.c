#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float c,f;
 printf("Enter temperature in fahrenheight\n");
 scanf("%f",&f);
 printf("temperature in celsius is %f",c=(f-32)*(0.55));
 getch();
 return 0;
 }
