class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int size = nums.size();
        int missingNum = 0;
        bool isMissing = false;

        for(int i = 0; i<=size; i++){

            for(int j = 0; j<size; j++){
                if(i == nums[j]){
                    isMissing = false;
                    break;
                }
                isMissing = true;
            }

                if(isMissing){
                    missingNum = i;
                    break;
                }

        }
        
        
        return missingNum;

    }
};


better solution
for(int i = 0; i <= size; i++){
    bool found = false;

    for(int j = 0; j < size; j++){
        if(nums[j] == i){
            found = true;
            break;
        }
    }

    if(!found) return i;
}

return -1;

  best solution
  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expected = n * (n + 1) / 2;

        int actual = 0;
        for(int num : nums){
            actual += num;
        }

        return expected - actual;
    }
};
