// Ctrl+B to run the code


#include<bits/stdc++.h>

using namespace std; 


void solve(int a[],int l,int r){
	if(l>=r){
		return;
	}
	swap(a[l],a[r]);
	solve(a,l+1,r-1);
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    solve(a,0,n-1);

    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
    }
    
	return 0;
}

