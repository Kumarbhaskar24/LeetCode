class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> m;
        for(auto it:tasks)
            m[it]++;
        int cnt=0;
        for(auto it:m)
        {
            if(it.second==1)
            {
              return -1;  
            } 
            else
            {
               cout<<it.first<<"->"<<it.second<<endl;
                while(it.second>2)
                {
                    int temp1=it.second%3;
                    int rem1=it.second/3;
                    int rem2,temp2;
                   // cout<<it.second<<" temp->"<<temp<<" Rem->"<<rem<<endl;
                    if(temp1==1)
                    {
                        temp2=it.second%2;
                        rem2=it.second/2;
                        rem1=min((temp1+rem1),rem2);
                    }
                    
                    it.second=temp1;
                   // cout<<it.second<<" tempb->"<<temp<<" Remb->"<<rem<<endl;
                    cnt+=rem1;
                }
               
                if(it.second==2)
                    cnt++;
             // cout<<"cnt "<<cnt<<endl;
            }
        }
        return cnt;
    }
};