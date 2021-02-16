#include <stdio.h>
int even(int,int);
int main()
{
	int m,n;
	printf("Enter values of m and n whose between even numbers to be printed\n");
	scanf("%d %d",&m,&n);

	printf("even numbers from %d to %d\n",m,n);
    even(m,n);
    getch();
    return 0;
}
int even(int m,int n)
{
    for ( m; m<=n; m++)
	{
		if(m%2 == 0)
		{
		  printf("%d ", m);
		}
	}
	getch();
	return 0;
}
