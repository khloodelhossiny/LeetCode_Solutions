class Solution {
public:
    int addDigits(int num) {
        string s;
        while(num > 9){
            s = to_string(num);
            num = 0;
            for(auto i : s){
                num += (i - '0');
            }
        }
        return num;
    }
};