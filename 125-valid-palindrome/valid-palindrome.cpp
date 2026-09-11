class Solution {
private:

    bool validcharacter(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char lowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool check_palindrom(string s) {
        int s1 = 0;
        int e = s.length() - 1;

        while (s1 <= e) {
            if (s[s1] != s[e]) {
                return false;
            }

            s1++;
            e--;
        }

        return true;
    }

public:

    bool isPalindrome(string s) {

        string temp = "";

        for (int j = 0; j < s.length(); j++) {
            if (validcharacter(s[j])) {
                temp.push_back(lowercase(s[j]));
            }
        }

        return check_palindrom(temp);
    }
};