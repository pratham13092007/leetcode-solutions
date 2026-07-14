class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> res;  // to store result int three pair
        int n = arr.size();
        int sum;
        // first we sort array
        sort(arr.begin() , arr.end());

        for(int i=0 ; i< n-2 ; i++){    // main loop for every ith element
            
            if(i>0 && arr[i] == arr[i-1]){
                continue;
            }

            int left = i+1;
            int right = n-1;
            int s;
            int target_sum = -1 * arr[i]; // third element
            while(left < right){
                s = arr[left] + arr[right];
                if(s == target_sum){
                    res.push_back({arr[i] , arr[left] , arr[right]});
                    left++;
                    right--;

                    while(left<n && arr[left] == arr[left-1]){
                        left++;
                    }

                    while(right>=0 && arr[right] == arr[right+1]){
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