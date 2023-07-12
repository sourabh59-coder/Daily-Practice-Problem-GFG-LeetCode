{
        long long int mod = 1000000007;
       //Your code here
       if(R==1) return N;
       if(R==0) return 1;
       
       
       if(R%2==0)
       {
           long long ans = power(N,R/2);
           return (ans%mod * ans%mod)%mod;
       }
       else
       {
           long long ans = power(N,(R-1)/2);
           return (ans%mod * ans%mod * N%mod)%mod;
       }
    }
