class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s : strs)
        {
            encoded_string.append(to_string(s.size()) + "#" + s);
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;

        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#') j++;

            int len = stoi(s.substr(i, j-i));
            j++;

            strs.push_back(s.substr(j, len));
            i = j + len;
        }

        return strs;
    }
};
