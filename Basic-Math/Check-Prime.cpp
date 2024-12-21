#include<iostream>
#include<math.h>

using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;

	bool flag=true;

	for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
			flag=false;
            break;
		}
	}

	if(flag){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
