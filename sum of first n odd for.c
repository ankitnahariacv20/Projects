#include <stdio.h>
#include <conio.h>
#include <math.h>
int oddsquares(int);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    oddsquares(n);
    getch();
    return 0;
}
int oddsquares(int a)
{
    int i=1;
    float sum=0;

    for(i;i<=a;i++)
    {
        if(i%2!= 0)
        {
            printf("%d and the square is %f\n",i,pow(i,2));
            sum=sum+i*i;
        }
    }
    printf("The sum of squares of odd numbers upto %d is %f ",a,+sum);
    getch();
    return 0;
}
