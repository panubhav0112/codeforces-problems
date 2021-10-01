#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--)
    {
        string w;
        cin>>w;

        int strLen = w.size();
        if( strLen > 10 )
            cout<<w[0]<<(strLen-2)<<w[strLen-1]<<"\n";
        else
            cout<<w<<"\n";
    }

    return 0;
}
