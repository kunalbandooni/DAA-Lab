#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    cout<<"OUTPUT:"<<endl<<sum;
    return 0;
}