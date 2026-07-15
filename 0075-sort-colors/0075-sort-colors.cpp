class Solution {
public:
    void sortColors(vector<int>& arr) {
        int zero = 0;
        int one = 0;
        int two = 0;
        vector<int> finalarr;
        int n = arr.size();

        for(int i=0 ; i<n ; i++){
            if(arr[i] == 0){
                zero++;
            }else if(arr[i] == 1){
                one++;
            }else{
                two++;
            }
        }

        for(int i=0 ; i<zero ; i++){
            finalarr.push_back(0);
        }
        for(int i=0 ; i<one ; i++){
            finalarr.push_back(1);
        }
        for(int i=0 ; i<two ; i++){
            finalarr.push_back(2);
        }

        arr = finalarr;
        
    }
};


// brute force
// void sortColors(vector<int>& arr) {
//         vector<int> zero;
//         vector<int> one;
//         vector<int> two;
        
//         vector<int> finalarr;

//         int n = arr.size();
//         for(int i=0 ; i<n ; i++){
//             if(arr[i] == 0){
//                 zero.push_back(arr[i]);
//             }else if(arr[i] == 1){
//                 one.push_back(arr[i]);
//             }else{
//                 two.push_back(arr[i]);
//             }
//         }

//         for(int i=0 ; i<zero.size() ; i++){
//             finalarr.push_back(zero[i]);
//         }

//         for(int i=0 ; i<one.size() ; i++){
//             finalarr.push_back(one[i]);
//         }

//         for(int i=0 ; i<two.size() ; i++){
//             finalarr.push_back(two[i]);
//         }

//         arr = finalarr;
//     }