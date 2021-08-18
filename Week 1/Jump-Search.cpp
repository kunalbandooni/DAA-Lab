#include<iostream>
#include<vector>
using namespace std;
int jump_search(vector<int> v,int e){
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ad,e;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ad;
            v.push_back(ad);
        }
        cin>>e;
        int m=jump_search(v,e);
        if(m==-1)
            cout<<"Not Present "<<n;
        else    
            cout<<"Present "<<m+1;
    }
    return 0;
}