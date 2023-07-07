int stockBuyAndSell(int n, vector<int> &v) {
        // code here
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            if(v[i]>=v[i-1])
            {
                ans += (v[i]-v[i-1]);
            }
        }
        return ans;
    }
