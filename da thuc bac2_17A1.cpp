#include <iostream>
using namespace std;
class Dathuc2
{
	private:
	int a,b,c;
	public:
	Dathuc2(int a=0,int b=0, int c=0){
	this->a=a;	
	this->b=b;
	this->c=c;
	}
	~Dathuc2(){
		
	}
	void xuat(string tb);
	Dathuc2 cong(Dathuc2 dt){
		Dathuc2 kq;
		kq.a=a+dt.a;
		kq.b=b+dt.b;
		kq.c=c+dt.c;
		return kq;
	}
	Dathuc2 tru(Dathuc2 dt){
		Dathuc2 kq;
		kq.a=a-dt.a;
		kq.b=b-dt.b;
		kq.c=c-dt.c;
		return kq;
	}
};
void Dathuc2::xuat(string tb){
	cout<<tb<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}
int main(int argc, char *argv[])
{
	Dathuc2 dt1(1,2,3),dt2(1,2,4);
	Dathuc2 cong,tru;
	cong=dt1.cong(dt2);
	tru=dt1.tru(dt2);
	dt1.xuat("Da thuc 1 la: ");
	dt2.xuat("Da thuc 2 la: ");
	cong.xuat("Tong 2 da thuc la: ");
	tru.xuat("Hieu 2 da thuc la: ");
	
	return 0;
}