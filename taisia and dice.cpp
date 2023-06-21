
//To live with happiness, we need to do just one thing ,,obeying all of the instructions of our almighty allah.
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define all(p) p.begin(),p.end()
#define Done return 0
void solve();

int main()
{
    optimize();

    int t;cin>>t;
    while(t--)
    {
        int n,s,r;cin>>n>>s>>r;

        int p=s-r;
        for(int i=1;i<=n-1;i++)
        {
            if(i<n-1)
            {
                cout<<i<<" ";

            }
            else{
                cout<<(r-(n-1))<<" ";
            }
        }
        cout<<r<<" "<<endl;


    }


}






 //--------------ALLAH U R EVERYTHING FOR ME--------------
