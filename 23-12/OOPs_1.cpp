#include<iostream>
#include<cstring>
using namespace std;
class car{
public:
	char * name;
	int door;
	int price;
	int power;
	// default functions
	// non parameterized constructor
	car(){
		cout<<"Inside Constructor function\n";
		name = NULL;
	}
	// parameterized constructor
	car(char *n, int d, int pr, int pw){
		name = new char[strlen(n)+1];
		strcpy(name, n);
		door = d;
		price = pr;
		power = pw;
	}
	// copy constructor
	car(car &temp){
		name = new char[strlen(temp.name)+1];
		strcpy(name, temp.name);
		door = temp.door;
		price = temp.price;
		power = temp.power;
	}
	// deconstructor
	~car(){
		cout<<"inside deconstructor\n";
	}
	void print_details(){
		cout<<"name: "<<name<<endl;
		cout<<"number of doors: "<<door<<endl;
		cout<<"price: "<<price<<endl;
		cout<<"horsepower: "<<power<<endl;
	}
	void update_name(char * arr){
		if(name != NULL){
			delete []name;
		}
		name = new char[strlen(arr)+1];
		strcpy(name, arr);
	}
};
int main(){
	car bmw;
	bmw.update_name("BMW 1");
	bmw.door = 4;
	bmw.price = 4000000;
	bmw.power = 50;
	bmw.print_details();
	// bmw.update_name("BMW 1");
	// bmw.print_details();
	car audi("x5", 2, 10000000, 100);
	audi.print_details();
	car mac(audi);
	mac.update_name("apple 1");
	mac.print_details(); 
	return 0;
}