//4.FCTRL-'Factorial'
//trailing zeros

#include<stdio.h>
int trailing(int );
int main()
{
	int T,N;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		printf("%d\n", trailing(N));
	}
	return 0;
}

int trailing(int N)
{
	int i,count=0;
	for(i=5;N/i>=1;i*=5)
		count+=N/i;
	return count;
}
