class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1, -1};
        int first = findfirst(nums, 0, n - 1, target);
        if (first == -1) return {-1, -1};
        int last = findlast(nums,0,n-1,target);
        return {first, last};
    }
private:
    int findfirst(vector<int>& nums, int low, int high, int target){
            if(low>high) return -1;
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid-1]<target){
                    return mid;
                } else return findfirst(nums,low,mid-1,target);
            } 
            else if(target > nums[mid]){
                return findfirst(nums,mid+1,high,target);
            }
            return findfirst(nums,low,mid-1,target);
        }
    int findlast(vector<int>& nums, int low, int high, int target){
            if(low>high) return -1;
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if(mid==nums.size() -1 || nums[mid+1]>target){
                    return mid;
                } else return findlast(nums,mid+1,high,target);
            } 
            else if(target > nums[mid]){
                return findlast(nums,mid+1,high,target);
            }
            return findlast(nums,low,mid-1,target);
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna