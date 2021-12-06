#include <iostream>
using namespace std;
int main()
{
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif


    long long n;
    cin>>n;
    long long sumx=0,sumy=0,sumz=0;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }

    if(sumx==0 && sumy==0 && sumz==0)
    cout<<"YES";
    else
    cout<<"NO";

   return 0;
}