#include "lab3.hpp"

using namespace std;

int hofstadter_naive(int n) {
    if (n==0)
    return 0;
    return n - hofstadter_naive(hofstadter_naive(n-1));
}

int hofstadter_memorized(int n, vector<int>&memo) {
    if (n==0)
    return 0;

    if (memo[n] != -1){
        return memo[n];
    }

memo[n] = n - hofstadter_memorized(hofstadter_memorized(n-1,memo),memo);
return memo[n];
}