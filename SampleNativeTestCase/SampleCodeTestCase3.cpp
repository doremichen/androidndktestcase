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

void deathFoo()
{
    int *pInt = 0;
    *pInt = 42;   //dangeraous  
}        
    
TEST(FooDeathTest, testFunc1)
{
    EXPECT_DEATH(deathFoo(), "");   
    
}    
    
    
}//namespace android    