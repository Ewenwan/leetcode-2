class Solution {
    
    int rob(vector<int> &num) {
        if (num.empty()) return 0;
        
        int p[num.size()];
        p[0] = num[0];
        p[1] = max(num[0], num[1]);
        
        for (int i = 2;i < num.size();i++)
            p[i] = max(p[i-2] + num[i], p[i-1]);
        return p[num.size()-1];
    }
    
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> values(n, 0);
        for (int num : nums)
            values[num] += num;
        
        return rob(values);
    }
};
