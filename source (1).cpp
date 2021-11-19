#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
bool chan_Le(int k);

int hieu(int a, int b) {
	return a - b;
}

int tong(int a, int b) {
	return a + b;
}

int tich(int a, int b) {
	return a * b;
}

int chan_Le(int k) {
	if (k % 2 == 0) return 1;
	return 0;
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

	int k;
	cout << "nhap so k: ";
	cin >> k;
	if (chan_Le(k) == 1) cout << k << "la so chan";
	else cout << k << "la so le"

	switch (phepToan)
	{

		case '-':
		{
			cout << "Hieu la: " << hieu(a, b);

		case '+':
		{
			cout << "Tong la: " << tong(a, b);
			break;

		}
		case '*':
		{
			cout << "Tich la: " << tich(a, b);
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