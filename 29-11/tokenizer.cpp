#include<iostream>
using namespace std;
int tokenizer(char sentence[]){
	int i = 0, count = 0;
	if(sentence[i] == ' ')
		i++;
	while(sentence[i] != '\0'){
		if(sentence[i] == ' '){
			if(sentence[i-1] == ' '){ i++;continue;}
			cout<<endl;
			count++;
		}else{
			cout<<sentence[i];
		}
		i++;
	}
	if(i != 0) count++;
	cout<<endl;
	return count;
}
int main(){
	// char sentence[] = "";
	char sentence[] = "Hello my name is shub 10";
	cout<<tokenizer(sentence)<<" words were there in the given sentence"<<endl;
	return 0;
}