#include<iostream>
using namespace std;
int main(){
	char a = 'a', b = '\t';
	int k = -109876;
	char c = 'c', d = '\n', e = ' ', f = '\0';
	char *ap = &a, *bp = &b, *cp = &c, *dp = &d, *ep = &e, *fp = &f;
	cout<<"ap:"<<(int*)ap<<endl;
	cout<<"bp:"<<(int*)bp<<endl;
	cout<<"cp:"<<(int*)cp<<endl;
	cout<<"dp:"<<(int*)dp<<endl;
	cout<<"ep:"<<(int*)ep<<endl;
	cout<<"fp:"<<(int*)fp<<endl;
	cout<<"a:"<<(int*)&a<<endl;
	cout<<"b:"<<(int*)&b<<endl;
	return 0;
}