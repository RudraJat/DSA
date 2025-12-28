//Two Sum Problem - Find indices of two numbers such that they add up to a specific target.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> nums={2,7,11,4,5};
    int target=9;

    unordered_map<int, int> mp; // To store number and its index and it will not allow duplicate keys
    for(int i=0;i<nums.size();i++){
        int need = target - nums[i];
        if(mp.find(need)!=mp.end()){// If the needed number is found in the map
            cout<<"Indices are: "<<mp[need]<<" and "<<i<<endl;
        }
        mp[nums[i]]=i;// Storing the number and its index
    }
    return 0;
}