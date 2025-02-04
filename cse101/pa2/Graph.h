/********************************************************************************* 
 *  * * Karthi Sankar, kasankar 
 *  * * 2022 Spring CSE101 PA2
 *  * * Graph.h 
 *  * * Header file for Graph ADT 
 *  * ********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include"List.h"

#define INF -5
#define NIL -4

typedef struct GraphObj* Graph;

/*** Constructors-Destructors ***/
Graph newGraph(int n);
void freeGraph(Graph* pG);

/*** Access functions ***/
int getOrder(Graph G);
int getSize(Graph G);
int getSource(Graph G);
int getParent(Graph G, int u);
int getDist(Graph G, int u);
void getPath(List L, Graph G, int u);

/*** Manipulation procedures ***/
void makeNull(Graph G);
void addEdge(Graph G, int u, int v);
void addArc(Graph G, int u, int v);
void BFS(Graph G, int s);

/*** Other operations ***/
void printGraph(FILE* out, Graph G);
