//2.ADDREV-'Adding Reversed Numbers'

#include<stdio.h>
int reverse(int num)
{
	int rem,reverse=0;
	while(num>0)
	{
		rem=num%10;
		reverse= reverse*10 + rem;
		num/=10;
	}
	return reverse;
}
int main()
{
	int N,a,b,sum;
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d %d", &a,&b);
		sum=reverse(a)+reverse(b);
		printf("%d\n", reverse(sum));
	}
}
