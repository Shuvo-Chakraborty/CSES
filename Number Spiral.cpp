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
    while(t--)
    {
        int y,x;
        cin>>y>>x;

        if(y>x)
        {
            if(y%2==0)
            {
                cout<<(y*y)-(x-1)<<endl;
            }
            else
            {
                cout<<((y-1)*(y-1))+1+(x-1)<<endl;
            }
        }
        else
        {
            if(x%2==0)
            {
                cout<<((x-1)*(x-1))+1+(y-1)<<endl;
            }
            else
            {
                cout<<(x*x)-(y-1)<<endl;
            }

        }


    }
//4
//2 3
//1 1
//4 2
//5 3
//
//8
//1
//15
//19

    return 0;
}





