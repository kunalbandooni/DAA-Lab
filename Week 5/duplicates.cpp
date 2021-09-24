#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,temp,maxi=0;
        cin>>n;
        char c,l;
        map<char,int> a;
        for(int j=0;j<n;j++){
            cin>>l;
            a[l]++;
            temp=maxi;
            maxi=max(maxi,a[l]);
            if(temp != maxi)
                c=l;
        }
        cout<<c<<" => "<<maxi<<endl;
    }
    return 0;
}