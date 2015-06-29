#include <stdio.h>

/*
逆序（按照从300度到0度的顺序）打印
温度转换表
*/
int main(void)
{
	int fahr;
	
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
	
	return 0;
} 
