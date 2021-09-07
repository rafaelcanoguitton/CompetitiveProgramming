#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    int c=3;
    while(c--)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    cout<<nums[1]+nums[2]<<endl;
    return 0;
}