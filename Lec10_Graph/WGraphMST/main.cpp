#include <iostream>
#include "WGraphMST.h"

using namespace std;

int main() {
    WGraphMST g;

    g.load("graph.txt");

    cout << "입력 그래프: graph.txt" << endl;
    g.display();

    cout << "MST By Kruskal's Algorithm" << endl;
    g.Kruskal();

    return 0;

    WGraphDijkstra a;
    a.load("graph_sp.tst");
    //printf("Dijkstra의 최단 경로 탐색을 위한 그래프: graph_sp.txt\n");
    //a.display();
    printf("Shortet Path By Dijkstra Algorithm\n");
    a.ShortestPath(0);

    return 0;
}