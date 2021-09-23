#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool duplicates(vector<int> a){
    map<int,int> m;
    for(int i=0;i<a.size();i++){
        m[a[i]]++;
        if(m[a[i]]>1)
            return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>l;
            a.push_back(l);
        }
        if(duplicates(a))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}