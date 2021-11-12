#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int tong(int a, int b) {
	return a + b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

	switch (phepToan)
	{
		case '+':
		{
			cout << "Tong la: " << tong(a, b);
			break;
		}
		default:
		{
			cout << "Phep toan khong hop le";
			break;
		}
	}

	system("pause");
	return 0;
}