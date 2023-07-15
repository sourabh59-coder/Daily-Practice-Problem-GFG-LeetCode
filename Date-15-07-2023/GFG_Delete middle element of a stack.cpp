class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        stack<int>st;
        int m=n/2;
        for(int i=0;i<m;i++)
        {
            st.push(s.top());
            s.pop();
        }
        s.pop();
        for(int i=0;i<m;i++)
        {
            s.push(st.top());
            st.pop();
        }
    }
};
