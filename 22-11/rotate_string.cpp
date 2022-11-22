#include<iostream>
#include<cstring>
using namespace std;
void rev_str(string &str, int s, int e){
	while(s<e){
		swap(str[s++], str[e--]);
	}
}
// void rotate_by_k(vector<int> &v, int k){
// 	reverse(v, 0, v.size()-1);
// 	reverse(v, 0, k-1);
// 	reverse(v, k, v.size()-1);
// }
void rotate_string(string &s, int k){
	int n = s.size();
	k = k%n;
	rev_str(s, 0, n-1);
	rev_str(s, 0, k-1);
	rev_str(s, k, n-1);
}
int main(){
	int k = 3;
	cin>>k;
	string s = "Hello";
	cin.ignore();
	getline(cin, s);
	rotate_string(s, k);
	cout<<s<<endl;
	return 0;
}