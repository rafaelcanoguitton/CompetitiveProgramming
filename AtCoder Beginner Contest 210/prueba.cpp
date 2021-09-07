#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    sort(v.begin(),v.end());
    bool awa=binary_search(v.begin(),v.end(),7);
    cout<<awa<<endl;
    return 0;
}