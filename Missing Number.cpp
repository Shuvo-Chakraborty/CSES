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
    int x,cnt=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        cnt+=x;
    }
    int ans=(n*(n+1))/2;

    cout<<ans-cnt<<endl;

    return 0;
}


