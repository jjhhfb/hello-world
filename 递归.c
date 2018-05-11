#include <stdio.h>

int MonkeyPeach(int t)
{
	if(t==10)
	{
		return 1;
	}
	else
	{
		return 2*(MonkeyPeach(t+1)+1);
	}
}
/*void main()
{
	int c;
	c = MonkeyPeach(1);
	printf("%d\n",c);
}*/