class Solution{
	public:
	long factorial(long n){
	    if(n==0) return 1;
	    return n*factorial(n-1);
	}
	vector<int> FactDigit(int N)
	{
	    // Code here
	    vector<int> ans;
	    while(N != 0){
	        for(int i=9;i>=0;i--){
	            if(N >= factorial(i)){
	                ans.push_back(i);
	                N -= factorial(i);
	                break;
	            }
	        }
	    }
	    sort(ans.begin(), ans.end());
		//sorting will take O(nlogn) we can just insert elements at index 0 (no need to sort or reverse)
	    return ans;
	}
};
