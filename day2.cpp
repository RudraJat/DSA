
#include<iostream>
using namespace std;

int main(){
    int arr[5]={6,2,8,1,9};
    int n=5;
    int min=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum element in the array is: "<<min<<endl;
    return 0;
}