class Solution {
public:

int next_greater(vector<int>nums,int i){
     for(int j=nums.size()-1;j>i-1;j--){
              if(nums[j]>nums[i-1])  return j;
            }
            return i;
      }

    void nextPermutation(vector<int>& nums) {
        int k;
        for(int i=nums.size()-1;i>0;i--)
         {
            if(nums[i-1]<nums[i]){
                k=next_greater(nums,i);
                swap(nums[i-1],nums[k]);
                sort(nums.begin()+i,nums.end());
                 return ;
               }
        
          }
        sort(nums.begin(),nums.end());
    }

};