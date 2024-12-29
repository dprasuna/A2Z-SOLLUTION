class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        
        // Declare a vector with a nested pair to store key and value of map
        vector<pair<int,int>>v;
        
        // to store final list of ele having highest frequency
        vector<int>res;
        
        // To store frequency of each ele in array
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        // Iterate through map and store the frequency and ele as a pair
        for(auto x:mpp){
            v.push_back({x.second,x.first});
        }
        
        // Reverse sort the array to find ele with highest frequency
        sort(v.rbegin(),v.rend());
        
        // display top k ele
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};
