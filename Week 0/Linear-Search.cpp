#include<iostream>
#include<vector>
using namespace std;
int linear_search(vector<int> v,int e){
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==e)
            return i;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<endl;
        int n,ad,e;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ad;
            v.push_back(ad);
        }
        cout<<"Element to be found: ";
        cin>>e;
        int m=linear_search(v,e);
        cout<<"STATUS: ";
        if(m==-1)
            cout<<"NOT FOUND\nCOMPARISONS DONE: "<<n;
        else    
            cout<<"FOUND\nCOMPAROSONS DONE: "<<m+1;
    }
    return 0;
}