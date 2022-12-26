#include<iostream>
using namespace std;
class c1{
	int windows;
public:
	char * name; // 8
	int model; // 4
	int price; // 4
	const int tyres; // 4
	static int count; // 4
	void print_detail();
	void update_name(char * n);
	// parameterized constructor
	c1():name(NULL), model(0), price(0), tyres(4){
		// tyres = 4;
		count++;
		windows = price + tyres;
	}
	c1(char * n, int m, int p, int t, int c):name(NULL), model(m), price(p), tyres(t){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// tyres = t;
		windows = price + tyres;
		count++;
	}
	c1(c1 &x): tyres(x.tyres){
		// name = x.name;
		name = new char[strlen(x.name) + 1];
		strcpy(name, x.name);
		price = x.price;
		model = x.model;
		windows = price + tyres;
		count++;
	}
	bool operator>(c1 &b){
		return price>b.price ? true : false;
	}
	bool operator<(c1 &b){
		return price<b.price ? true : false;
	}
	bool operator>=(c1 &b){
		return price>=b.price ? true : false;
	}
	bool operator<=(c1 &b){
		return price<=b.price ? true : false;
	}
	int get_windows(){
		return windows;
	}
	void set_windows(int w){
		windows = w;
	}
};
void c1::print_detail(){
	cout<<endl;
	cout<<"name:  "<<name<<endl;
	cout<<"model: "<<model<<endl;
	cout<<"price: "<<price<<endl;
	cout<<"tyres: "<<tyres<<endl;
	cout<<endl;
}
void c1::update_name(char * n){
	if(name != NULL){
		delete []name;
	}
	name = new char[strlen(n)+1];
	strcpy(name, n);
}
int c1::count = 0;
ostream& operator<<(ostream & os, c1 & o){
	cout<<endl;
	os << "name:    " << o.name << endl;
	os << "price:   "  << o.price << endl;
	os << "model:   "  << o.model << endl;
	os << "tyres:   "  << o.tyres << endl;
	os << "windows: "  << o.get_windows() << endl;
	cout<<endl;
	return os;
}
istream& operator>>(istream & is, c1 & o){
	char arr[1000];
	is>>arr;
	o.update_name(arr);
	is>>o.price;
	is>>o.model;
	o.set_windows(o.price+o.tyres);
	// is>>tyres;
	return is;
}
int main(){
	char arr[] = "object 1";
	c1 o1(arr, 10, 50, 8, 5);
	o1.print_detail();
	c1 o2(o1);
	o2.name[7] = '2';
	o1.name[2] = '$'; 
	o1.price = 78;
	o2.model = 100;
	c1 o3(o2);
	o1.print_detail();
	o2.print_detail();
	c1 o4;
	arr[7] = '4';
	o4.update_name(arr);
	o4.print_detail();
	cout<<"addresses\n";
	cout<<(int*)o1.name<<endl;
	cout<<(int*)o2.name<<endl;
	cout<<"total objects: "<<c1::count<<endl;
	if(o1>o2){
		cout<<"o1 has a greater price\n";
	}else{
		cout<<"o1 does not have a greater price\n";
	}
	// o2.print_detail();
	cout<<"\n*******************\n";
	cout << o1 << endl;
	c1 o5;
	cin >> o5;
	cout << o1 << o2 << o3 << o4 << o5;
	return 0;
}