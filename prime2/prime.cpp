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


bool Isprime(long long int n,int reps){
  std::vector<long long int> v;
  for(int k = 0; k < reps; k++){
	   v = primeFactorization(n);
   }
	return v.size() == 1;
}

void nlognFunc(){
  for (size_t i = 2; i <40 ; i++){
    int reps = 1000000;
    clock_t t0 = std::clock( );
    for(int k = 0; k < reps; k++){
      log(i);
    }
    clock_t t1 = std::clock( );
    double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
    std::cout << dt/reps << std::endl;
  }
}

long long int logFunc(){
  long long int total;
  for (size_t i = 2; i <40 ; i++){
    int reps = 1000000;
    clock_t t0 = std::clock( );
    for(int k = 0; k < reps; k++){
      total = i * log(i);
    }
    clock_t t1 = std::clock( );
    double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
    std::cout << dt/reps << std::endl;
  }
  return total;
}

int main(){
	// int reps = 1;
	// long long int n, lastN, range;
  nlognFunc();
  // n2Func();
  // n3Func();
  // for (size_t i = 2; i <51 ; i++){
  //
	// 	n = pow(2,i);
  //   lastN = pow(2,i-1);
  //   range = n - lastN;
  //   int primes = 0;
	// 	clock_t t0 = std::clock( );
	// 	for (long long int j = 1; j < range; j++){
	// 		n -= 1;
  //     if(Isprime(n, reps)){
  //       primes +=1;
  //     }
  //     if(primes ==1024){
  //       break;
  //     }
	//   }
	// 	clock_t t1 = std::clock( );
	// 	double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
	// 	std::cout <<  i << "," << dt/reps << std::endl;
	// }
  return 0;
}


// for(int k = 0; k < reps; k++){
//    if(Isprime(n)){
//      primes +=1;
//    }
//    if(primes ==1024){
//      break;
//    }
// }


// for(int i = 0; i < reps; i++){
// 	 primeFactorization(n);
// }

// std::vector<long long int> v;

// std::cout << n << ":";
// for (size_t j = 0; j < v.size(); j++){
//   std::cout << v[j] << " ";
// }
 // std::cout << std::endl;
