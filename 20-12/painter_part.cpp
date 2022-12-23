#include<bits/stdc++.h>
#include<cstring>
using namespace std;
bool sol_valid( int a,  int b,  int m,  int n,  int arr[]){
     int paint_count = 1, painter_length = 0;
    for( int i = 0; i < n; i++){
        if(painter_length + arr[i] <= m){
            painter_length += arr[i];
        }else{
            painter_length = arr[i];
            paint_count++;
        }
        if(paint_count > a){
            return false;
        }
    }
    return true;
}
 int bin_search( int a,  int b,  int s,  int e,  int n,  int arr[]){
     int ans = e;
    while(s < e){
         int m = (s+e)/2;
        if(sol_valid(a, b, m, n, arr)){
            ans = m % 10000003;
            e = m-1;
        }else{
            s = m+1;
        }
    }
    return (ans*b)%10000003;
}
int main(){
     int a, b, temp = 0, n = 0, sum = 0, arr[100000] = {0};
    cin>>a>>b;
    cin.ignore();
    string str;
    getline(cin, str);
    for( int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            arr[n++] = temp;
            temp = 0;
        }else{
            temp = temp*10 + str[i] - '0';
        }
    }
    arr[n++] = temp;
    temp = 0;
    for( int i = 0; i < n; i++){
        sum += arr[i];
    }
    sort(arr, arr+n);
    cout<<n<<endl;
    int s = arr[n-1];
    int e = sum;
    cout<<bin_search(a, b, s, e, n, arr)<<endl;
    return 0;
}