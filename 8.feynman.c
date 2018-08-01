//SAMER08F - Feynman

#include<stdio.h>
int main()
{
	long long int N;
	scanf("%lld", &N);
	while(N)
	{
		long long int sum=0;
		int i;
		for(i=N;i>0;i--)
			sum=sum+(i*i);
		printf("%lld\n", sum);
		scanf("%lld", &N);			
	}
	return 0;
}
