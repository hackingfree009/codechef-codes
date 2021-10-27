#include <iostream>
using namespace std;

int main() {
    //tstrdycwevd afzdv xucyhbn skdfzv, jbnsbk,zdj
  // your code goes here
  int n;
  cin>>n;
  while(n--)
  {
  int t;
  cin>>t;
  string s;
  cin>>s;
  string result="NO";
  for(int i=0;i<t-1;i++)
  {
      if((s[i]=='R'&&s[i+1]=='R') || (s[i]=='L' && s[i+1]=='L'))
      {
          result="YES";
          break;
      }
  }
  cout<<result<<"\n";
    }
  return 0;
}
