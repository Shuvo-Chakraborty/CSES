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
    vector<int>v(n);

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
           cnt+=abs(v[i]-v[i+1]);
           v[i+1]=v[i];
        }
    }
    cout<<cnt<<endl;


    return 0;
}
