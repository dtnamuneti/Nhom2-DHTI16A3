#include <iostream>
using namespace std;
class Dathuc2
{
	private:
	int a,b,c;
	public:
	Dathuc2(int a=0,int b=0,int c=0)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	~Dathuc2(){
		
	}
	void xuat();
	Dathuc2 tong(Dathuc2 dt1);
	Dathuc2 hieu(Dathuc2 dt1);
};
void Dathuc2::xuat(){
	cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}
Dathuc2 Dathuc2::tong(Dathuc2 dt1){
	Dathuc2 dt;
	dt.a=a+dt1.a;
	dt.b=b+dt1.b;
	dt.c=a+dt1.c;
	return dt;
}
Dathuc2 Dathuc2::hieu(Dathuc2 dt1){
	Dathuc2 dt;
	dt.a=a-dt1.a;
	dt.b=b-dt1.b;
	dt.c=a-dt1.c;
	return dt;
}
int main(int argc, char *argv[])
{
	Dathuc2 dt1(1,2,3),dt2(4,5,6),dttong,dthieu;
	dttong=dt1.tong(dt2);
	dthieu=dt1.hieu(dt2);
	cout<<"Da thuc 1: ";
	dt1.xuat();
	cout<<"Da thuc 2: ";
	dt2.xuat();
	cout<<"Da thuc tong: ";
	dttong.xuat();
	cout<<"Da thuc hieu: ";
	dthieu.xuat();
	return 0;
}