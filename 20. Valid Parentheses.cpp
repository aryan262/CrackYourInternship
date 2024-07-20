class Solution {
public:
    bool isValid(string s) {
        string st;
        for (auto pr : s) {
            if(pr=='(' || pr=='{' || pr=='[')
                st.push_back(pr);
            else if(st.empty() || !match(st.back(), pr))
                return false;
            else
                st.pop_back();
        }
        return st.empty();
    }

    bool match(char l, char r) {
        return (l=='(' && r==')') || (l=='[' && r==']') || (l=='{' && r=='}');
    }
};
