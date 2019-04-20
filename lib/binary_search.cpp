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

vector<int> a = {2, 3, 5, 7, 11, 13, 17};
int b = 11;

bool C(int x){
  return x > b;
}

bool bsearch(){
  int left = 0;
  int right = a.size();

  while(right - left > 1) {
    int mid = (left + right) / 2;
    if (C(a[mid]))
    {
      right = mid;
    } else {
      left = mid;
    }
  }
  return a[left] == b;
}

int main(){
  b = 12;

  if(bsearch()) {
    cout << "a contains " << b << endl;
  } else {
    cout << "a does not contain " << b << endl;
  }

  return 0;
}
