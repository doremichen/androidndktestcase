/*
* 
*/

#include "gtest/gtest.h"

// See (GTEST_SRC_DIR)/include/gtest/gtest.h and (GTEST_SRC_DIR)/src/gtest_main.cc

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
