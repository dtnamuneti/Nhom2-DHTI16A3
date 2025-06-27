#include <iostream>
using namespace std;
class sp{
	private:
	double a,b;
	public:
	sp(double a=0, double b=0)
		{
			this->a=a;
			this->b=b;
		}
	void xuat();
	sp operator+(sp u);
	void operator-();
	friend sp operator+(double d, sp u);
	friend sp operator+(sp u, sp v);
};
sp operator+(sp u, sp v){
	sp p(u.a+v.a,u.b+v.b);
	return p;
}
void sp::xuat(){
	cout<<a<<"+"<<b<<"i"<<endl;
}

sp sp::operator+(sp u){
	sp kq(a+u.a,b+u.b);
	return kq;
}

sp operator+(double d, sp u){
	sp kq(d+u.a,u.b);
	return kq;
}

void sp::operator-(){
	this->a*=-1;
	this->b*=-1;
}

int main(int argc, char *argv[])
{
	sp p1(1,2);
	sp p2(3,-1);
	p1.xuat();
	p2.xuat();
	sp p3=7+p2;
	p3.xuat();
	
	return 0;
}