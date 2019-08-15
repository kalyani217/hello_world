#include <stdio.h>
int sum(int n)
{
	int j,k=0;
	while(n!=0)
	{
		j=n%10;
		k=k+j;
		n=n/10;
	}
	
	
	return k;
}
int main()
{
	
	int k=0,n;
	printf("Enter a four digit number\n");
	scanf("%d",&n);
	k=sum(n);
	printf("%d\n",k);
	return 0;
}
