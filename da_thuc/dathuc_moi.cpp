#include <iostream>
using namespace std;
class DT2
{
	private:
	int a,b,c;
	public:
	DT2(int a=0,int b=0,int c=0){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	~DT2(){}
	void xuat(){
		cout<<"Da thuc: "<<a<<"x^2+"<<b<<"x+"<<c<<endl;
	} 
	DT2 tong(DT2 dt1){
		DT2 dt2;
		dt2.a=a+dt1.a;
		dt2.b=b+dt1.b;
		dt2.c=c+dt1.c;
		return dt2;
	}
};
int main(int argc, char *argv[])
{
	DT2 dt1(1,1,1);
	DT2 dt2(1,2,3);
	DT2 dt3;
	dt3=dt1.tong(dt2);
	dt3.xuat();
	return 0;
}