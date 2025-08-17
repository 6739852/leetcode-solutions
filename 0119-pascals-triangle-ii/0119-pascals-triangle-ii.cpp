class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1, 1);
        long long pre = 1;

        for(int i = 1; i < rowIndex; i++){
            long long curr = pre * (rowIndex - i + 1) / i;
            result[i] = (int)curr;
            pre = curr;
        }
        return result;
    }
};