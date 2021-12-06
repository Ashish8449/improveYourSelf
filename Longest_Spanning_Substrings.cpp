/*
*
*************************************************************
* AUTHOR : Ashish Gururani                                  *
* Language: C++14                                           *
* Purpose: -                                                *
* IDE used: Visual Studio Code.                             *
*************************************************************
*
Comments will be included in practice problems if it helps ^^
*/
#include <bits/stdc++.h>
typedef long             long ll;
typedef long             double ld;
#define rep(i,n,k)       for(ll i=0;i<n;i+=k)
#define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
#define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
#define vi               vector<int>
#define vl               vector<ll>
#define vs               vector<string>
#define vvi              vector<vi>
#define vvl              vector<vl>
#define vvs              vector<vs>
#define mem(a,b)         memset(a,b,sizeof(a))
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               emplace_back
#define mp               make_pair
#define fi               first
#define se               second
#define nline          "\n"
#define tc(t)            long long t;cin>>t;while(t--)
#define all(x)           (x).begin(), (x).end()

#define dbg(x)           cout<<#x<<" = "<<x<<endl
#define inf                 1e6+5
#define mod              ll(1e9+7)
using namespace std;

template<typename T>
void print_array(const T &arr, char c = ' ')
{
for (auto x : arr)
{
cout << x << c;
}
cout << endl;
}

template<typename T>
void input_array(vector< T> &arr)
{
for (ll i = 0; i < arr.size(); i++)
{
cin>>arr[i];
}
}

vvl adj;
vl vis;
ll V;
int solve(string &X, string &Y, int m, int n){
   int longest[m + 1][n + 1];
   int len = 0;
   int row, col;
   for (int i = 0; i <= m; i++) {
      for (int j = 0; j <= n; j++) {
         if (i == 0 || j == 0)
            longest[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            longest[i][j] = longest[i - 1][j - 1] + 1;
            if (len < longest[i][j]) {
               len = longest[i][j];
               row = i;
               col = j;
            }
         }
         else
            longest[i][j] = 0;
      }
   }
   return len;
}
int findMaxVertex(bool visited[], int weights[])
{

	
	int index = -1;


	int maxW = INT_MIN;

	for (int i = 0; i < V; i++) {

	
		if (visited[i] == false
			&& weights[i] > maxW) {

			
			maxW = weights[i];

			
			index = i;
		}
	}
	return index;
}
ll MST;

void printMaximumSpanningTree(vvi &graph,
							int parent[])
{


	 MST = 0;

	
	for (int i = 1; i < V; i++) {

		
		MST += graph[i][parent[i]];
        
	}

	return;

}


void maximumSpanningTree(vvi &graph)
{

	
	bool visited[V];


	int weights[V];


	int parent[V];

	
	for (int i = 0; i < V; i++) {
		visited[i] = false;
		weights[i] = INT_MIN;
	}

	
	weights[0] = INT_MAX;
	parent[0] = -1;

	
	for (int i = 0; i < V - 1; i++) {

	
		int maxVertexIndex
			= findMaxVertex(visited, weights);

		
		visited[maxVertexIndex] = true;

	
		for (int j = 0; j < V; j++) {

		
			if (graph[j][maxVertexIndex] != 0
				&& visited[j] == false) {

			
				if (graph[j][maxVertexIndex] > weights[j]) {

				
					weights[j] = graph[j][maxVertexIndex];

				
					parent[j] = maxVertexIndex;
				}
			}
		}
	}


	printMaximumSpanningTree(graph, parent);
}

vvi graph;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
fast;
ll a, b,c,d,e,f,m,n,p,q;
// string s,r;

tc(t)
{
    cin>>V; 
    graph.resize(V,vi (V,0));
    // vvi graph= { { 0, 2, 0, 6, 0 },
	// 					{ 2, 0, 3, 8, 5 },
	// 					{ 0, 3, 0, 0, 7 },
	// 					{ 6, 8, 0, 0, 9 },
	// 					{ 0, 5, 7, 9, 0 } };
    vs s(V);
    for (ll i = 0; i < V; i++)
    {
        cin>>s[i];
    }
    n=V;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {  
            ll z=solve(s[i],s[j],s[i].length(),s[j].length());
            // dbg(z);
           graph[i][j]=z;
           graph[j][i]=z;
        }
        
    }
    // for (ll i = 0; i < V; i++)
    // {
    //     print_array(graph[i]);
    // }
    
    maximumSpanningTree(graph);
    cout<<MST<<endl;
    
    
}
return 0;
}