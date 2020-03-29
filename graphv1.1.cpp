#include <iostream>
using namespace std;
struct Graph
{
    int V,E,**adj;
};
int u,v,i;
struct Graph *adjmatrixgraph()
{

    Graph *g=(struct Graph*)malloc(sizeof(struct Graph));
    cout << "enter no of vertices and edges" << endl;
    cin >> g->V;

    g->adj = new int* [g->V];
    for(u=0;u<g->V;u++)
    {
        g->adj[u] = new int[g->V];
        for(v=0;v<g->V;v++)
        {
            g->adj[u][v]=0;
        }
    }
    int ans;
    do{
        cout << "Enter Edges : ";
        cin >>g->E;

        cout <<"Enter node no in pair that connected an edge : " << endl;
        for(i=0;i<g->E;i++)
        {
            cin >> u >> v;
            g->adj[u][v]=1;
            g->adj[v][u]=1;
        }
        cout << "Do you want more Edges? ";
        cin >> ans;

    }while(ans==1);
    // if(g){
    //   printf("No Memory Created");
    //}



    return g;
}

int main() {
    struct Graph *g=adjmatrixgraph();
    int x,y;
    cout << "\n   ";
    for(x=0;x<g->V;x++)
        cout << x  << "  ";
    cout << endl;
    for(x=0;x<g->V;x++)
    {
        printf("%d",x);
        for(y=0;y<g->V;y++)
        {
            printf("  %d",g->adj[x][y]);

        }
        printf("\n");
    }
    return 0;
}
