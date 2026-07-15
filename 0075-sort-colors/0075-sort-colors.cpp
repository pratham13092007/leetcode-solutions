class Solution {
public:
    void sortColors(vector<int>& arr) {
        vector<int> zero;
        vector<int> one;
        vector<int> two;
        
        vector<int> finalarr;

        int n = arr.size();
        for(int i=0 ; i<n ; i++){
            if(arr[i] == 0){
                zero.push_back(arr[i]);
            }else if(arr[i] == 1){
                one.push_back(arr[i]);
            }else{
                two.push_back(arr[i]);
            }
        }

        for(int i=0 ; i<zero.size() ; i++){
            finalarr.push_back(zero[i]);
        }

        for(int i=0 ; i<one.size() ; i++){
            finalarr.push_back(one[i]);
        }

        for(int i=0 ; i<two.size() ; i++){
            finalarr.push_back(two[i]);
        }

        arr = finalarr;
    }
};