#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n; // n = 5
	int i = 1, num, max; // i = 0, num, max = 0
	cin>>max;
	while(i<n){	// i < n -> 5 < 5
		cin>>num; // num <- 5 => num = 5
		if(num<max){ // num > max => 5 > 32
			max = num; // max = 32
		}
		i = i+1; // i = 5
	}
	// cout<<"num: "<<num<<endl;
	// cout<<"i: "<<i<<endl;
	cout<<"max: "<<max<<endl;
	// cout<<max<<endl; // o/p-> max => 32
	return 0;
}