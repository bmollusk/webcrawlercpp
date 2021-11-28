#include <vector>
#include <string>
#include <queue>
#include <set>
#include <iostream>

using namespace std;

vector<string> webcrawler(string url);

void bfs(string source){
    queue<string> q;
    set<string> visited;

    q.push(source);
    visited.insert(source);

    while(!q.empty()){
        string u = q.front();

        cout<<u<<", ";

        q.pop();
        vector<string> neighbors = webcrawler(u);
        for(string v: neighbors){
            
            if(visited.count(v)==0){
                q.push(v);
                visited.insert(v);
            }
        }
    }
}