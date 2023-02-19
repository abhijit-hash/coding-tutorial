class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int arr_size=arr.size();
        unordered_map<int,int>m;
        for(auto x:arr){
            m[x]++;
        }
        vector<int>v;
        for(auto &i:m){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int half=arr_size/2;
        int count=0;
        for(int i=0;i<v.size();i++){
            arr_size=arr_size-v[i];
            count++;
            if(arr_size<=half)
                break;
        }
        return count;
    }
};