class Solution {
public:
    string intToRoman(int num) {
        vector<string> arr = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> arr1 = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans;
        for(int i=0;i<arr.size();++i) {
            while (num>=arr1[i]) {
                num-=arr1[i];
                ans+=arr[i];
            }
        }
        return ans;
    }
};
