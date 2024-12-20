//AUTHOR - PRASUNA DASH
#include<bits/stdc++.h>

using namespace std; 


void explainPair(){
	pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // Nested pairs
    pair<int,pair<int,int>>p1={4,{5,6}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    // Array of pairs
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[1].second<<endl;
}

void explainVector(){
	vector<int>v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int,int>>vec;
	vec.push_back({3,4});
	vec.emplace_back(5,6);

    // A container containing 5 instances of 100
	vector<int>res(5,100);
	// {100,100,100,100,100}

	vector<int>v(5); // {0,0,0,0,0}

	vector<int>v1(5,20);
	vector<int>v2(v1);

	// Accessing the elements of a vector

	// Way 1
	cout<<v[0]<<" "<<v.at(0)<<endl;

	// Last element of a vector
	cout<<v.back()<<endl;

	// Accessing elements using iterator
	vector<int>::iterator=v.begin();
	it++;
	cout<<*(it)<<endl;
	it=it+2;
	cout<<*(it)<<endl;

    // Points to a memory location right after the last element
	vector<int>::iterator=v.end(); 
	// Points to a memory location of the last element
	vector<int>::iterator=v.rbegin();
	// Points to a memory location right before the 1st element
	vector<int>::iterator=v.rend();

	// Printing the vector

	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*(it)<<" ";
	}

	// Using auto 
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*(it)<<" ";
	}

	for(auto it:v){
		cout<<it<<" ";
	}

	// Erase function
	// I/p -> {10,20,30,40}
	// O/p -> {10,30,40}
	v.erase(v.begin()+1);

    // The end address should be of a ele after the one which u want to delete
	v.erase(v.begin()+1,v.begin()+3);

	// Insert function
	vector<int>v(2,100); // {100,100}

	v.insert(v.begin(),300); // {300,100,100}

	v.insert(v.begin()+1,2,10); // {300,10,10,100,100}


	// Copying elements of a vector into another
	vector<int>copy(2,50); // {50,50}

	v.insert(v.begin(),copy.begin(),copy.end());
    // {50,50,300,10,10,100,100}


    // Size of a vector
    cout<<v.size()<<endl;

    // Popping out last ele of vector
    cout<<v.pop_back()<<endl;

    // v1-> {10,20}
    // v2-> {30,40}

    v1.swap(v2);
    // v1->{30,40} and v2-> {10,20}

    v.erase(); // Clears the whole vector

    cout<<v.empty();
}

void explainList(){
    list<int>ls;
    ls.push_back(1); // {1}
    ls.emplace_back(2);  // {1,2}

    ls.push_front(5); // {5,1,2}
    // Rest all functions are similar to vector
}

void explainStack(){
	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.emplace(4);

	cout<<st.top()<<endl; // 4
	st.pop();
    cout<<st.top()<<endl; // 3

    cout<<st.size(); // 3
    cout<<st.empty(); // false

    stack<int>st1,st2;
    st1.swap(st2);
}

void explainQueue(){
	queue<int>q;
	q.push(1);
	q.push(2);
	q.emplace(3);

	q.back()+=5;

	cout<<q.back();

	cout<<q.front();

	q.pop();

	// size, swap and empty are same as stack
}

void priorityQueue(){
	priority_queue<int>pq;

	pq.push(1);
	pq.push(2);
	pq.emplace(3);

	cout<<pq.top();
	pq.pop();

	// size, swap and empty function are same as others

	// Minimum heap to store minimum ele at top
	priority_queue<int,vector<int>,greater<int>>pq;
	pq.push(5);  // {5}
	pq.push(2);  // {2,5}
	pq.emplace(8); // {2,5,8}

	cout<<pq.top();

	// Push and Pop happens in logn time
	// Top operation can be performed in O(1)
}


void explainSet(){
	set<int>st;
	st.insert(1); //{1}
	st.emplace(2); // {1,2}
	st.insert(2); // {1,2}
	st.insert(3); // {1,2,3}

	// Functionality of insert in a vector can be used above
	// But it only increases the effciency

	// begin(),end(),rbegin(),rend(), size() are same as those above

	// {1,2,3,4,5}
	auto it=st.find(3); // returns an iterator pointing to 3

	auto it=st.find(6); // returns an iterator after 5

    // {1,4,5}
    st.erase(5); // erases the element 5 {1,4} takes logn time

    int cnt=st.count(4);

    auto it=st.find(3);
    st.erase(it);

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); 

    auto it=st.lower_bound(2);
    auto it=st.upper_bound(4);
}


void explainMultiSet(){
	// Everything is same as set just the fact that it stores duplicates also

	multiset<int>ms;

	ms.insert(1); // {1}
	ms.insert(1); // {1,1}
	ms.insert(1); // {1,1,1}

	ms.erase(1); // All 1's are erased

	int cnt=ms.count(1);

	// Only a single 1 is erased
	ms.erase(ms.find(1));

	ms.erase(ms.find(1),ms.find(1)+2);

	// rest all functions are same as set
}

void explainUSet(){
	unordered_set<int>st;

	// All the operations take O(1) time
	// But lower_bound and upper_bound fn does not work

	// In worst case it goes upto O(n)
}

void explainMap(){
	map<int,int>mpp;

	map<int,pair<int,int>>mpp;

	map<pair<int,int>,int>mpp;

	mpp[1]=2;

	mpp.emplace({3,1});

	mpp.insert({2,4});

	mpp[{2,3}]=10;

	for(auto it:mpp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	cout<<mpp[1];
	cout<<mpp[3];

	auto it=mpp.find(3);
	cout<<*(it).second;

	auto it=mpp.find(5);

	auto it=mpp.lower_bound(2);
	auto it=mpp.upper_bound(4);
}

void explainMultiMap(){
	// similar to map except that u can store duplicate keys
	// in sorted order
}

void explainUnorderedSet(){
	// Similar to set except that it does not store elements
	// in sorted order
}

bool comp(pair<int,int>p1,pair<int,int>p2){
	// sorting the 2nd ele in asc order
	if(p1.second < p2.second){
		return true;
	}
	if(p1.second > p2.second){
		return false;
	}

    // if 2nd ele is same then this case will be checked
    // and we check whether the first ele is sorted in
    // desc order then return true else return false
	if(p1.first > p2.first){
		return true;
	}
	return false;
}

void explainAlgo(){
	sort(a,a+n);
	sort(v.begin(),v.end());

	sort(a+2,a+4);

	// sort them in desc order
	sort(a,a+n,greater<int>());

	pair<int,int>a[]={{1,2},{2,1},{4,1}};

	// sort it according to the 2nd ele if 2nd ele is same
	// then sort it acc to 1st ele in desc order

	sort(a,a+n,comp);

	int num=7;

	// Finds number of 1's in binary notation
	// Finds number of set bits in binary form
	int cnt=__builtin_popcount();

	long long n=9876543210
	int cnt=__builtin_popcountll();

	string s="123";
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));

	int maxi=*max_element(a,a+n);
	int mini=*min_element(a,a+n);

	int sum=0;
	accumulate(a,a+3,sum);
}

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    explainVector();
    return 0;
}
