//________________________________________________________________________________________
//
//				BISMILLAHIR RAHMANIR RAHIM
//				TANVIR AHMED KHAN
//________________________________________________________________________________________
//

#include<bits/stdc++.h>

typedef		long long ll;
const		ll 		MOD  	= 	1e9 + 7;
const		ll 		MaxN 	= 	2000007;
using namespace std;

//________________________________________________________________________________________
//

#define 	pb				push_back
#define 	endl            "\n"
#define 	f               first
#define 	s               second
#define 	pi              2 * acos(0.0)
#define		cy				cout << "Yes\n";
#define		cn				cout << "No\n";
#define 	FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);

//________________________________________________________________________________________
//

const int N = 1e5+10;

vector<int> Graph[N];

bool vis[N]={false};

void DFS(int root){
	
	// 1. Take Action on root after Entering the root
	
	if(vis[root])return; // This is a handy way to understand DFS better
	
	vis[root]=true;
	
	cout <<"Visited " <<  root << endl ;
	
	for(int child : Graph[root]){
		
		// 2. Take Action on child Before Entering the child node
		
		// if(vis[child])continue;  // This is a pro way to use DFS 
		
		cout << "Root-> "<< root <<" Child-> " <<child <<endl;
		
		DFS(child);
		
		// 3. Take Action on Child After Entering the child node
		
		
	}
	
	// 4. Take Action on Root before Exiting the root
	
	
}



void solve(){
	
	int node, edge;
	
	cin >> node >> edge;
	
	int v1, v2;
	for(int i = 0; i<edge ; i++){
		
		cin >> v1 >> v2;
		
		Graph[v1].push_back(v2);
		
		Graph[v2].push_back(v1);
	}
	
	DFS(1);
	
}



int main(){
	
	FAST
	
	solve();
	
	return 0;
}

//________________________________________________________________________________________
//
// 			ALHAMDULILLAH
//________________________________________________________________________________________
//