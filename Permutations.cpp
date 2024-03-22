///OM TAT SAT
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define int long long
using namespace std;
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin>>n;
 
    if(n==1)cout<<1<<endl;
    if(n<=3)cout<<"NO SOLUTION"<<endl;
 
    int even=2;
    while(even<=n)
    {
        cout<<even<<" ";
        even+=2;
    }
 
    int odd=1;
    while(odd<=n)
    {
        cout<<odd<<" ";
        odd+=2;
    }
    cout<<endl;
    return 0;
}
 
 
