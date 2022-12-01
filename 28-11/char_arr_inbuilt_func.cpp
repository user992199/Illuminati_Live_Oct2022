#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	char b[] = "world123";
	cout<<strlen(a)<<endl;
	// strcpy(target string, source string)
	cout<<a<<endl;
	cout<<sizeof(b)<<endl;
	// srcpy(a, b);
	// cout<<a<<endl;
	strcat(b, a);
	cout<<b<<endl;
	return 0;
}