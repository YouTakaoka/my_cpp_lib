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

int di[]={0,1,0,-1};
int dj[]={1,0,-1,0};

#define BIT(b, i) (((b) >> (i)) & 1)

ll pow(int x, int n){
  return n == 0 ? 1 : x * pow(x, n - 1);
}

ll gcd(ll a, ll b){
  if(b == 0) return a;

  return gcd(b, a%b);
}


ll lcm(ll a, ll b){
  return a/gcd(a,b)*b;
}

int main(){
  cout << gcd(6,4) << endl;
  
  return 0;
}
