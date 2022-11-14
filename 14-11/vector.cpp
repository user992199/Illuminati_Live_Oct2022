#include<iostream>
#include<vector>
using namespace std;
int main(){
	// syntax for declaration of vector
	// vector<datatype> identifier;
	vector <int> v;
	// cout<<v.capacity()<<endl;
	v.push_back(1);
	// cout<<v.capacity()<<endl;
	v.push_back(2);
	// cout<<v.capacity()<<endl;
	v.push_back(3);
	cout<<v.capacity()<<endl;
	// cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	// v[0] = 100;
	// cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	// v[4] = 10;
	// cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
	// v[3] = 10;
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
	cout<<v.size()<<endl;
	v.push_back(16);
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;

	// cout<<v[1]<<endl;
	return 0;
}