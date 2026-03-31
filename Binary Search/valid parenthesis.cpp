class Solution {
public:
    bool checkValidString(string s) {
        int low=0;
        int high=0;
        for(char c : s){
            if(c=='('){
                low++;
                high++;
            }
            else if(c==')'){
                high--;
                low--;
            }
            else{
                low--;
                high++;
            }
            if(high<0) return false;
            if(low<0) low=0;
        }
        return low==0;
    }
};

TC :   O(n)
SC : O(1)