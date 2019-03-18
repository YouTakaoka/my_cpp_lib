#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

//Enumerate prime numbers which are less than or equal to n
//O(n log log n)
vector<int> primes;
void prime(int n){
  vector<bool> is_prime(n + 1, true);

  for(int i = 2; i <= n; i++){
    if(is_prime[i])
      primes.push_back(i);
    for(int j = 2 * i; j <= n; j += i)
      is_prime[j] = false;
  }
}


int main(){
  clock_t start = clock();
  
  prime(10000);
  for(int i : primes)
    cout << i << " ";
  
  clock_t end = clock();
  cout << "\n" << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

  return 0;
}

