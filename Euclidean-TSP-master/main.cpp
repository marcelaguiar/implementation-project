#include "common.h"
#include "Point.h"
#include "MST.h"

int main() {
	set< pair<int,int> > generatedPointset;
	int** adjacentMatrix;
	int W, H, N;
	Point pointset;

	W = 100;
	H = 100;
	N = 10;

	cout<<"W: "<<W<<" H: "<<H<<" N:"<<N<<endl;

	pointset.generatePoint(W, H, N); //max(W,H,N) should be < 20000 because of memory limitation
	pointset.printPointset();

	generatedPointset = pointset.getPointset();
	adjacentMatrix = pointset.getAdjacentMatrix();

	//Deliverable A: From pointset and adjacentMatrix, you should construct MST with Prim or Kruskal
	MST mst(adjacentMatrix, N);
	mst.makeTree();
	mst.printMST();
	
	//Deliverable B: Find TSP2 path from the constructed MST

	//Deliverable C: Find TSP1.5 path from the constructed MST

	system("pause"); //This is temporarily here to prevent console from instantly closing

	return 0;
}