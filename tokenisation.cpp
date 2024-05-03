#include <bits/stdc++.h>
using namespace std;

bool isNum(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]<'0' || s[i]>'9'){
            return false;
        }
    }
    return true;
}

int main() {
 
    unordered_map<string, int> keywords;
    unordered_map<string, int> operators;
    unordered_map<string, int> identifier;
    unordered_map<string, int> constants;

    set<string> keys ({"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "template", "this", "typedef", "union", "unsigned", "virtual", "void", "volatile", "while", "cout", "main", "endl", "cin", "include", "define", "using", "namespace", "std", "vector", "pair", "map", "set", "unordered_map", "unordered_set", "list", "stack", "queue", "priority_queue", "algorithm", "cmath", "math.h", "bits/stdc++.h"});
    
    set<string> ids ({"+", "-", "*", "/", "(", ")", "{", "}", "[", "]", ",", ";", "\"", "'", ":", "<", ">", "=", "%", "<<", ">>"});

    fstream file;
    string s;

    string filename = "ip.txt";
  
    file.open(filename.c_str());

    while (file >> s){
        string temp = s;
        cout << s << endl;
        if(keys.find(temp)!=keys.end()){
            keywords[temp]++;
        }
        else if(ids.find(temp)!=ids.end()){
            operators[temp]++;
        }
        else if(isNum(temp)){
            constants[temp]++;
        }
        else{
            identifier[temp]++;
        }
    }

    cout<<"Number of identifier: "<<identifier.size()<<endl;
    cout<<"Number of operators: "<<operators.size()<<endl;
    cout<<"Number of keywords: "<<keywords.size()<<endl;
    cout<<"Number of constants: "<<constants.size()<<endl<<endl;


    cout<<"keywords: "<<endl;
    for(auto i:keywords){
        cout<<i.first<<": "<<i.second<<endl;
    }
    cout<<"\noperators: "<<endl;
    for(auto i:operators){
        cout<<i.first<<": "<<i.second<<endl;
    }
    cout<<"\nidentifier: "<<endl;
    for(auto i:identifier){
        cout<<i.first<<": "<<i.second<<endl;
    }
    cout<<"\nconstants: "<<endl;
    for(auto i:constants){
        cout<<i.first<<": "<<i.second<<endl;
    }
}