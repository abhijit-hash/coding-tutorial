 #include<bits/stdc++.h>
 using namespace std;
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++){
            int diff=k-nums[i];
            if(m[diff]>0){
                count++;
                m[diff]--;
            }
            else{
                m[nums[i]]++;
            }
        }
        return count;
    }
    int main(){
        int k=5;
        int n=5;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
    
        cout<<maxOperations(nums,k)<<"\n";


    }
