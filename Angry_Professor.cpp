#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> students) {
    int arrive_on_time=0;
    
for(int i=0;i<students.size();i++){
if(students[i]<=0)  arrive_on_time++;
else continue;
}
if(arrive_on_time>=k) return "NO";
else return "YES";

}
template<typename T>
void print_array(const T &arr, char c = ' ')
{
for (auto x : arr)
{
cout << x << c;
}
cout << endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif
    vector<int> students;
    int n,k,t,elements;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++){
        cin>>elements;
        students.push_back(elements);
        }
        string s=angryProfessor(k, students);
        cout<<s<<endl;
        print_array(students);
    }
    


    return 0;
}