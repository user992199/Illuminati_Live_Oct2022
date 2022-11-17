#include<iostream>
using namespace std;
int main(){
	char a = 'a', b = '\t';
	int k = -109876;
	char c = 'c', d = '\n', e = ' ', f = '\0';
	char *ap = &a, *bp = &b, *cp = &c, *dp = &d, *ep = &e, *fp = &f;
	cout<<"fp:"<<fp<<endl;
	cout<<"ap:"<<ap<<endl;
	cout<<"bp:"<<bp<<endl;
	cout<<"cp:"<<cp<<endl;
	cout<<"dp:"<<dp<<endl;
	cout<<"ep:"<<ep<<endl;
	cout<<"fp:"<<fp<<endl;
	cout<<"sizeof(ap):"<<sizeof(ap)<<endl;
	cout<<"sizeof(bp):"<<sizeof(bp)<<endl;
	cout<<"sizeof(cp):"<<sizeof(cp)<<endl;
	cout<<"sizeof(dp):"<<sizeof(dp)<<endl;
	cout<<"sizeof(ep):"<<sizeof(ep)<<endl;
	cout<<"sizeof(fp):"<<sizeof(fp)<<endl;
	cout<<"sizeof(a):"<<sizeof(&a)<<endl;
	cout<<"sizeof(b):"<<sizeof(&b)<<endl;
	cout<<"sizeof(c):"<<sizeof(&c)<<endl;
	cout<<"sizeof(d):"<<sizeof(&d)<<endl;
	cout<<"sizeof(e):"<<sizeof(&e)<<endl;
	cout<<"sizeof(f):"<<sizeof(&f)<<endl;
	return 0;
}