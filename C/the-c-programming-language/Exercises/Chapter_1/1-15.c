/*
ʹ�ú���ʵ���¶�ת������
*/ 
#include <stdio.h>

float fahr_celsius(int fahr);

int main(void)
{
	float fahr;
	
	for (fahr = 0; fahr <= 300; fahr += 20) {
		printf("%3.0f\t%6.1f\n", fahr, fahr_celsius(fahr));
	}
	
	return 0;
}

float fahr_celsius(int fahr)
{
	return (5.0/9.0) * (fahr - 32);
}
