class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> st;
            int n= nums.size();
            for(int i : nums){
                st.insert(i);
            }

            if(n==st.size()){
                return false;
            }
            return true;
    }
};