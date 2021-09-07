#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int tests;
    cin>>tests;
    //vector<char> alf={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
    while(tests--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        bool val=false;
        if(a.length()==1){
            cout<<"YES"<<endl;
        }
        else{
            while(val==false&&a.length()>0){
            int last=0;
            char curr;
            curr=a[0];
            string newstr="";
            for(int j=1;j<a.length(); j++)
            {   
                if(curr!=a[j]){
                    newstr+=a[j];
                }
                else if(j!=last+1){
                    val=true;
                    break;
                }
                else{
                    last++;
                }
            }
            a=newstr;
        }
        if(val){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    }
}