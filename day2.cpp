#include<iostream>
using namespace std;

//Q. Find the minimum element in an array of integers

// int main(){
//     int arr[5]={6,2,8,1,9};
//     int n=5;
//     int min=arr[0];

//     for(int i=1;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"The minimum element in the array is: "<<min<<endl;
//     return 0;
// }

//Q. Find the sum of all elements in an array of integers

// int main(){
//     int arr[5]={6,2,8,1,9};
//     int n=5;
//     int sum=0;
//     int i=0;
//     while(i<n){
//         sum+=arr[i];
//         i++;
//     }
//     cout<<"The sum of the elements in the array is: "<<sum<<endl;
//     return 0;
// }

//Q. 
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int left=0;
    int right=n-1;

    // for(int i=0;i<n/2;i++){
    //     //Using inbuilt function to swap
    //     // swap(arr[left],arr[right]); 

    //     int temp=arr[left];
    //     arr[left]=arr[right];
    //     arr[right]=temp;
    //     left++;
    //     right--;
    // }

    while(left<right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    
    cout<<"The reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}