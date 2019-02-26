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


/*

 */
int n,k;

int main(){
  cin>>n>>k;
  int ans = 0;
  FOR_IN(a,1,n+1){
    FOR_IN(b,1,n+1){
      FOR_IN(c,1,n+1){
        if((a+b)%k==0 && (b+c)%k==0 && (c+a)%k==0) ans++;
      }
    }    
  }

  cout<<ans<<endl;

  return 0;
}
