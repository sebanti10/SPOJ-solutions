//5.FCTRL2-'Small Factorials'
//value of factorial to be stored in a string


#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,n1,m=0,rem,a[200],temp,i=0;
		scanf("%d", &n);
		n1=n;
		while(n1!=0)
		{
			rem=n1%10;
			a[i]=rem;
			n1/=10;
			i++;
			m++;
		}
		
		int index=0,x=0;
		for(i=2;i<n;i++)
		{
			temp=0;
			for(index=0;index<m;index++)
			{
				x= a[index]*i + temp;
				a[index]= x%10;
				temp=x/10;
			}
	
			while(temp!=0)
			{
				a[index]=temp%10;
				temp/=10;
				index++;
				m++;
			}
		}
		
		for(i=m-1;i>=0;i--)
			printf("%d", a[i]);
		printf("\n");
	}
	
	return 0;
}
