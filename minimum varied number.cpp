//To live with happiness, we need to do just one thing ,,obeying all of the instructions of our almighty allah.
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define all(p) p.begin(),p.end()
#define Done return 0
#define  ifor(n)    for ( int  i = 0; i < n; i++ )
#define  jfor(n)    for ( int j  = 0; j < n; j++ )
#define  yes      cout << "YES\n"
#define  no       cout <<"NO\n"
void solve();

int main()
{
    optimize();

    int t;cin>>t;
    while(t--)
    {
      int n,k;cin>>n;
      vector<ll>v;
      ll sum=n;
      for(ll i=9;i>=1;i--)
      {
      	if((sum-i)>=0)
      	{
      		sum=sum-i;
      		v.pb(i);
      	}

      }
      reverse(v.begin(),v.end());
     for(ll i=0;i<v.size();i++)
     {
     	cout<<v[i];
     }
     cout<<endl;



    }


}






 //--------------ALLAH U R EVERYTHING FOR ME--------------
