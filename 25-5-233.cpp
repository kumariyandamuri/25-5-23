//PROGRAM TO COUNT NUM OF LOWERCASE ,SPECIALCHAR//
#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	char str[100];
	int i=0;
	int lowercase,specialchar;
	lowercase=specialchar=0;
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	ch=str[i];
	if(ch>='a'&&ch<='z')
	lowercase++;
	else
	specialchar++;
}
	printf("\nLowercase:%d",lowercase);
	printf("\nSpecialchar:%d",specialchar);
}
	
	

	

