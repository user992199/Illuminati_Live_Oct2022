#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a1[50] = "hello \0world";
	char a2[] = "world \0hello";
	strcat(a1, a2);
	cout<<a1<<endl;
	cout<<a2<<endl;
	return 0;
}