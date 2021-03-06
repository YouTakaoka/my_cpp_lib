#include<cstdio>
#include<bits/stdc++.h>
typedef long long int ll;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR_IN(i, a, b) for(int i = (a); i < (b); i++)
#define BETWEEN(x, a, b) ((x) >= (a) && (x) <= (b))
#define BIT(b, i) (((b) >> (i)) & 1)
#define LOG_F 1
#define LOG(...) if(LOG_F) fprintf(stderr, __VA_ARGS__)
#define MAX 1000000000

using namespace std;


//Prime factorization of n
//O(log n)
map<int,int> np; //expoents of prime numbers
vector<int> primes; //list of prime numbers
vector<int> min_prime;
void prime_factor(ll n){
  np = map<int,int>();
  primes = vector<int>();
  min_prime = vector<int>(n+1, 0);

  for(int i = 2; i <= n; i++){
    if(min_prime[i] == 0){
      primes.push_back(i);
      for(int j = i; j <= n; j += i)
        if(min_prime[j] == 0)
          min_prime[j] = i;
    }
  }
  
  while(n != 1){
    int p = min_prime[n];
    np[p]++;
    n /= p;
  }
}

int main(){
  clock_t start = clock();
  
  prime_factor(1000000);

  //Output
  for(int i : primes){
    if(np[i] != 0)
      cout << i << " " << np[i] << endl;
  }

  clock_t end = clock();
  cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

  return 0;
}
