#include<iostream>
using namespace std;
int max(int x, int y, int z = 0);
int main()
{
	int a, b, c;
	cin >> a >> b >> c ;
	cout<<"三个数最大值：" << max(a, b, c) << endl;
	cout << "两个数最大值：" << max(a, b) << endl;
	return 0;
}
int max(int x, int y, int z)
{
	if (x < y) x = y;
	if (x < z) x = z;
	return x;
}

/*注意：1.如果函数的定义在函数调用之前，则在函数的定义中给出默认参数的默认值；
如果函数的定义在函数的调用之后，但在函数的调用之前有声明时，
则必须在函数的声明中给出默认参数的默认值*/