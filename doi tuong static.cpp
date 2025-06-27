#include <iostream>
using namespace std;
class Counter{
	private:
	static int n;
	public:
	Counter(){
		cout<<"Khoi tao co "<<++n<<" phan tu"<<endl;
	}
	~Counter()
	{cout<<"Huy co "<<--n<<" phan tu"<<endl;}
	static void xem()
	{
		cout<<"n= "<<n<<endl;
	}	
};
int Counter::n=0;
int main(int argc, char *argv[])
{
	Counter a,b;
	Counter::xem();
	return 0;
}