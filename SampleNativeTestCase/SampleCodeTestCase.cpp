/*
* 
*/

#include "gtest/gtest.h"
#include <stdio.h>

namespace android {

class SampelCodeTest : public testing::Test {
protected:
    virtual void SetUp() { }
    virtual void TearDown() { }
};

TEST_F(SampelCodeTest, testFunc1) {
    
    printf("[%s] enter\n", __FUNCTION__);
    
}

}//namespace android
