#include<iostream>
#include<cstring>
using namespace std;
bool check_permutation(string s1, string s2){
	int f1[256] = {0};
	int f2[256] = {0};
	for(int i = 0; i < s1.size(); i++){
		f1[s1[i]]++;
	}
	for(int i = 0; i < s2.size(); i++){
		f2[s2[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(f1[i] != f2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	check_permutation(s1, s2) ? cout<<"Yes\n" : cout<<"No\n";
}