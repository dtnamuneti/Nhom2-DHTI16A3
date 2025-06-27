#include <iostream>
using namespace std;
class Diem{
	private:
	double x,y;
	public:
	Diem(double xx=0,double yy=0)
	{
		x=xx;y=yy;
	}
	void nhap();
	void xuat();
	void dichuyen(double xx,double yy);
};
class TG{
	private:
	Diem A,B,C;
	public:
	TG(Diem A, Diem B, Diem C){
		this->A=A;
		this->B=B;
		this->C=C;
	}
	void xuat();
};
void TG::xuat(){
	A.xuat();
	B.xuat();
	C.xuat();
}
void Diem::nhap()
{
	cout<<"Nhap toa do ";
	cin>>x>>y;
}
void Diem::xuat()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
void Diem::dichuyen(double dx,double dy)
{
	x+=dx;
	y+=dy;	
}
int main(int argc, char *argv[])
{
	TG t(Diem(0,0),Diem(2,0),Diem(0,3));
	t.xuat();
	
	return 0;
}