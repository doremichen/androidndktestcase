/**
* This is test case
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

class SampelCodeTest : public testing::Test {
protected:
    virtual void SetUp() { }
    virtual void TearDown() { }
};

void Foo()
{
             
}

int Foo(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    int c = a % b;
    if (c == 0)
        return b;
    return Foo(b, c);                
}

bool MutuallyPrime(int m, int n)
{
    return Foo(m , n) > 1;
}


TEST_F(SampelCodeTest, testFunc1) 
{    
    ASSERT_NO_FATAL_FAILURE(Foo());    
}

TEST_F(SampelCodeTest, testFunc2) 
{    
    EXPECT_EQ(2, Foo(4, 10)) << "not equals...";   //assign output fail information
    EXPECT_EQ(6, Foo(30, 18));    
}

TEST_F(SampelCodeTest, testFunc3)
{
    int m = 5, n = 10;
    EXPECT_PRED2(MutuallyPrime, m, n);   
}     

}//namespace android
