#include<iostream>
using namespace std;
#define pie 22/7
int main(){
	int *rptr = NULL;
	int *kptr = 0;

	int r = 7;
	rptr = &r;
	cout<<rptr<<endl;
	{
		cout<<2*pie*(*rptr)<<endl;
	}
	return 0;
}