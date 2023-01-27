#include<iostream>
#include<utility> // to use pair
using namespace std;
int main(){
	// syntax
	// declare
	// pair<string, int> p;
	// p.first = "Hello";
	// p.second = 45;
	// init
	// pair<string, int> p("Hello", 45);
	// pair<string, int> p = {"Hello", 45};
	// pair<string, int> p (make_pair("Hello", 45));
	pair<string, int> p = make_pair("Hello", 45);

	pair <int, pair<bool, char> > trip;
	trip.first = 14;
	trip.second.first = true;
	trip.second.second = '9';
	cout<<"first: "<<trip.first<<endl;
	cout<<"second.first: "<<trip.second.first<<endl;
	cout<<"second.second: "<<trip.second.second<<endl;
	cout<<trip<<endl;
	cout<<trip.second<<endl;
	cout<<p.first<<" -> "<<p.second<<endl;
	return 0;
}