#include<iostream>
#include<cstring>
using namespace std;
class c1{
private:
	string userid;
	string password;
public:
	int nop;
	c1(){
		cout<<"cons\n";
	}
	c1(c1 &t){
		userid = t.get_userid();
		password = t.password;
		cout<<"t.nop"<<t.nop<<endl;
		nop = t.nop+10;
	}
	c1(string nid, string npw, int np){
		userid = nid;
		password = npw;
		nop = np;
		cout<<"inside constructor of "<<userid<<endl;
	}
	~c1(){
		cout<<"inside destructor of "<<userid<<endl;
	}
	string get_userid(){
		return userid;
	}
	void set_userid(string n, string pass){
		if(pass != password){
			cout<<"wrong password\n";
			return;
		}
		userid = n;
	}
	// return type
	// operator
	int operator + (c1 &b){
		return nop + b.nop;
	}
	void operator = (c1 &t){
		userid = t.get_userid();
		password = t.password;
		cout<<"t..nop"<<t.nop<<endl;
		nop = t.nop+10;
	}
};
int main(){
	c1 a("a1", "123", 10);
	// cout<<a.get_userid()<<endl;
	// c1 b(a);
	c1 b = a;
	c1 c;
	c = b;
	cout<<b.get_userid()<<endl;
	// a.set_userid("hello", "123");
	// cout<<a.get_userid()<<endl;	
	cout<<a+b<<endl;
	return 0;
}