class Solution {
    public int shipWithinDays(int[] arr, int days) {
        int l=0,h=0,mid;
        for(int i:arr)
        {
            if(l<i)
            {
                l=i;
            }
            h+=i;
        }
        int ans=h;
        while(l<=h)
        {
          mid=(l+h)/2;
          if(check(arr,mid,days))
          {
              ans=mid;
              h=mid-1;
          }
          else
          {
              l=mid+1;
          }
        //  mid=(l+h)/2;
        }
        return ans;
    }
    boolean check(int[] arr,int mid,int days)
    {
        int curr=1,wei=0;
        for(int i:arr)
        {
            if(wei+i>mid)
            {
               wei=0;
               curr++;
            }
            wei=wei+i;
        }
        if(curr>days)
        {
            return false;
        }
        else
        return true;
    }
}
