//
//  main.cpp
//  C-Do Not Be Distracted.cpp
//
//  Created by Apple on 11/9/22.
//

#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve( )
{
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            continue;
        }
        else if(s[i]!=s[i+1])
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    flag=1;
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
   
    
}
int32_t main( )
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
