#include<bits/stdc++.h>

using namespace std;

struct union_find{
  vector<int> par;
  vector<int> rank;
  union_find(int n){
    rank = vector<int>(n,0);
    for(int i=0; i<n; i++){
      par.push_back(i);
    }
  }

  int root(int x){
    if(par[x]==x){
      return x;
    } else {
      return par[x] = root(par[x]);
    }
  }

  void unite(int x, int y){
    int rx = root(x);
    int ry = root(y);

    if(rx==ry)
      return;

    if(rank[rx]<rank[ry]){
      par[rx] = ry;
    } else {
      par[ry] = rx;
      if(rank[rx]==rank[ry])
        rank[rx]++;
    }
  }

  bool equiv(int x, int y){
    return root(x)==root(y);
  }
};

int main(){
  union_find uf(6);
  uf.unite(1,3);
  uf.unite(3,5);
  for(int i=1; i<6; i++){
    cout << uf.root(i) << endl;
  }
  cout<< uf.equiv(1,5) << endl;
  cout<< uf.equiv(1,2) << endl;

  return 0;
}

