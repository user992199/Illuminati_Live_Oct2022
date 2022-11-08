#include<iostream>
using namespace std;
int increment_by_10(int n){
	n += 10;
	cout<<"inside IB10: "<<n<<endl;
	return n;
}
int main(){
	int n = 20;
	cout<<"inside main: "<<n<<endl;
	increment_by_10(n);
	cout<<"inside main: "<<n<<endl;
	return 0;
}