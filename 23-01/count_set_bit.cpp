#include<iostream>
using namespace std;
int main(){
	int n = -70, sb = 0;
	for(int i = 0; i < 32; i++){
		sb += (n&1);
		n >>= 1;
	}
	cout<<sb<<endl;
	return 0;
}