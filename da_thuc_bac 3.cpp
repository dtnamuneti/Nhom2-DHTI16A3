#include <iostream>
using namespace std;
class DT3
{
	private:
	int a,b,c,d;
	public:
	DT3(int a=0,int b=0,int c=0,int d=0){
	this->a=a;	
	this->b=b;
	this->c=c;
	this->d=d;
	}
	~DT3(){
		
	}
	void hienthi(){
		cout<<a<<"x^3+"<<b<<"x^2+"<<c<<"x+"<<d<<endl;
	}
	DT3 tong(DT3 dt1){
		DT3 dttong;
		dttong.a=a+dt1.a;
		dttong.b=a+dt1.b;
		dttong.c=c+dt1.c;
		dttong.d=d+dt1.d;
		return dttong;
	}

};
int main(int argc, char *argv[])
{
	DT3 dt1(1,1,2,2);
	DT3 dt2(1,2,3,4);
	DT3 dttong=dt1.tong(dt2);
	dt1.hienthi();
	dt2.hienthi();
	dttong.hienthi();
	return 0;
}