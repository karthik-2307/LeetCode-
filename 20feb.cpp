class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,n=nums.size();
        int pos=-1,count;
        for(i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
               pos=i;
               break;
            }
        }
        if(pos==-1)
        {
            for(i=0;i<n;i++)
            {
             if(nums[i]>target)
            {
                pos=i;
                break;
            }
            else
            {
                pos=n;
            }
            }
        }
        return pos;
    }
};
