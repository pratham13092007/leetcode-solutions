class Solution {
public:
    vector<int> sortedSquares(vector<int>& Array){
        int N = Array.size();

        vector<int> pos;
        vector<int> neg;
        

        // putting element of main array into pos/neg according to their type
        for(int i=0 ; i<N ; i++){
            if(Array[i] >= 0){
                pos.push_back(Array[i]);
            }else{
                neg.push_back(Array[i]);
            }
        }
        
        if(pos.size() == 0){  
            // all elements in main array are negative only
            
            for(int i=0 ; i<N ; i++){
                Array[i] *= Array[i];
            }
            reverse(Array.begin() , Array.end());
            return Array;
        }

        if(neg.size() == 0){
            // all elements in main array are positive only

            for(int i=0 ; i<N ; i++){
                Array[i] *= Array[i];
            }
            return Array;
        }
        
        
        // at last if the array contain both positive and negative
        int i=0 , j=0;
        int m = pos.size() , n = neg.size();
        
        for(int i=0 ; i<pos.size() ; i++){
            pos[i] *= pos[i];
        }

        for(int i=0 ; i<neg.size() ; i++){
            neg[i] *= neg[i];
        }


        vector<int> mix;
        
        reverse(neg.begin() , neg.end());

        while(i<m && j<n){
            if(pos[i] <= neg[j]){
                mix.push_back(pos[i++]);
            }else{
                mix.push_back(neg[j++]);
            }
        }
        
        while(i<m){
            mix.push_back(pos[i++]);
        }

        while(j<n){
            mix.push_back(neg[j++]);
        }

        return mix;
        
    }
};



// brute force approach

// vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0 ; i< n ; i++){
//             nums[i] *= nums[i];
//         }
        
//         sort(nums.begin() , nums.end());  // overall complexity O(nlogn)

//         return nums;
//     }