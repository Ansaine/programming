#include<bits/stdc++.h>
using namespace std;

// insert(word) - O(len)
// search(word) - O(len)
// startswith(prefix)   - O(len)

struct Node                             // A Trie Node
{
    Node* links[26];
    bool flag = 0;

    bool check(char ch){
        return (links[ch-'a']!= NULL);
    }

    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void setEnd(){
        flag = 1;
    }

    bool isEnd(){
        return flag;
    }
};


class Trie {
    
Node* root;
    
public:
    
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        
        Node* node = root;

        for(int i = 0; i<word.size();i++){

            if(!node->check(word[i]))
                node->put(word[i], new Node());     //IMP
            
            node = node->get(word[i]);
        }

        node->setEnd();
    }
    
    bool search(string word) {
        
        Node* node = root;
        
        for(int i = 0; i<word.size();i++){
            
            if(!node->check(word[i]))
                return 0;

            node = node->get(word[i]);
        }
        
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        
        Node* node = root;
        
        for(int i = 0; i<prefix.size();i++){
            if(!node->check(prefix[i]))
                return 0;

            node = node->get(prefix[i]);
        }
        
        return 1;
    }
};
