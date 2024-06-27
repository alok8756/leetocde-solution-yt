// Brute force Solution - O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int > temp;
        for(int i=0; i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                
                if(nums[i]+nums[j]==target){
                        
                        temp.push_back(i);
                        temp.push_back(j);
                        
                }
        }
        }
            return temp;
    }
};






// Optimise Approach Solution -  O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>ans;
        unordered_map<int, int>m; 

        for(int i=0;i<nums.size(); ++i){

            int complement=target-nums[i];

          if(m.find(complement)!=m.end()){
                  int firstIndex=i;
                  int secondIndex=m[complement];

                 ans.push_back(firstIndex);
                 ans.push_back(secondIndex);

                 return ans;
                }
              m[nums[i]] = i;
          }

        return ans;
    }
};