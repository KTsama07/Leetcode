class Solution {
public:
    //using BS on each row of matrix
    // bool binarySearch(vector<int>& arr,int low ,int high ,int target){
    //         if(low>high) return false;
    //         int mid = (low+high)/2;
    //         if(arr[mid]==target) {
    //             return true;
    //         }
    //         else if(arr[mid] > target){
    //             return binarySearch(arr,low,mid-1,target);
    //         } else {
    //             return binarySearch(arr,mid+1,high,target);
    //         }
    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        //considering the matrix as a contigeous array and then using BS our scope = m*n and thus TC = O(log(m*n))
        int low = 0;
        int high = (m*n)-1;
        while(low<=high){
            int mid = (low + (high-low)/2);
            if(matrix[mid/m][mid%m]== target) return true;
            else if(matrix[mid/m][mid%m] > target){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
        return false;
    }
    //using staircase
        // int a = 0; // for row
        // int b = m-1; //last element of 1st row
        // while(a < n && b >= 0){
        //    int ptr = matrix[a][b];
        //    if(target == ptr) return true;
        //    else if(target > ptr){ //move pointer to down row
        //         a++;
        //    } else { //move pointer to left col
        //      b--;
        //    }
        // }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna