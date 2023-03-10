#include<iostream>
using namespace std;
struct PHANSO
{
	int x;
	int y;
};
void nhapxuat(PHANSO z)
{
	cout << "nhap phan so:";
	cout << "nhap tu so:";
	cin >> z.x;
	cout << "nhap mau so:";
	cin >> z.y;
	cout << "xuat phan so: " << z.x << "/" << z.y<<"\n";
}
void tonghieu()
{
	PHANSO a, b;
	PHANSO kq;
	cout << "nhap tu so cua a: ";
	cin >> a.x;
	cout << "nhap mau so cua a: ";
	cin >> a.y;
	cout << "nhap tu so cua b: ";
	cin >> b.x;
	cout << " nhap mau so cua b: ";
	cin >> b.y;
	kq.x = b.y * a.x + a.y * b.x;
	kq.y = a.y * b.y;
	cout << "tong cua 2 phan so a va b la: "<<kq.x<<"/"<<kq.y << "\n";
	kq.x = b.y * a.x - a.y * b.x;
	cout << "hieu cua 2 phan so a va b la: " << kq.x << "/" << kq.y << "\n";
}
void tichthuong()
{
	PHANSO a, b;
	PHANSO kq;
	cout << "nhap tu so cua a: ";
	cin >> a.x;
	cout << "nhap mau so cua a: ";
	cin >> a.y;
	cout << "nhap tu so cua b: ";
	cin >> b.x;
	cout << " nhap mau so cua b: ";
	cin >> b.y;
	kq.x = a.x * b.x;
	kq.y = a.y * b.y;
	cout << "tich cua 2 phan so a va b la: " << kq.x << "/" << kq.y << "\n";
	kq.x = a.x * b.y;
	kq.y = a.y * b.x;
	cout << "thuong cua 2 phan so a va b la: " << kq.x << "/" << kq.y << "\n";
}
int main()
{
	PHANSO z;
	nhapxuat(z);
	tonghieu();
	tichthuong();
	return 0;
}