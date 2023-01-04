class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s, e, i;
        s = i = 0, e = nums.size() - 1;
        while(i <= e){
            if(nums[i] == 0 && i > s){
                nums[i] = nums[s];
                nums[s++] = 0;
            }else if(nums[i] == 2 && i < e){
                nums[i] = nums[e];
                nums[e--] = 2;
            }else i++;
        }
    }
};