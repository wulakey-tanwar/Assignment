class Solution {
public:
    int fFValue(vector<int>& nums, int original) {
        map<int, bool>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=true;
        }
        while(m[original]){
            original*=2;
            if(!m[original]){
                return original;
            }
        }
        return original;
    }
};
