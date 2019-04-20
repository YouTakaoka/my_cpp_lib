#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<queue>
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

void Yn(bool f)
{
  cout << (f ? "Yes" : "No") << endl;
}

void yn(bool f)
{
  cout << (f ? "yes" : "no") << endl;
}

void YN(bool f)
{
  cout << (f ? "YES" : "NO") << endl;
}

/*

 */

int main(){
  

  return 0;
}
