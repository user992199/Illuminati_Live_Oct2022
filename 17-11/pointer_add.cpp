#include<iostream>
using namespace std;
int main(){
	bool b = 0;
	double * ip = (double*)&b;
	for(int i = 0; i < 5; i++)
		cout<<ip + i<<endl;	
	return 0;
}