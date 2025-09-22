#include<stdio.h>
void test(void);
int i = 3;

int main()
{
	int i, j, k;
	i = 3;
	j = 5;

	i = i++ + i++;

	printf("\n%d", i);

	j = 5;

	printf("\n%d", i);

}


void test()
{

	static int i = 6;
	i++;
	printf("\n%d", i);
}
