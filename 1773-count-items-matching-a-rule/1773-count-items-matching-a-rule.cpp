class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0;
        int v;
        if(ruleKey=="type")
            v=0;
        else if(ruleKey=="color")
            v=1;
        else if(ruleKey=="name")
            v=2;
        
            
        for(int i=0;i<items.size();i++)
        {
          if(items[i][v]==ruleValue)
              cnt++;
        }
        return cnt;
    }
};