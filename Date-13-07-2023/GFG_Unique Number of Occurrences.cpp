class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int len=mp.size();
        
        set<int> st;
        for(auto it:mp)
        {
            auto x=it.second;
            st.insert(x);
        }
        return st.size()==len;
    }
};
