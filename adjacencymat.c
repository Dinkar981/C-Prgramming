
#include <stdio.h>

#define MAX_VERTICES 10

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

void initializeMatrix() {
    int i, j;
    for (i = 0; i < MAX_VERTICES; ++i) {
        for (j = 0; j < MAX_VERTICES; ++j) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void addEdge(int startVertex, int endVertex) {
    adjacencyMatrix[startVertex][endVertex] = 1;
    adjacencyMatrix[endVertex][startVertex] = 1;
}

void printMatrix(int numVertices) {
    int i, j;
    for (i = 0; i < numVertices; ++i) {
        for (j = 0; j < numVertices; ++j) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numVertices = 6; // Number of vertices in the graph

    initializeMatrix();

    // Adding edges to the graph
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);

    // Printing the adjacency matrix
    printMatrix(numVertices);

return 0;
}



