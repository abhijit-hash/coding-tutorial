#include<bits/stdc++.h>
using namespace std;
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(j-i>k-1){
            if(abs(arr[i]-x)<=abs(arr[j]-x)){
                j--;
            }
            else{
                i++;
            }
        }
        for(int k=i;k<=j;k++){
            ans.push_back(arr[k]);
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int k;
        cin>>k;
        vector<int>ans=findClosestElements(arr,k,x);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }