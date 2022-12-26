// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
class point{
public:
	int x, y;
	char * name;
	point(){
		name = NULL;
		x = y = 0;
	}
	point(char * arr, int x1, int y1){
		name = new char[strlen(arr)+1];
		strcpy(name, arr);
		x = x1;
		y = y1;
	}
	bool operator > (point & p){
		return x > p.x and y > p.y ? true : false;
	}
	bool operator < (point & p){
		return x < p.x and y < p.y ? true : false;
	}
};
ostream& operator<<(ostream& os, point &p){
	os << p.name ;
	return os;
}
int main(){
	char a1[] = "alpha";
	char a2[] = "beta";
	point p1(a1, 15, 25);
	point p2(a2, 10, 15);
	if(p2 < p1){
		cout << p1 << " is greater than " << p2 << endl;
	}
	else if(p2 > p1){
		cout << p2 << " is greater than " << p1 << endl;;
	}else{
		cout << "neither point is greater\n";
	}
	return 0;
}