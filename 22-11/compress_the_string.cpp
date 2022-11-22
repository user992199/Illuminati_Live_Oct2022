#include<iostream>
#include<cstring>
using namespace std;
string compress(string s){
	int o = 1, n = s.size();
	string k;
	for(int i = 0; i < n-1; i++){
		if(s[i]==s[i+1])
			o++;
		else{
			if(o == 1)
				k += s[i];
			else
				k += s[i] + to_string(o);
			o = 1;
		}
	}
	if(o == 1)
		k += s[n-1];
	else
		k += s[n-1] + to_string(o);
	// cout<<k<<endl;
	return k;
}
int main(){
	string s = "Hhelllllllooooo";
	s = compress(s);
	cout<<s<<endl;
	return 0;
}