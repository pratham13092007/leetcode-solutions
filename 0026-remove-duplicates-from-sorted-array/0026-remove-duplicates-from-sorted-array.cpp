class Solution {
public:
// same way with two pointer but using while loop 

    int removeDuplicates(vector<int>& arr){
        if (arr.size() == 0) return 0;
        int officer = 0; // pointer 1
        int cm = 1;      // pointer 2
        int unique = 1;   // return at last  , if initialise through zero create a problem
        int n = arr.size();
        while(cm < n){
            if(arr[cm] == arr[cm-1]){
                // duplicate 
                cm++;
                continue;
            }
            // unique element
            arr[officer +1] = arr[cm];
            officer++;
            unique++;
            cm++;  // make sure to increment it , in case of unique also
        }
        return unique;
    }
};



// int removeDuplicates(vector<int>& nums) {
//         if (nums.size() == 0)
//             return 0;
//         int i = 0;  // Points to the last unique element
//         for (int j = 1; j < nums.size(); j++) {
//             if (nums[i] != nums[j]) {
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }
//         return i + 1; // at last it get return as a number of unique element 
//     }