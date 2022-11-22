#include<iostream>
#include<cstring>
using namespace std;
void rev_str(string &str){
	int e = str.size() - 1;
	int s = 0;
	while(s<e){
		swap(str[s++], str[e--]);
	}

}
int main(){
	string s = "Hello";
	rev_str(s);
	cout<<s<<endl;
	return 0;
}