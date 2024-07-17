class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long start = 0,end =0, x=LONG_LONG_MAX;
        sort(a.begin(),a.end());
        for(long long i=0;i+m-1<n;i++)
		{
			long long diff = a[i+m-1] - a[i];
			if(x>diff)
			{
				x = diff;
				start = i;
				end = i+m-1;
			}
		}
		return a[end]-a[start];
    }   
};
