#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "math.h"

int fib1(int n){
  if (n == 0){
    return 0;
  }
  if (n == 1){
    return 1;
  }
  return fib1(n-1) + fib1(n-2);
}

int fib2(int n){
  if (n == 0){
    return 0;
  }
  std::vector<int> v;
  int f0 = 0;
  int f1 = 1;
  int fn;
  v.push_back(f0);
  v.push_back(f1);
  for(int i = 2; i < n; i++){
    fn = v[i-1] + v[i-2];
    v.push_back(fn);
  }
  return v[n];
}

int nSquared(int n){
  return n*n;
}
int nCubed(int n){
  return n*n*n;
}
int nLogn(int n){
  return n * log(n);
}


int main( ) {

  std::srand( std::time( 0 ) );
  int reps = 1000000;
  for(int i = 0; i < 41; i++){
    int N = i;

    // clock_t t0 = std::clock( );
    // for(int i = 0; i < reps; i++){
    //   fib1( N);
    // }
    // clock_t t1 = std::clock( );
    // double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
    // std::cout <<"fib1: " <<  N << "," << dt/reps << std::endl;

    // clock_t t2 = std::clock( );
    // for(int i = 0; i < reps; i++){
    //   fib2(N);
    // }
    //
    // clock_t t3 = std::clock( );
    // double dt2 = ((double)(t3 - t2)) / CLOCKS_PER_SEC;
    // std::cout << "fib2: "<< N << "," << dt2/reps << std::endl;

    clock_t t0 = std::clock( );
    for(int i = 0; i < reps; i++){
      nLogn( N);
    }
    clock_t t1 = std::clock( );
    double dt = ((double)(t1 - t0)) / CLOCKS_PER_SEC;
    std::cout <<"fib1: " <<  N << "," << dt/reps << std::endl;
  }


  return 0;
}
