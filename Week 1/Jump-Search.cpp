#include<iostream>
#include<vector>
using namespace std;
int jump_search(vector<int> v,int e){
    int n=v.size();
    int jumps=sqrt(n);
    int steps=jumps;
    int prev=0;
    while(v[int(min(steps,n)-1)]<e){
        prev=steps;
        steps+=jump;
        if(prev>=n)
            return -1;
    }
    while(v[int(prev)]<e){
        prev+=1;
        if(prev == min(steps, n))
            return -1;
    }
    if(v[int(prev)] == e)
        return prev;
    return -1;
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