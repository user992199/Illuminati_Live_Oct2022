#include<iostream>
using namespace std;
class c1{
private:
	char *name;
public:
	c1(){
		cout<<"cons\n";
	}
	c1(char * arr){
		name = new char[strlen(arr)+1];
		strcpy(name, arr);
		cout<<"inside constructor of "<<name<<endl;
	}
	~c1(){
		cout<<"inside destructor of "<<endl;
	}
};
int main(){
	c1 a;
	// c1 a("a object");
	// c1 b("b object");
	// c1 c("c object");
	// cout<<sizeof(c1)<<endl;
	// cout<<sizeof(a)<<endl;
	// c1 a;
	// cout<<sizeof(a)<<endl;
	// cout<<a.name<<endl;
	return 0;
}