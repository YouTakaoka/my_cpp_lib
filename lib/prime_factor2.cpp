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
//O(sqrt(N))
map<int,int> np; //expoents of prime numbers
vector<int> primes; //list of prime numbers
vector<bool> not_prime;
void prime_factor(ll n){
  np = map<int, int>();
  primes = vector<int>();
  not_prime = vector<bool>(sqrt(n)+1, false);
  
  for(int i=2; i*i<=n; i++){
    if(not_prime[i]) continue;

    primes.push_back(i);
    while(n%i == 0){
      n /= i;
      np[i]++;
    }

    for(int j=i; j*j<=n; j+=i)
      not_prime[j] = true;
  }

  if(n>1){
    primes.push_back(n);
    np[n]++;
  }
}

int main(){
  clock_t start = clock();
  
  prime_factor(1000000000);

  //Output
  for(int i : primes){
    if(np[i] != 0)
      cout << i << " " << np[i] << endl;
  }

  clock_t end = clock();
  cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

  return 0;
}
