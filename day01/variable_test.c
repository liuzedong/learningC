#include <stdio.h>
/**
下面是变量的练习和使用
*/


int main() {
	int i;
	char c;
	float f;
	double d;


	i = 24;
	c = 'L';
	f = 3.14;
	d = 3.141592653;

	printf("我今年%d岁啦\n", i);
	printf("我姓%c\n", c);
	printf("圆周率是%.2f\n", f);
	printf("精确的圆周率是%11.9f\n", d);
}
