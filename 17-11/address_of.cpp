#include<iostream>
using namespace std;
int main(){
	int a = 10;
	float f = 1.13;
	double d = 1.13123123;
	bool b = false;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(f)<<endl;
	cout<<sizeof(d)<<endl;
	cout<<sizeof(b)<<endl;
	cout<<"---------\n";
	cout<<sizeof(&a)<<endl;
	cout<<sizeof(&f)<<endl;
	cout<<sizeof(&d)<<endl;
	cout<<sizeof(&b)<<endl;
	return 0;
}