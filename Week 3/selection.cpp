#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void selection_sort(vector<int> a){
    int comp=0,swaps=0,min,mini;
    for(int i=0;i<a.size();i++){
        min=INT_MAX;
        for(int j=i;j<a.size();j++){
            comp++;
            if(min>a[j]){
                min=a[j];
                mini=j;
            }
        }            
        swaps++;
        swap(a[mini],a[i]);
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Comparisons: "<< (comp-swaps) <<endl;
    cout<<"Shifts: "<< (swaps-1) ;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,l;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>l;
            a.push_back(l);
        }
        selection_sort(a);
    }
    return 0;
}