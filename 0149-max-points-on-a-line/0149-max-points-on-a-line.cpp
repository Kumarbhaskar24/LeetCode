class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
    //  vector<int> temp;
        
        float x=0;
        float y=0;
         int maxi=0;
        if(points.size()==1)
            return 1;
       for(int i=0;i<points.size();i++)
           {
           map<float,int> ma;
          
           float m=0;
           x=points[i][0];
           y=points[i][1];
           for(int j=0;j<points.size();j++)
           {
               float x1=points[j][0];
               float y1=points[j][1];
               // cout<<x1<<" "<<y1<<endl;
               // cout<<x-x1<<endl;
               if(x==x1&&y==y1)
                   continue;
              if(x-x1!=0)
                 {
                     m=((y1-y)/(x1-x));
                }
               else 
               {
                   m=INT_MAX;   
               }
               ma[m]++;
               maxi=max(maxi,ma[m]);
           }
           
           {
           //cout<<"above ma"<<endl;
//            for(auto it:ma)
//            {
//               // cout<<it.first<<" "<<it.second<<endl;
//                if(it.second>=maxi)
//                {
//                    maxi=it.second;
//                     val=maxi+1;
                  
//                }
//            }
          // temp.push_back(val);
           
           }
       }
      return maxi+1;
    }
};