#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void check(vector<int> a,int sum){
    if(sum<a[0] || sum>a[a.size()-1])
        cout<<"No Pairs exists.";
    else{
        int l=0,r=a.size()-1;
        while(l<r){
            if(a[l]+a[r]==sum){
                cout<<a[l]<<" + "<<a[r]<<" = "<<sum;
                return;
            }
            if(a[l]+a[r]<sum)
                l++;
            else
                r--;
        }
        cout<<"No Pairs exists.";
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a;
        for(int j=0;j<n;j++){
            cin>>l;
            a.push_back(l);
        }
        int sum;
        cin>>sum;
        sort(a.begin(),a.end());
        check(a,sum);
        cout<<endl;
    }
    return 0;
}