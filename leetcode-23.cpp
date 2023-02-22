class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        set<int> s;
        for( auto x :nums)s.insert(x);
        int k =1;
        while(1){
            if( s.find(k)!= s.end()){
                k*=2;
                
            }
            else return k;
            
        }
        return k;
        
    }
};