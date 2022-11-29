#include<iostream>
#include<cstring>
using namespace std;
bool find_word1(char list[][10], char word[], int ls, int ws){
	// this loop will iterate over the strings one by one
	for(int i = 0; i < ls; i++){
		// if(s1 == list[i]){
		// 	return true;
		// }
		// assuming that both the strings are equal
		bool flag = true;
		// this loop will iterate over one string 
		// character by character
		for(int j = 0; j < ws; j++){
			// comparing each character of both words
			// to see if they are equal
			if(list[i][j] == word[j]){
				// if both the words have ended
				// then terminate the loop
				if(word[j] == '\0')
					break;
				// if both words have not ended 
				// then keep comparing characters
				continue;
			}
			// if even a single character mismatches 
			// then break the loop and 
			// start checking the next word
			flag = false;
			break;
		}
		// if the given words has matched with a
		// string present in the given list
		// then return true
		if(flag){
			return true;
		}
	}
	// if none of the words in the list matches
	// then return false
	return false;
}
bool find_word2(char list[][10], char word[], int ls, int ws){
	for(int i = 0; i < ls; i++){
		if(strcmp(word, list[i]) == 0)
			return true;
	}
	return false;
}
bool find_word3(string list[], string word, int ls){
	for(int i = 0; i < ls; i++){
		if(word == list[i])
			return true;
	}
	return false;
}
int main(){
	int ws = 10;
	char list[][10] = {
		"hello",
		"world",
		"bye",
		"bye",
		"now",
		"ture",
		"flase"
	};
	int n = sizeof(list)/sizeof(list[0]);
	char arr[10] = "jello";
	// cin.get(arr, ws);
	if(find_word2(list, arr, n, ws)){
		cout<<"Word is present in the given list\n";
	}else{
		cout<<"Word is not present in the given list\n";
	}
	return 0;
}