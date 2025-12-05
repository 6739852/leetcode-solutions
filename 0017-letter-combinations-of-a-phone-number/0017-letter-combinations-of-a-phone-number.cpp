class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty()) return result;
        
        vector<string> mapping = {
            "",     
            "",     
            "abc",  
            "def",  
            "ghi",  
            "jkl",  
            "mno",  
            "pqrs", 
            "tuv",  
            "wxyz"  
        };
        
        string current;
        backtrack(digits, 0, current, result, mapping);
        return result;
    }
    
private:
    void backtrack(string &digits, int index, string &current, vector<string> &result, vector<string> &mapping) {
        if(index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        string letters = mapping[digits[index] - '0']; 
        for(char c : letters) {
            current.push_back(c);       
            backtrack(digits, index+1, current, result, mapping);
            current.pop_back();    
        }
    }
};
