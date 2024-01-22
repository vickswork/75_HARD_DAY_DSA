#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       unordered_map<int,int>n;
       for(int i=0;i<nums.size();i++)
       {
           int x=nums[i];
           int y=target-x;

           if(n.count(y))
           {
               return{n[y],i};
           }
           n[x]=i;
       } 
       return{};
    }
};
