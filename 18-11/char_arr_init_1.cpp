#include<iostream>
using namespace std;
int main(){
	// char abc = "a";
	// cout<<abc<<endl;
	// 1st method
	char ch[5] = {'*', '8','t', '\0', '&'};
	// 2nd method
	char arr[] = {'a', 'b', 'c', 'd', '%', 'e', '\0'};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	cout<<arr<<endl;
	// 3rd method
	char str[] = "abcde";
	cout<<sizeof(str)<<endl;
	// 4th method
	char str2[6] = "abcde";
	cout<<str2<<endl;
	// ---
	char ag[10] = "0bc";
	cout<<ag<<endl;
	for(int i = 0; i < 10; i++){
		cout<<(int)ag[i]<<" ";
	}cout<<'\n';
	return 0;
}