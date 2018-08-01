//ACPC10A - What’s Next
//AP series

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	while(a||b||c)
	{
	//	int d,r,t,p;
		if((b-a)==(c-b))
		{
			//d=b-a;
			//t=a+3*d;
			printf("AP %d\n",c+(c-b));
		}
		else if((b/a)==(c/b))
		{
			//r=(b/a);
			//p=a*pow(r,3);
			printf("GP %d\n",c*(c/b));
		}
		scanf("%d%d%d", &a,&b,&c);
	}
	
}
