#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "math.h"

std::vector<long long int> primeFactorization(long long int n){
  long long int x = ceil(sqrt(n));
  std::vector<long long int> v;
  int total = n;
  for(long long int i = 2; i <= x+1; i++){
      if(total%i == 0){
        total /=i;
        v.push_back(i);
        i -= 1;
      }
  }
  v.push_back(total);
    return v;
}


bool IsPrime(long long int n){
	std::vector<long long int> v = primeFactorization(n);
	return v.size() == 1;
}

int main(){
	int reps = 1;
	long long int n;
  for (size_t i = 2; i <51 ; i++){
		n = pow(2,i);
		clock_t t0 = std::clock( );
		for (size_t j = 1; j <1025 ; j++){
			n -= j;
			for(int k = 0; k < reps; k++){
				 primeFactorization(n);
			}
	  }
		clock_t t1 = std::clock( );
		double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
		std::cout <<  i << "," << dt/reps << std::endl;
	}
  return 0;
}

// for(int i = 0; i < reps; i++){
// 	 primeFactorization(n);
// }

// std::vector<long long int> v;

// std::cout << n << ":";
// for (size_t j = 0; j < v.size(); j++){
//   std::cout << v[j] << " ";
// }
 // std::cout << std::endl;
