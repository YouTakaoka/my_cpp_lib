#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<vector>
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


/*
n m
ai bi ci (m)

n 100
m 1000
ci 1000
 */
#define INF 1000000000
int n,m,a[1000],b[1000],c[1000];
ll d[100][100];
bool check[100][100];

int main(){
  REP(i,100){
    REP(j,100){
      d[i][j] = i==j ? 0 : INF;
    }
  }
  
  cin>>n>>m;
  REP(i,m){
    cin>>a[i]>>b[i]>>c[i];
    a[i]--; b[i]--;
    d[a[i]][b[i]] = c[i];
    d[b[i]][a[i]] = c[i];    
  }

  REP(k,n){
    REP(i,n){
      REP(j,n){
        if(d[i][j] > d[i][k] + d[k][j]){
          d[i][j] = d[i][k] + d[k][j];
          check[i][k] = check[k][i] = true;
          check[j][k] = check[k][j] = true;
        }
      }
    }
  }

  int cnum=0;
  REP(i,m){
    if(d[a[i]][b[i]] == c[i]) cnum++;
  }

  cout<< m - cnum << endl;

  return 0;
}
