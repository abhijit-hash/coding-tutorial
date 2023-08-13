class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        string ans="";
        stack<char>st;
        int i=0;
        while(i<n){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        while(!st.empty()){
            char j=st.top();
            st.pop();
            ans+=j;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
