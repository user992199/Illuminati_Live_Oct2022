#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
class fruit{
public:
	int sweetness;
	string name;
	int price;
	double weight;
	fruit(int s, string n, int p, double w){
		sweetness = s;
		name = n;
		price = p;
		weight = w;
	}
};
class compare_min_price{
public:
	bool operator() (const fruit &a, const fruit &b){
		return a.price > b.price;
	}
};
class compare_max_price{
public:
	bool operator() (const fruit &a, const fruit &b){
		return a.price < b.price;
	}
};
class compare_min_name{
public:
	bool operator() (const fruit &a, const fruit &b){
		return a.name > b.name;
	}
};
int main(){
	priority_queue<fruit, vector<fruit>, compare_min_name > q;
	fruit a(7, "Apple", 100, 4.5);
	fruit b(6, "Banana", 30, 4);
	fruit c(3, "Carrot", 10, 5);
	fruit m(8, "Mango", 50, 7);
	fruit g(7, "Grapes", 40, 3);
	q.push(a);
	q.push(b);
	q.push(c);
	q.push(m);
	q.push(g);
	while(!q.empty()){
		fruit temp = q.top();
		cout<<"Name: "<<temp.name<<endl;
		cout<<"Price: "<<temp.price<<endl;
		cout<<"Sweetness: "<<temp.sweetness<<endl;
		cout<<"Weight: "<<temp.weight<<endl<<endl;
		q.pop();
	}cout<<endl;
	return 0;
}