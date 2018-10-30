#include<iostream>
#include<stdlib.h>
using namespace std;
struct Adjlistnode{
  int dest;
  struct Adjlistnode *next;
};
struct Adjhead{
  struct Adjlistnode *head;
};
struct Graph{
  int V;
  struct Adjhead* array;
};
struct Adjlistnode* newNode(int dest){
  struct Adjlistnode * newnode= (struct Adjlistnode*)malloc(sizeof(Adjlistnode));
newnode->dest= dest;
newnode->next= NULL;
return newnode;
}
struct Graph* createGraph(int V){

  struct Graph *graph= (struct Graph*)malloc(sizeof(Graph));
  graph->V=V;
  graph->array = (struct Adjhead*)malloc(V*sizeof(struct Adjhead));
  for(int i =0;i<V;i++){
    graph->array[i].head= NULL;
    return graph;
  }
}
void addEdge(struct Graph* graph,int src,int dest){
struct Adjlistnode * newnode=newNode(dest);
newnode->next= graph->array[src].head;
graph->array[dest].head=newnode;

}
void printGraph(struct Graph* graph){

int v;
for(int i=0;i<graph->V;i++){
  struct Adjlistnode* pCrawl= graph->array[v].head;
  while(pCrawl){
    cout<<pCrawl->dest<<" ";
    pCrawl=pCrawl->next;
  }
}
}
int main(){
  int V=5;
  struct Graph* graph= createGraph(V);
  addEdge(graph,0,1);
  addEdge(graph,0,4);
  addEdge(graph,1,2);
  addEdge(graph,1,3);
  addEdge(graph,1,4);
  addEdge(graph,2,3);
  addEdge(graph,3,4);
  printGraph(graph);

}
