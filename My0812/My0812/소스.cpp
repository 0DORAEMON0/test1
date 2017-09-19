#include <stdio.h>

int iX;
int iY;

void Assign(int x, int y)
{
	iX = x;
	iY = y;
}

int Add()
{
	return iX + iY;
}

int main(void)
{
	Assign(2, 3);

	int iResult = Add();

	printf("´õÇÑ °ª : %d \n", iResult);
	getchar();
}