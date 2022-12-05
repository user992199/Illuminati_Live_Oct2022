// 'a', 'b', 'c'
// move disk 1 from tower a to tower c
#include<iostream>
using namespace std;
void tower_of_hanoi(char s[10], char h[10], char t[10], int n, int &steps){
	// base case
	// if I have to move no disks then simply end the function
	// or return
	if(n==0) return;
	// recursive case
	// move n-1 disks from source tower to helper tower
	tower_of_hanoi(s, t, h, n-1, steps);
	// move base disk from source tower to target tower
	cout<<"Step "<<++steps<<": "<<"Move Disk "<<n<<" from tower "<<s<<" to tower "<<t<<endl;
	// move n-1 disks from helper tower to target tower
	tower_of_hanoi(h, s, t, n-1, steps);
}
int main(){
	char t1[] = "SOURCE", t2[] = "HELPER", t3[] = "TARGET";
	int n = 5, steps = 0;
	tower_of_hanoi(t1, t2, t3, n, steps);
	cout<<"Total Number of steps => "<<steps<<endl;
	return 0;
}