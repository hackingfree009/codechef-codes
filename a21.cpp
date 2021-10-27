#include <bits/stdc++.h>
using namespace std;

main() 
{
    int t,T;
    cin>>T;
    for(t=0;t<T;t++)
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        bool x,y=0;
        if(S[0]=='L') x=0;
        else x=1;
        for(int n=1;n<N;n++)
        {
        	if(S[n]=='L'){
        		if(!x) { y=1; break; }
        		else x=0;
			}
        	else{
        		if(x) { y=1; break; }
        		else x=1;
			}
		}
        if(y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
