#include<iostream>
#include<vector>
using namespace std;
int difference(vector<int> a,int e){
    int c=0;
    for(int i=0;i<a.size()-1;i++)
        for(int j=i+1;j<a.size();j++)
            if(abs(a[i]-a[j])==e)
                c++;
    return c;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>l;
            a.push_back(l);
        }
        int e;
        cin>>e;
        cout<<endl<<difference(a,e);
    }
    return 0;
}