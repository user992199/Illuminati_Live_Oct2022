#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
class node{
public:
    char data;
    unordered_map<char,node *>h;
    bool is_word_ending;
    node(char data){
        this->data=data;
        is_word_ending=false;
    }    
};
class Trie{
public:
    node * root;
    // char ch;
    Trie(){
        root=new node('\0');
    }    
    void insert(string word){
        node * temp=root;
        for(int i=0;word[i];i++){
            char ch = word[i];
            // bool kya_char_hai=temp->h.count(ch);
            if(!(temp->h.count(ch))){
                temp -> h[ch]=new node(ch);
            }
            temp=temp->h[ch];
        }
        temp -> is_word_ending=true;
    }
    bool word_search(string word){
        node* temp=root;
        for(int i=0;word[i];i++){
            if(temp->h.count(word[i])){
                temp=temp->h[word[i]];
            }else{
                return false;
            }
        }return temp -> is_word_ending;
    }
};

int main(){
    Trie t;
    t.insert("Mac");
    t.insert("Macbook");
    t.insert("ips");
    t.insert("iphone");
    t.insert("Word");
    t.insert("search");
    t.insert("ending");
    string word;
    cin>>word;
    while(word!="end"){
        if(t.word_search(word)){
            cout<<"Word Found\n";
        }else{
            cout<<"Word not found\n";
        }
        cin>>word;

    }


}