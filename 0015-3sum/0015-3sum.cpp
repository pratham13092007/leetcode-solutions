class Solution {
public:    // triplet (unique) with sum equal to zero

    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> res;  // to store result in three pair
        int n = arr.size();
        int sum;
        // first we sort array
        sort(arr.begin() , arr.end());

        for(int i=0 ; i< n-2 ; i++){    // main loop for every ith element
            
            if(i>0 && arr[i] == arr[i-1]){
                continue;
            }

            int left = i+1;    // 1st pointer
            int right = n-1;   // 2nd pointer
            int s;

            int target_sum = -1 * arr[i]; // third element

            while(left < right){

                s = arr[left] + arr[right];

                if(s == target_sum){
                    res.push_back({arr[i] , arr[left] , arr[right]});
                    left++;
                    right--;

                    while(left<right && arr[left] == arr[left-1]){
                        left++;
                    }

                    while(left<right && arr[right] == arr[right+1]){
                        right--;
                    }
                }
                
                else if(s < target_sum){
                    left++;
                }else{
                    right--;
                }
            }                        

        }
        return res;
        
    }
};