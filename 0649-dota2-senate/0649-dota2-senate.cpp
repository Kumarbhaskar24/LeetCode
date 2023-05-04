class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        for(int i=0;i<senate.size();i++)
        {
            if(senate[i]=='R')
                R.push(i);
            else 
                D.push(i);
        }
        while(!R.empty()&&!D.empty())
        {
            int rf=R.front();
            int df=D.front();
            R.pop();
            D.pop();
            if(df<rf)
            {
                D.push(df+senate.size());
            }
            else
                R.push(rf+senate.size()); 
        }
        return R.size()>D.size()?"Radiant":"Dire";
    }
};