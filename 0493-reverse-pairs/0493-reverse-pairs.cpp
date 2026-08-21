class Solution {
public:
        long long merge(vector<int> &arr, int low , int mid, int high){
            vector<int> temp;
            long long cnt = 0;
            //counting for nums[i] > 2*nums[j]
            int j = mid+1;
            for( int i = low ; i <=mid ; i++){
                while( j<= high && (long long) arr[i] > 2LL * arr[j]){
                    j++;
                }
                cnt += j - (mid+1);
            }
            int left = low;
            int right = mid+1;
            //storing elements in the temp in sorted fashion
            while(left <= mid && right <= high){
                if(arr[left] <= arr[right])
                {
                    temp.push_back(arr[left]);
                    left++;
                } else {
                    temp.push_back(arr[right]);
                    right++;
                }
            }
            while( left <= mid){
                temp.push_back(arr[left]);
                left++;
            }
            while( right <= high){
                temp.push_back(arr[right]);
                right++;
            }
            //transferring from temp to arr
            for(int i = low ; i<=high; i++){
                arr[i] = temp[i-low];
            }
            return cnt;
        }
    long long mergeSort(vector<int> &arr,int low,int high){
            if (low >= high) return 0;
            long long cnt = 0;
            int mid = (low+high)/2;
            cnt += mergeSort(arr,low,mid);//left half sort
            cnt += mergeSort(arr,mid+1,high);//right half sort
            cnt += merge(arr, low, mid , high); //merge left & right halves
            return cnt;
        }
    long long reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0 , n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna