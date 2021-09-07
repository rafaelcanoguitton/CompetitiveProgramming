#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n;
        cin>>n;
        int digitos=floor(log10(n) + 1);
        int acarr=(digitos-1)*9;
        bool value= true;
        if(digitos==1)
        {
            cout<<n<<endl;
            value=false;
        }
        else if(value){
            int num=n;
            vector<int> nums;
            while(num > 0)
            {
                int mod = num % 10;
                nums.push_back(mod);
                num = num / 10; 
            }
            bool val=true;
            int dis=nums.back();
            nums.pop_back();
            if(nums.back()<dis){
                val=false;
            }
            if(val){
                acarr+=dis;
            }
            else{
                acarr=acarr+(dis-1);
            }
            
        }
        if(value){
            cout<<acarr<<endl;
        }
    }
    return 0;
}