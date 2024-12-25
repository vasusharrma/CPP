#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int length(char* arr , int size){

    int len = 0;
    for(int i = 0; i < size; i++){
        char temp = arr[i];

        if(temp == 0){
            return len;
        }
        len++;

    }
    return len;
}



int main(){
    
    // string a;
    //on using cout with char arrays the cour library prints till its find null character 
    char a[100];
    cout<<"Enter the string : ";
    // a = cin.get();
    cin>>a;

    // if we try to find the output of a[size+1] it will print the value till he doesn't find the /0 null character

// for(int i = 0; i< 100; i++){
//     cout<<a[i];
    // }
    // a[6] = 'i';

    cout<<"String is :  " << a<<endl;
    cout<<"string len is : " << length(a ,100);

    return 0;

}