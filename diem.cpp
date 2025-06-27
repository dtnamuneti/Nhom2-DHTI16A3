#include <iostream>
using namespace std;
class Diem{
	private:
	double x,y;
	public:
	void khoitao(double xx,double yy)
	{
		x=xx;y=yy;
	}
	void nhap();
	void xuat();
	void dichuyen(double xx,double yy);
};
void Diem::nhap()
{
	cout<<"Nhap toa do ";
	cin>>x>>y;
}
void Diem::xuat()
{
	cout<<x<<","<<y<<endl;
}
void Diem::dichuyen(double dx,double dy)
{
	x+=dx;
	y+=dy;	
}
int main(int argc, char *argv[])
{
	Diem a;
	a.nhap();
	a.xuat();
	a.dichuyen(1,2);
	a.xuat();
	Diem b=a;
	//b.khoitao(3,4);
	//b.dichuyen(1,1);
	b.xuat();
	
	return 0;
}