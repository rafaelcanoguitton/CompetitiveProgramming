#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <unordered_map>
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;
vector<int> findPossibleDiv(int n)
{
    vector<int> vecDiv;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                vecDiv.push_back(i);
            else
            {
                vecDiv.push_back(i);
                vecDiv.push_back(n / i);
            }
        }
    }
    return vecDiv;
}
bool pairModulousK(int arr[], int n, int k)
{
    unordered_map<int, bool> MAP;
    for (int i = 0; i < n; i++)
        MAP[arr[i]] = true;
    bool pairCheck = false;
    for (int i = 0; i < n; i++)
    {
        if (MAP[k] && k < arr[i])
        {
            cout << "(" << k << ", " << arr[i] << ") ";
            pairCheck = true;
        }
        if (arr[i] >= k)
        {
            vector<int> vec = findPossibleDiv(arr[i] - k);
            for (int j = 0; j < vec.size(); j++)
            {
                if (arr[i] % vec[j] == k && arr[i] != vec[j] && MAP[vec[j]])
                {
                    cout << "(" << arr[i] << ", "<< vec[j] << ") ";
                    pairCheck = true;
                }
            }
            vec.clear();
        }
    }
    return pairCheck;
}
int main(){
    int n;
    cin>>n;
    int n2=n;
    vector<int> nums;
    int count=0;
    while(n--)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    
    cout<<count<<endl;
    return 0;
}