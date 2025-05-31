#include<bits/stdc++.h>
using namespace std;
#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        optimiz()
        double sum=0;
        int maxi=-1;
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]>maxi)
                maxi=a[i];


        }
int avg = (int)ceil((double)sum / x);

        int ans;
        ans=max(maxi,(avg);
                cout<<ans<<endl;
                cout<<"max= "<<maxi<<" average= "<<(sum/x)<<endl;

    }

        return 0;
}

