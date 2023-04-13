class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i=1,j=0;
        s.push(pushed[0]);
        while(i<=pushed.size()&&j<popped.size()&&!s.empty())
        {
            if(s.top()==popped[j])
            {
                s.pop();
                j++;
                if(s.empty()&&i<pushed.size())
                {
                    s.push(pushed[i]);
                    i++;
                }
            }
            else{
                if(i<pushed.size())
                {
                    s.push(pushed[i]);
                }
                i++;
            }
        }
        if(s.empty())
            return true;
        return false;
    }
};