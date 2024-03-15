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

    string s;
    cin>>s;
    int cnt=1,mx=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            mx=max(cnt,mx);
            cnt=1;
        }
    }
    mx=max(cnt,mx);
    cout<<mx<<endl;

    return 0;
}



