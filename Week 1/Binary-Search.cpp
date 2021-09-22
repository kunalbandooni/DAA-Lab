#include<iostream>
#include<vector>
using namespace std;
void binary_search(vector<int> v,int e){
    int n=v.size(),t=0,beg=0,end=n-1,mid;
    while(beg<=end){
        t++;
        mid=(beg+end)/2;
        if(v[mid]==e)
            break;
        else if(v[mid]<e)
            beg=mid+1;
        else    
            end=mid-1;
    }
    if(v[mid]==e)
        cout<<"Present ";
    else 
        cout<<"Not Present ";
    cout<<t;
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
        binary_search(v,e);
    }
    return 0;
}