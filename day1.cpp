// Find the maximum element in an array

#include<iostream>
using namespace std;

int main(){
    int arr[1]= {-3};
    int n = 1;

    int max= arr[0];
    for(int i=1; i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum element in the array is: "<<max<<endl;
    return 0;
}