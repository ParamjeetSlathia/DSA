class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlength = 0;

        for(int i = 0; i < n; i++) {
            vector<bool> visited(256, false);
            int currentLength = 0;

            for(int j = i; j < n; j++) {
                if(visited[s[j]] == true)
                    break;

                visited[s[j]] = true;
                currentLength++;
            }

            maxlength = max(maxlength, currentLength);
        }

        return maxlength;
    }
};