#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s1 = "hel";
	string s2;
	cout<<(s1>s2)<<endl;
	for(int i = 0; i < 1000; i++)
		cout<<s2[i];
	cout<<"\nEOP\n";
	return 0;
}