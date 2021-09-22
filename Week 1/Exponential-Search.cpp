#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> v,int e){
    int n=v.size(),t=0,beg=0,end=n-1,mid;
    while(beg<=end){
        t++;
        mid=(beg+end)/2;
        if(v[mid]==e)
            return mid;
        else if(v[mid]<e)
            beg=mid+1;
        else    
            end=mid-1;
    }
    return -1;
}
int exp_search(vector<int> v,int e){
    if(v[0]==e)
        return 0;
    int i=1,n=v.size();
    while(i<n && v[i]<=e)
        i=i*2;
    return binary_search(v, e);
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
        int m=exp_search(v,e);
        if(m==-1)
            cout<<"Not Present "<<n;
        else    
            cout<<"Present "<<m+1;
    }
    return 0;
}