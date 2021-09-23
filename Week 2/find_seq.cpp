#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> ans;
int find_seq(vector<int> a){
    if(a.size()<2)
        return false;
    /*for(int i=2;i<a.size();i++)
        if(a[0]+a[1]==a[i]){
            k=i;
            break;
        }
    int i=0,j=1;*/
    map<int,int> p;
    for(int i=a.size()-2;i>=1;i--) {
        p[a[i+1]]++;
        for(int j=0;j<i;j++){
            int target=a[i]+a[j];
            if(p.find(target)!=p.end()){
                ans.push_back(a[i]);
                ans.push_back(a[j]);
                ans.push_back(target);
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a(n);
        for(int j=0;j<n;j++){
            cin>>l;
            a.push_back(l);
        }
        int s=find_seq(a);
        if(s == 1){
            //cout<<"Present";
            for(int j=0;j<ans.size();j++)
                cout<<ans[j]<<" ";
        }
        else
            cout<<"Not Present";
        cout<<endl;
    }
    return 0;
}