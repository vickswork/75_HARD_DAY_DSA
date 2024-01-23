 {
public:
    int maxSubArray(vector<int>& nums) {
    
        int c=nums[0];
        int g=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            c=max(c,0)+nums[i];
            g=max(c,g);
        }
        return g;
    }
};
