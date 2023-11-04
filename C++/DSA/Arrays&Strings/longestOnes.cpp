class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, answer = 0; 
        int zeroCnt = 0; //variable to track number of zeros 
        
        for (int right = 0; right < nums.size(); right ++) {
            if (nums[right] == 0) {
                zeroCnt++; 
            }
            while (zeroCnt > k) {
                if (nums[left] == 0) {
                    zeroCnt--;
                }
                left++; 
            }
        answer = max(answer, right - left + 1); 
        }
    return answer; 
    }
};
