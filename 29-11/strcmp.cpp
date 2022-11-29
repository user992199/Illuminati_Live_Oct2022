#include<iostream>
#include<cstring>
using namespace std;
void print_list(char list[100][10], int n){
	for(int i = 0; i < n; i++){
		cout<<list[i]<<endl;
	}
}
int tokenizer(char sentence[], char list[100][10]){ 
	// i -> counting sentence character
	// count -> number of words
	// wi -> counting word character
	int i = 0, count = 0, wi = 0; // i = 0
	while(true){
		if(sentence[i] == ' '){
			list[count][wi] = '\0';
			count++;
			wi = 0;
		}else if(sentence[i] == '\0'){
			if(i == 0) return 0;
			else{
				list[count][wi] = '\0';
				return ++count;
			}
		}
		else list[count][wi++] = sentence[i]; // list[0][0] = 'H'
		i++;
	}
}
void swap_char_arr(char a[], char b[]){
	char temp[10];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
void bubble_sort_strings(char list[100][10], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(strcmp(list[j], list[j+1])>0){
				swap_char_arr(list[j], list[j+1]);
			}
		}
	}
}
int main(){
	// char sentence[] = "";
	char sentence[] = "deinner dinner chicken winner apple pie";
	char list[100][10];
	int n = tokenizer(sentence, list);
	cout<<"words:- "<<n<<endl;
	cout<<"unsorted list:-\n";
	print_list(list, n);
	bubble_sort_strings(list, n);
	cout<<"sorted list:-\n";
	print_list(list, n);
	return 0;
}