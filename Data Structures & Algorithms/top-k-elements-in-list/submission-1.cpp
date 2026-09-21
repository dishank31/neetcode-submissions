class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for(int i=0 ; i<nums.size() ; i++)
        {
            mpp[nums[i]]++;
        }

        vector<pair<int, int>> mapVal;
        for(auto it : mpp)
        {
            mapVal.push_back({it.second, it.first});
        }

        sort(mapVal.rbegin(), mapVal.rend());

        vector<int> ans;
        for(int i=0 ; i<k ; i++)
        {
            ans.push_back(mapVal[i].second);
        }

        return ans;

    }
};
