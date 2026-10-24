class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }
        int low=0;
        for(int high=1;high<nums.size();high++){
          
            if(nums[low]!=nums[high]){
                low++;
                swap(nums[low],nums[high]);
            }

        }
        return low+1;
    }
};