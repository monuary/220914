#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* ptr = new int;
	int& ref = *ptr;//�������� ������ ����
	ref = 20;
	cout << *ptr << endl;
	return 0;
}