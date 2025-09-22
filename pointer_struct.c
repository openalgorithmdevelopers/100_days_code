#include<stdio.h>

struct CHAR{
	char name[10];
};

int main()
{
	struct CHAR myChar, *pCHAR;
	myChar.name[0] = 'H';
	myChar.name[1] = 'e';
	myChar.name[2] = 'l';
	myChar.name[3] = 'l';
	myChar.name[4] = 'o';
	myChar.name[5] = ' ';
	myChar.name[6] = '1';

	pCHAR = &myChar;

	printf("\n%c", *pCHAR);

}
