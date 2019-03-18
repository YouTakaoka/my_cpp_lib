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


//xa+yb=gcd(a,b)の整数解を求める
typedef pair<int,int> P;
P extgcd(int a, int b){
  if(b==0)
    return P(1, 0);

  P p = extgcd(b, a%b);
  int x = p.first;
  int y = p.second;

  return P(y, x - y*(a/b)); //逆変換(18),(19)
}


int main(){
  int a=15, b=12;
  P p = extgcd(a,b);
  cout << p.first << " " << p.second << endl;

  return 0;
}
