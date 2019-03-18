#include<cstdio>
#include<bits/stdc++.h>
typedef long long int ll;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR_IN(i, a, b) for(int i = (a); i < (b); i++)
#define BETWEEN(x, a, b) ((x) >= (a) && (x) <= (b))
#define BIT(b, i) (((b) >> (i)) & 1)
#define LOG_F 1
#define LOG(...) if(LOG_F) fprintf(stderr, __VA_ARGS__)

using namespace std;

ll pow(int x, int n){
  return n == 0 ? 1 : x * pow(x, n - 1);
}


ll comb[101][101];

void create_comb_table(){
  int n = 100;
  REP(i,n+1){
    comb[i][0] = 1;
    comb[i][i] = 1;
  }

  REP(i,n){
    REP(j,i){
      comb[i+1][j+1] = comb[i][j+1] + comb[i][j];
    }
  }
}


int main(){
  create_comb_table();
  cout<<comb[100][50]<<endl;

  return 0;
}
