class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int ans=0;
		    int num=n;
		    while(n!=0){
		        int digit=n%10;
		        ans=ans*10+digit;
		        n/=10;
		    }
		    
		    if(num==ans){
		        return "Yes";
		    }
		    else{
		        return "No";
		    }
		}
};
