class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num=n;
        int ans=0;
        int sum=0;
        while(n!=0){
            int digit=n%10;
            ans=pow(digit,3);
            sum+=ans;
            n/=10;
        }
        
        if(sum==num){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

// Coding Ninjas ArmStrong Number Solution

int CountDigits(int n){
	int c=0;
	while(n!=0){
		int rem=n%10;
		c++;
		n/=10;
	}
	return c;
}

long long int ArmStrongCheck(int n,int count){
	long long int ans=0;
	while(n!=0){
		int rem=n%10;
		ans+=(pow(rem,count));
		n/=10;
	}
	return ans;
}

bool checkArmstrong(int n){
	//Write your code here
	int count=CountDigits(n);
	long long int findVal=ArmStrongCheck(n,count);

	if(findVal==n){
		return true;
	}
	return false;
}

