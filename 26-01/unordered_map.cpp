#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	// syntax
	// declaration
	unordered_map<string, int> um;
	// first method
	// um.insert({"Un", 45});
	// second method
	um.insert(make_pair("nikhil", 45));
	// third method
	pair<string, int> p ("char", 11);
	um.insert(p);
	// fourth method
	um["make"] = 999;
	um.insert(make_pair("make pair", 888));
	um["coding"] = 155;

	for(auto p: um){
		cout<<p.first<<" : "<<p.second<<endl;
	}
	cout<<endl;
	for(int i = 0; i < um.bucket_count(); i++){
		cout<<"i: "<<i<<" -> ";
		for(auto it = um.begin(i); it != um.end(i); it++){
			cout<<it->first<<": "<<it->second<<"; ";
		}cout<<endl;
	}
	return 0;
}