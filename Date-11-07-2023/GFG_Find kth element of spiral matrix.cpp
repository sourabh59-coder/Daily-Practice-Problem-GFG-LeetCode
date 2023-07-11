int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		 vector<int>ans;
        int count=0;
        int total=(n*m);
        //index
        int startingrow=0;
        int startingcol=0;
        int endingrow=n-1;
        int endingcol=m-1;

        while(count<total){
        //print startingrow
        for(int i=startingcol;i<=endingcol;i++){
            ans.push_back(a[startingrow][i]);
           count++; 
        }startingrow++;
        
        //print endindcol
        for(int i=startingrow; i<=endingrow;i++){
            ans.push_back(a[i][endingcol]);
            count++;
        }endingcol--;
      
        //print endingrow
        for(int i=endingcol; i>=startingcol;i--){
            ans.push_back(a[endingrow][i]);
            count++;
        }endingrow--;
      
        //print startingcol
        for(int i=endingrow; i>=startingrow;i--){
            ans.push_back(a[i][startingcol]);
            count++;
        }startingcol++;
        
        }
        
        return ans[k-1];

    }
