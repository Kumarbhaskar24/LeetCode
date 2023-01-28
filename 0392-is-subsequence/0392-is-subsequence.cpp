class Solution {
public: 
    bool helper(string s,string t,int i,string temp)
    {
        if(i>=t.size())
        {
            if(temp==s)
                return true;
            else return false;
        }
        
        bool a= helper(s,t,i+1,temp);
        temp.push_back(t[i]);
        bool b= helper(s,t,i+1,temp);
        return a|b;

    }
    bool isSubsequence(string s, string t) {
        {

        // for(long long i=0;i<(1<<t.size())-1;i++)
        // {
        //     string temp="";
        //     for(long long j=0;j<t.size();j++)
        //     {
        //         if(i&(1<<j))
        //             temp=temp+t[j];
        //     }
        //     if(temp==s)
        //         return true;
        // }
        // return false;
        }
        // if(s=="")
        //     return true;
        // string temp="";
        int idx=0;
        for(int i=0 ; i<t.size() ; i++){
            if(t[i] == s[idx]) idx++;
        }
        if(idx == s.size()) return true;
        else return false;
    }
};