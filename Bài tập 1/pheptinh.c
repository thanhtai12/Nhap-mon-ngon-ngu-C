#include <stdio.h>
int main(void)
{
int a,b;
    //khai bao bien a, b//
	a = 3;
	b = 5;
	//gan cac gia tri a = 3, b = 5//
	int tong, hieu, tich;
	//khai bao kieu int la tong, hieu, tich, thuong theo dinh dang: a + b = 8, a-b=-2,a*b=15,a/b=0//
	double thuong;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	getchar();
	//thay doi khai bao bien thuong va ap dung ep kieu de ket qua a/b=0.6//
	return 0;
}
