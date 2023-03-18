class Solution {
public:
    string capitalizeTitle(string title) {
        string s;
        char t;
        int cnt=0;
        int j=0;
        for(int i=0;i<title.size();i++)
        {
            if(j==i)
            {
                cnt=0;
                while(title[j]!=' '&&j<title.size())
                {
                    cnt++;
                    j++;
                }
                j++;
            }
            if(i==0&&cnt>2)
               t=toupper(title[i]);
            else if(i>0&&title[i-1]==' '&&cnt>2)
                t=toupper(title[i]);
            else 
                t=tolower(title[i]);
            s.push_back(t);
        }
        return s;
    }
};