class Solution {
public:
    int maxProfit(vector<int>& pri) {
    /**   long long  int i=0,ele=INT_MAX,index,pro=0,max=0;
        for(i=0;i<pri.size();i++)
        {
           if(pri[i]<ele)
           {
               ele=pri[i];
               index=i;
           }
        for(long long int j=index+1;j<pri.size();j++)
        {
           if(max<pri[j])
           {
               max=pri[j];
           }
        }
         if(max>ele&&pro<max-ele)
           pro=max-ele;
           else
         //  pro=0;
           max=0;
           ele=1000;
    }**/
    //int ele=INT_MAX;
    int buy=INT_MAX,pro=0;
    for(int i=0;i<pri.size();i++)
    {
        if(pri[i]<buy)
        {  
           buy=pri[i];
        }
       pro=max(pro,(pri[i]-buy));
    }
      return pro;        
    }
};
