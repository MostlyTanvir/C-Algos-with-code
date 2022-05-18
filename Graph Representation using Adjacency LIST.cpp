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

//________________________________________________________________________________________
//
//////  		Graph Representation using Adjacency LIST
//////			Space complexity O(Nodes + Edges)
//////			Lower SPACE COMPLEXITY than Adjacency Matrix (NODES + Edges)
//________________________________________________________________________________________

/*
INPUT : 

	6 9
	1 3
	1 5
	3 5
	3 4
	3 6
	3 2
	2 6
	4 6
	5 6
	
OUTPUT : 

1 -->> 3 5 
	2 -->> 3 6 
	3 -->> 1 5 4 6 2 
	4 -->> 3 6 
	5 -->> 1 3 6 
	
*/


const ll N = 1e3+10;

// In each NODE, which NODES are connceted

vector<int> adjacency_node_list[N];

// For undirceted weighted graph
// vector< pair<int,int> > adjacency_node_list[N];


void solve(){
	
	int node, edges /*,weight*/;
	
	cin >> node >> edges;
	
	int v1, v2;
	
	for(int i=0; i<edges; i++){
		
		cin >> v1 >> v2 /*>> weight*/;
		
		adjacency_node_list[v1].push_back(v2);
		
		adjacency_node_list[v2].push_back(v1);
		
		/// for weighted
		// 		
		// adjacency_node_list[v1].push_back({v2,weight});
		// 		
		// adjacency_node_list[v2].push_back({v1,weight});
		
		
	}
	
	// Printing the adjacency node list vector
	
	for(int i=1; i<node; i++){
		
		cout << i <<" -->> ";
		
		for(auto u : adjacency_node_list[i]) {
			
			cout << u <<" ";
			
		}
		
		cout << endl;
		
	}	
	
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