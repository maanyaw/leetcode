class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        std::map<int, int> map;
        for(int i=0;i<n;i++){
            if(map.find(nums[i]) != map.end()){
                map[nums[i]]++;
            }
            else{
                map[nums[i]] = 1;
            }
        }
        vector<int> result;
        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second > (n/3)){
                result.push_back(it->first);
            }
        }
        return result;
    }
};