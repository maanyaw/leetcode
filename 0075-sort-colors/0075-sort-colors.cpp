#include <iostream>
#include <vector>
#include <cmath>  
#include <numeric>

class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int n=nums.size();
        int low=0,mid=0;
        int high = n - 1;
        int c;

        for(int i=0;i<n;i++)
        {
            if(nums[mid]==0){
                c=nums[low];
                nums[low]=nums[mid];
                nums[mid]=c;
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                c=nums[high];
                nums[high]=nums[mid];
                nums[mid]=c;
                high--; 
            }

        }
    }
};