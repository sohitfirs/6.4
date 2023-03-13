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
	
	char buf;
	int a = 0;
	
	for(int i=strlen(rts); i/2>1; i--)
	{
		buf=rts[i-1];
		rts[i-1]=rts[a];
		rts[a]=buf;
		a++;
	}
	puts(rts);
	system("pause");
}
