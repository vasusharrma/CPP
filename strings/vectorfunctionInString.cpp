//Fucntion of vector that can be used on strings

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // string a;
    // string b = "Chai Wale";

    // b += 'y';
    //sort function is a string in acending order of ascii value
    // sort(b.begin()  , b.end());
    // reverse(b.begin() , b.end());
    // cout<<b<<endl;

    // isupper(a); will return true if char is upper elsewise false
    // islower(a); will rturn true if char is lower  elsewise false

    // integer to string 

    // int a = 3094;
    // cout<<to_string(a)<<endl;

    //string inbuilt functions 

    // 1. find() 2. replace() 3. erase() 4. insert()

    //find functin return the index of the first occurance of the substr

        string a = "hello buddybuddy";
        string b = "buddy";
        cout<<a.find(b)<<endl;

        // if we couldn't find the string that is called as string::npos
        // if(p == string::npos) return 1;



    return 0;
}