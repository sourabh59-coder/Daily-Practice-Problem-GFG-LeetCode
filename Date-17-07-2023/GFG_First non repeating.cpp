 string FirstNonRepeating(string A){
      
            unordered_map<char,int> count;
            string ans;
            queue<char> q;
            for(int i=0;i<A.length();i++)
            {
                char element=A[i];
                count[element]++;
                if(count[element]==1)
                q.push(element);
                
                while(!q.empty()&&count[q.front()]>1)
                {
                    q.pop();
                }
                if(q.empty())
                ans.push_back('#');
                else
                ans.push_back(q.front());
               
            }
            return ans;
        }
