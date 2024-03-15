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

    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=(n*3)+1;
        }
    }
    cout<<1;

    return 0;
}

