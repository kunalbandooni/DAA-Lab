#include<iostream>
#include<vector>
using namespace std;
int last_b_search(vector<int> a,int e){
    int beg=0,end=a.size()-1,mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid] == e && a[mid+1] != e)
            return mid;
        else if(a[mid]>e)
            end=mid-1;
        else
            beg=mid+1;
    }
    return -1;
}
int first_b_search(vector<int> a,int e){
    int beg=0,end=a.size()-1,mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid] == e && a[mid-1] != e)
            return mid;
        else if(a[mid]<e)
            beg=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int count_duplicates(vector<int> a,int e){
    return (last_b_search(a,e)-first_b_search(a,e))+1;
    /* implemented => last_occurence - first_occurence + 1 */
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
        int s=count_duplicates(a,e);
        if(s==0)
            cout<<"Element not Present";
        else
            cout<<endl<<e<<" occurs "<<s;
    }
    return 0;
}