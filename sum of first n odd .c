#include <stdio.h>
#include <conio.h>
#include <math.h>
int squares(int);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    squares(n);
    getch();
    return 0;
}
int squares(int a)
{
    int i=1;
    float sum=0;
    while(i<=a)
    {
        if(i%2!= 0)
        {
            sum=sum+i*i;
        }
        i++;
    }
    printf("The sum of squares of odd numbers till %d is %f ",a,+sum);
    getch();
    return 0;
}
