#include <stdio.h>

int main()
{

	int m;
	int n;

	printf("Enter the value of M and N: ");
	scanf("%d %d",&m,&n);


	printf("Even Numbers from %d to %d:\n",m,n);


	while(m<=n)
	{

		if(m%2==0)
			printf("%d ",m);

		m++;
	}

	return 0;
}
