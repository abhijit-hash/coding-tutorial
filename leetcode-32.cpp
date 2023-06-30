class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(char c:s){
            if(c == '('){
                st.push(0);
            }
            else if(c==')'){
                if(st.top()==0){
                    st.pop();
                    st.push(1);
                }
                else{
                    int x=0;
                    while(st.top()!=0){
                        x+=st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(2*x);
                }
            }

        }
        int x=0;
        while(st.size()>0){
            x+=st.top();
            st.pop();
        }
        return x;
    }
};
