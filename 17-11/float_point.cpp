#include<iostream>
using namespace std;
int main(){
	int a;
	float f;
	double d;
	bool b;
	int * ap;
	float * fp;
	double * dp;
	bool * bp;
	ap = &a;
	dp = &d;
	fp = &f;
	bp = &b;
	cout<<ap<<endl;
	cout<<dp<<endl;
	cout<<fp<<endl;
	cout<<bp<<endl;
	return 0;
}