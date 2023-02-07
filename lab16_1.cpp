#include <iostream>
using namespace std;


int main(){
	int a = 5;
	string b ="A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int *z = x;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";

	cout<<&a<<" ";
	cout<<&b<<" ";
	cout<<&c<<" ";
	cout<<&x<<" ";
	cout<<&y<<" ";
	cout<<&z<<"\n";
	c = "F";
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
	*y ="W";
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
	*x = 6;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
	*z = 7;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
	
	return 0;
}
