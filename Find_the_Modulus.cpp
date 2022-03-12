#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll first = 2000000000000000000;
void solve(){
    ll result1,result2;

    cout << "? " << first <<endl;      cin >> result1;
    cout << "? " << first-result1-1 << endl;;     cin>>result2;
    cout<< "! " << result2 +1 << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;   cin >> test;
    while( test--){
        solve();
	
    }

    return 0;
}