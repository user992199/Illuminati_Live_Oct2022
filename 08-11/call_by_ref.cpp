#include<iostream>
using namespace std;

void increment_by_10(int &in){
	in += 10;
	cout<<"inside IB10: "<<in<<endl;
}

int main(){
	int mn = 20;
	cout<<"inside main: "<<mn<<endl;
	increment_by_10(mn);
	cout<<"inside main: "<<mn<<endl;
	return 0;
}