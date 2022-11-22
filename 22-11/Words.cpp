#include<iostream>
#include<cstring>
using namespace std;
string seperate_the_words(string s){
	string temp;
	temp += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i]>='A' and s[i] <= 'Z'){
			temp += ' ';
			temp += s[i];
		}else{
			temp += s[i];
		}
	}
	return temp;
}
int main(){
	string s = "HiMyNameIs";
	getline(cin, s);
	s = seperate_the_words(s);
	cout<<s<<endl;
	return 0;
}