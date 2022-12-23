#include<iostream>
using namespace std;
void sol1(){
	int c1, c2, c3, c4;
	cin>>c1>>c2>>c3>>c4;
	int n_rick, n_cab;
	cin>>n_rick>>n_cab;
	int ar[n_rick], ac[n_cab];
	for(int i = 0; i < n_rick; i++){
		cin>>ar[i];
	}
	for(int i = 0; i < n_cab; i++){
		cin>>ac[i];
	}
	int r_min = 0, c_min = 0;
	for(int i = 0; i < n_rick; i++){
		r_min += min(ar[i] * c1, c2);
	}
	r_min = min(r_min, c3);
	for(int i = 0; i < n_cab; i++){
		c_min += min(ac[i] * c1, c2);
	}
	c_min = min(c_min, c3);
	cout<<min(r_min + c_min, c4)<<endl;
	// cout<<"\nmin cost in test case "<<t<<"=>"<<min(r_min + c_min, c4)<<endl;
}
void sol2(){
	int c1, c2, c3, c4;
	cin>>c1>>c2>>c3>>c4;
	int n_rick, n_cab;
	cin>>n_rick>>n_cab;
	int ar, ac;
	int r_min = 0, c_min = 0;
	for(int i = 0; i < n_rick; i++){
		cin>>ar;
		r_min += min(ar * c1, c2);
	}
	for(int i = 0; i < n_cab; i++){
		cin>>ac;
		c_min += min(ac * c1, c2);
	}
	r_min = min(r_min, c3);
	c_min = min(c_min, c3);
	cout<<min(r_min + c_min, c4)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sol2();
	}
	return 0;
}