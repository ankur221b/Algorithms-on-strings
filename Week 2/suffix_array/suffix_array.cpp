#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAX 10001
#define MOD 1000000007
#define mod 100000


int main()
{
    string s;
    cin>>s;

    vector< pair<string,int> > v;

    for(int i=s.length()-1;i>=0;i--)
    {
      v.push_back({s.substr(i),i});
    }

    sort(all(v));

    for(int i=0;i<v.size();i++)cout<<v[i].ss<<" ";

 



    
  
}