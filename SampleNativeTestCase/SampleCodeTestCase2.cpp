/**
* this is test case with parameter
*/
#include "gtest/gtest.h"
#include <stdio.h>

#define __DEBUG__

#ifdef __DEBUG__
    #define DEBUG(format,...) printf("[%s]: "format"\n",__FUNCTION__,##__VA_ARGS__)
#else
    #define DEBUG(format,...)
#endif


namespace android {

class IsPrimeParamTest : public testing::TestWithParam<int>
{
    
        
    
};

// Returns true iff n is a prime number.
bool IsPrime(int n)
{
    // Trivial case 1: small numbers
    if (n <= 1) return false;

    // Trivial case 2: even numbers
    if (n % 2 == 0) return n == 2;

    // Now, we have that n is odd and n >= 3.

    // Try to divide n by every odd number i, starting from 3
    for (int i = 3; ; i += 2) {
        // We only have to try i up to the squre root of n
        if (i > n/i) break;

        // Now, we have i <= n/i < n.
        // If n is divisible by i, n is not prime.
        if (n % i == 0) return false;
    }
    // n has no integer factor in the range (1, n), and thus is prime.
    return true;
}    


TEST_P(IsPrimeParamTest, testFunc1)
{
    int n =  GetParam();
    EXPECT_TRUE(IsPrime(n));
}

INSTANTIATE_TEST_CASE_P(TrueReturn, IsPrimeParamTest, testing::Values(3, 5, 11, 23, 17));
    
}//namespace android    