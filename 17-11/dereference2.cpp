#include<iostream>
using namespace std;
int main(){
	char i = '&';
	float * bp;
	bp = (float*)&i;
	cout<<bp<<endl;
	cout<<*bp<<endl;
	return 0;
}