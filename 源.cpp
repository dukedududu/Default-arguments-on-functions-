#include<iostream>
using namespace std;
int max(int x, int y, int z = 0);
int main()
{
	int a, b, c;
	cin >> a >> b >> c ;
	cout<<"���������ֵ��" << max(a, b, c) << endl;
	cout << "���������ֵ��" << max(a, b) << endl;
	return 0;
}
int max(int x, int y, int z)
{
	if (x < y) x = y;
	if (x < z) x = z;
	return x;
}

/*ע�⣺1.��������Ķ����ں�������֮ǰ�����ں����Ķ����и���Ĭ�ϲ�����Ĭ��ֵ��
��������Ķ����ں����ĵ���֮�󣬵��ں����ĵ���֮ǰ������ʱ��
������ں����������и���Ĭ�ϲ�����Ĭ��ֵ*/