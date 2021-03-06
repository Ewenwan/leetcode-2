class Solution {
public:
    string addStrings(string num1, string num2) {
        int length = max(num1.length(), num2.length());
        string result(length, '0');
        int carry = 0;
        int i1 = num1.length()-1;
        int i2 = num2.length()-1;
        
        for (int i = length-1 ; i >= 0 ; i--) {
            int v1 = i1 >= 0? num1.at(i1) - '0' : 0;
            int v2 = i2 >= 0? num2.at(i2) - '0' : 0;
            int sum = v1 + v2 + carry;
            result[i] = sum%10 + '0';
            carry = sum/10;
            i1--; i2--;
        }
        if (carry)  result = '1' + result;
        return result;
    }
};
