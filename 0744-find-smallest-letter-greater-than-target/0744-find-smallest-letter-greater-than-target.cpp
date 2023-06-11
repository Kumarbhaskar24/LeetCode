class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char first=letters[0];
        for(int i=1;i<letters.size();i++)
        {
            if(first<=target)
                first=letters[i];
            else if(first>target)
                break;
        }
        return first>target?first:letters[0];
    }
};