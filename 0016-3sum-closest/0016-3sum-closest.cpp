class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {

        int n = arr.size();

        sort(arr.begin(), arr.end());

        int max_diff = INT_MAX;
        int result_sum = 0;

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int curr_sum = arr[i] + arr[left] + arr[right];
                int diff = abs(curr_sum - target);

                if (diff < max_diff) {
                    max_diff = diff;
                    result_sum = curr_sum;
                }

                if (curr_sum == target) {
                    return curr_sum;
                }
                else if (curr_sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return result_sum;
    }
};