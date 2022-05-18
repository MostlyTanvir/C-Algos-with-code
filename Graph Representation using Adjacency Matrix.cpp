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
//////  		Graph Representation using Adjacency Matrix
//////			Space complexity O(N^2)
//////			Max Matrix Size (10^3 * 10^3)
//////			HIGHER SPACE COMPLEXITY
//________________________________________________________________________________________

/*

INPUT :

	6 9		// Nodes, Edges
	1 3		// Vertex1, Vertex2 are connected
	1 5
	3 5
	3 4
	3 6
	3 2
	2 6
	4 6
	5 6

OUTPUT :

	0 0 1 0 1 
	0 0 1 0 0 
	1 1 0 1 1 
	0 0 1 0 0 
	1 0 1 0 0 
	
*/

void solve(){
	
	int node, edges;
	
	cin >> node  >> edges;
	
	
	// Taking a node*node size Matrix
	
	int graph[node+1][node+1];
	
	// Initializing the matrix with ZERO
	
	for(int i=1;i<node;i++)
		
		for(int j=1;j<node;j++)
		
			graph[i][j]=0;
	
	
	// Taking the input and mapping the graph using adjacency matrix
	
	int v1,v2;
	
	// int weight;
		
	for(int i=0; i<edges; i++){
		
		cin >> v1 >> v2 /*>> weight*/;
		
		graph[v1][v2]=1; // if there is a weight put the weight instead of 1
		
		graph[v2][v1]=1; // if there is a weight put the weight instead of 1
		
	}
	
	
	// Printing the Graph Matrix
	
	for(int i=1;i<node;i++){
		
		for(int j=1;j<node;j++){
			
			cout << graph[i][j]<< " ";
			
		}
		
		cout <<endl;
		
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
