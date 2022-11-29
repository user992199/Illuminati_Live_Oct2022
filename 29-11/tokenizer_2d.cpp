#include<iostream>
using namespace std;
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
int main(){
	// char sentence[] = "";
	char sentence[] = "10 is the number for ten";
	char list[100][10];
	int n = tokenizer(sentence, list);
	cout<<"words:- "<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<list[i]<<endl;
	}
	return 0;
}