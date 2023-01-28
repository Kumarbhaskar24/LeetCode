class Solution {
public:
//     void subsequence(string s,int i,set<string> &ss,string temp)
//     {
//         if(i>=s.size())
//         {
//             ss.insert(temp);
//             return;
//         }
        
//         //exclude that particular char
//         subsequence(s,i+1,ss,temp);
//         char c=s[i];
//         temp.push_back(c);
//         subsequence(s,i+1,ss,temp);
//         return ;
//     }
    int numMatchingSubseq(string s, vector<string>& words) {
       // set<string> ss;
       // string temp="";
       // subsequence(s,0,ss,temp);
        int cnt=0;
        map<char,vector<int>> m;
        int i=0;
        for(auto it:s)
            m[it].push_back(i++);
        
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            int latest=-1;
            for(int j=0;j<temp.size();j++)
            {
                auto it=upper_bound(m[temp[j]].begin(),m[temp[j]].end(),latest);
                if(it==m[temp[j]].end())
                    break;
                latest=*it;
                if(j==temp.size()-1)
                    cnt++;
            }
        }
        return cnt;
    }
};