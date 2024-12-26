#include<iostream>
using namespace std;

string lexicograph(string &s){
    if(s.size() == 0){
        s += 'a';
        return s;
    }

    bool flag = true;

    for(int i = s.size()-1; i>=0; i--){
        if(s[i] != 'z' && i>=0){
            s[i]++;
            flag = false;
            break;
        }
    }

    if(flag){
        s += 'a';
    }
    
    return s;
}

int main(){
    string s;
    getline(cin,s);

    lexicograph(s);

    cout<<"printing lexigraphic string : "<<s;
}