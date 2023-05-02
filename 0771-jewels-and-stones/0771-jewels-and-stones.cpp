class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> set;
        for (char ch : jewels) {
            set.insert(ch);
        }
        for (char ch : stones) {
            if (set.count(ch)) {
                count++;
            }
        }
        return count;
    }
};