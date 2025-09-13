#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0, dbl = 0, total = 0;

        for (int n : nums) {
            total += n;
            if (n < 10) {
                single += n;       
            } else if (n < 100) {
                dbl += n;         
            }
        }

        
        if (single > total - single) return true;

       
        if (dbl > total - dbl) return true;

        return false;
    }
};
