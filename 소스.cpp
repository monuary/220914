#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int* ptr = new int;
	int& ref = *ptr;//포인터의 참조자 가능
	ref = 20;
	cout << *ptr << endl;
	return 0;
}