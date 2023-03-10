#include<iostream>
#include<math.h>
using namespace std;
struct DIEM
{
	int x;
	int y;
};
void nhapxuat()
{
	DIEM z;
	cout << "nhap toa do cua z: ";
	cin >> z.x;
	cin >> z.y;
	cout << "xuat toa do cua z: ";
	cout << z.x << ";" << z.y;
}
void khoangcach()
{
	DIEM a, b,z;
	double S;
	cout << "nhap toa do cua a: ";
	cin >> a.x;
	cin >> a.y;
	cout << "nhap toa do cua b: ";
	cin >> b.x;
	cin >> b.y;
	z.x = (a.x - b.x) * (a.x - b.x);
	z.y = (a.y - b.y) * (a.y - b.y);
	S = sqrt(z.x + z.y);
	cout << "khoang cach giua 2 diem a va b la: " << S;
}
void diemdoixungquagoctoado()
{
	DIEM z,a;
	cout << "nhap toa do cua z: ";
	cin >> z.x;
	cin >> z.y;
	a.x = -z.x;
	a.y = -z.y;
	cout << "diem doi xung qua goc toa do cua z la: " << a.x << ";" << a.y;
}
void diemdoixungquatrucOxOy()
{
	DIEM z, a, b;
	cout << "nhap toa do cua z: ";
	cin >> z.x;
	cin >> z.y;
	a.x = z.x;
	a.y = -z.y;
	cout << "diem doi xung qua truc Ox cua z la: " << a.x << ";" << a.y<<"\n";
	b.x = -z.x;
	b.y = z.y;
	cout << "diem doi xung qua truc Oy cua z la: " << b.x << ";" << b.y;
}
int main()
{
	nhapxuat(); cout << "\n";
	khoangcach(); cout << "\n";
	diemdoixungquagoctoado(); cout << "\n";
	diemdoixungquatrucOxOy();
}