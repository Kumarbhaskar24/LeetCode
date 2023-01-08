class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {        
        float x=0;
        float y=0;
         int maxi=0;
       for(int i=0;i<points.size();i++)
           {
           unordered_map<float,int> ma;
          
           float m=0;
           x=points[i][0];
           y=points[i][1];
           for(int j=0;j<points.size();j++)
           {
               float x1=points[j][0];
               float y1=points[j][1];
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
       }
      return maxi+1;
    }
};