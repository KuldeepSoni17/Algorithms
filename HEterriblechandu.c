#include <stdio.h>

int main()
{
    int tc,j;
    char x;
    scanf("%d",&tc);
    x = getchar();
    for(j=0;j<tc;j++)
    {
    	int *str;
    	int m;
    	m = str;
    	str = 15;
    	printf("%d",str);
    	do
    	{
    		x=getchar();
    		str = x;
            str++;
    	}while(x != '\n');
    	while(str != m)
    	{
    		printf("%d",str);
    		str--;
    	}
    }
    return 0;
}

