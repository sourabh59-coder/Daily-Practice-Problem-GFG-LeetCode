bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            int val = arr[i];
            int l = i+1;
            int r = (n-1);
            
            while(l<r)
            {
                int sum = val+arr[l]+arr[r];
                if(sum==0)
                {
                    return true;
                }
                else if(sum>0)
                {
                    r--;
                }
                else if(sum<0)
                {
                    l++;
                }
            }
        }
        
        return false;
    }
