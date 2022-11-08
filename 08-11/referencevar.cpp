#include<iostream>
using namespace std;
int main(){
	int n = 10;
	int &k = n;
	cout<<"n: "<<n<<endl;
	cout<<"k: "<<k<<endl<<endl;
	k++;
	cout<<"n: "<<n<<endl;
	cout<<"k: "<<k<<endl<<endl;
	n++;
	cout<<"n: "<<n<<endl;
	cout<<"k: "<<k<<endl<<endl;

	return 0;
}