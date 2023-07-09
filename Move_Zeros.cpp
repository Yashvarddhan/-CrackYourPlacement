class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int array[nums.size()];
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //     {
        //         count++;
        //     }
        // }
        for(int j=0;j<nums.size();j++)

        {
            if(nums[j]!=0)
            {
        array[count]=nums[j];
        count++;
            }
        }
       for(;count<nums.size();count++)
       {
           array[count]=0;
       }
       for(int i=0;i<nums.size();i++)
       {
           nums[i]=array[i];
       }
        
    }
};