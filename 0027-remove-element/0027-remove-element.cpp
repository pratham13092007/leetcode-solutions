class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        if(arr.size() == 0){
            return 0;
        }

        int officer = 0; // writing pointer
        int cm = 0;      // scanning pointer
        int n = arr.size();

        while(cm < n){
            if(arr[cm] == val){
                cm++;
                continue;
            }

            arr[officer] = arr[cm];
            officer++;
            cm++;
        }

        return officer;
    }
};