#include<iostream>
using namespace std;
void nhap(int n, int a[])
{
	int* p = a;
	int i;
	cout << "nhap mang: ";
	for (i = 0; i < n; i++)
		cin >> p[i];
}
void xuat(int n, int a[])
{
	int* p = a;
	int i;
	cout << "cac phan tu trong mang gom: ";
	for (i = 0; i < n; i++)
		cout << p[i] << " ";
}
void tong(int n, int a[])
{
	int* p = a;
	int i, S = 0;
	for (i = 0; i < n; i++)
		S = S + p[i];
	cout << "tong cac phan tu trong mang la: " << S;
}
void SapXepMangGiamDan(int n, int a[])
{
	int t;
	int b[100];
	int* p;
	p = &a[0];
	for (int i = 0; i < n; i++) {
		b[i] = *(p + i);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[i] < b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
	cout << "1c.Mang sap xep giam dan la: ";
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
}
void dem(int n, int a[])
{
	int x, i, d = 0;
	int* p = a;
	cout << "nhap gia tri cua x: ";
	cin >> x;
	for (i = 0; i < n - 1; i++)
		if (p[i] == x)
			d++;
	cout << "so lan xuat hien phan tu " << x << " la: " << d;
}
void xuatcacphantuchannhohon20(int n, int a[])
{
	int* p = a;
	int i;
	cout << "xuat cac phan tu chan nho hon 20: ";
	for (i = 0; i < n; i++)
		if (p[i] % 2 == 0 && p[i] < 20)
			cout << p[i];
}
void vitri(int n, int a[])
{
	int* p = a;
	int i, k = 0, min;
	min = p[0];
	for (i = 0; i < n; i++)
		if (min > p[i])
		{
			min = p[i];
			k = i;
		}
	cout << "vi tri phan tu nho nhat la: " << k;
}
void daydaonguoc(int n, int a[])
{

	int* p = a;
	int i;
	cout << "so dao nguoc la: ";
	for (i = n - 1; i >= 0; i--)
		cout << p[i] << " ";
}
int main()
{
	int n, a[100];
	cout << "nhap gioi han mang: ";
	cin >> n;
	nhap(n, a); cout << "\n";
	xuat(n, a); cout << "\n";
	tong(n, a); cout << "\n";
	SapXepMangGiamDan(n, a); cout << "\n";
	dem(n, a); cout << "\n";
	xuatcacphantuchannhohon20(n, a); cout << "\n";
	vitri(n, a); cout << "\n";
	daydaonguoc(n, a);
}
