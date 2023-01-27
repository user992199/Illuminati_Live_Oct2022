#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
	// will not give error
	map< vector<int>, string> m;
	// will give error
	// unordered_map< vector<int>, string> um;

	return 0;
}