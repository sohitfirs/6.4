/* https://github.com/sohitfirs/6.4.git */

#include <stdio.h>
#include <string.h>
#include <cstdlib>

main()
{
	char str[100];
	gets(str);
	
	for(int i=0; i<strlen(str); i++)
	{
		str[i]=str[i+1];
	}
	
	puts(str);
	
	char rts[100];
	gets(rts);
	
	int len = strlen(rts);
	int buf, i, j;
	
	for (i=0, j=len-1; i<j; i++, j--)
	{
		buf=rts[i];
		rts[i]=rts[j];
		rts[j]=buf;
	}
	
	
	puts(rts);
	system("pause");
}
