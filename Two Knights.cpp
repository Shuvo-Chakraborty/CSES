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

    int t;
    cin>>t;
    int cnt,ans;
    for(int i=1; i<=t; i++)
    {
        cnt=(((i*i)*((i*i)-1))/2)-(((i-1)*(i-2))*2*2);
        cout<<cnt<<endl;
    }
//https://youtu.be/hefePluoWYk?feature=shared

    return 0;
}
