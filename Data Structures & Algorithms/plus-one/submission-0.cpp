class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        string x = "";

        // vector -> string
        for (int i = 0; i < digits.size(); i++) {
            x += (digits[i] + '0');
        }

        // string -> long long
        long long y = stoll(x);
        y++;

        // long long -> string
        x = to_string(y);

        // string -> vector
        for (char ch : x) {
            ans.push_back(ch - '0');
        }

        return ans;
    }
};