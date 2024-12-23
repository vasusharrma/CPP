#include<iostream>
using namespace std;

void merge(int* arr , int start , int mid , int end){
    int one = mid -start +1;
    int two = end - mid;
    int arrOne[one];
    int arrTwo[two];
    int i = 0 , j = 0 , k = start;

    while(i < one){
        arrOne[i++] = arr[k++]; 
    } 

    while(j < two){
        arrTwo[j++] = arr[k++];
    }


    i = 0 , j = 0 , k = start;

    while( i < one && j < two){
        if(arrOne[i] < arrTwo[j]){
            arr[k++] = arrOne[i++];
        }
        else{
            arr[k++] = arrTwo[j++];
        }
    }

    while(i < one){
        arr[k++] = arrOne[i++];
    }

    while(j < two){
        arr[k++] = arrTwo[j++];
    }


}

void mergesort(int *arr , int start , int end){

    if(start >= end) return;
    int mid = (start+end)/2;

    mergesort(arr , start , mid);
    mergesort(arr , mid+1 , end);

    merge(arr , start , mid , end);
}

int main(){
    int n;
    cout<<"Enter arr size : ";
    cin>>n;

    int k ;
    cout<<"Enter the kth element" <<endl;
    cin>>k;



    int *arr = new int[n];

    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    cout<<"Printing before : " <<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }


    mergesort(arr , 0 , n-1);

    cout<<endl<<"Printing after : "<<endl;    

    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl<<k<<" small element is " <<arr[k-1]<<endl;

    return 0;
}