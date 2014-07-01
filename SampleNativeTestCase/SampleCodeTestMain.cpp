/*
* 
*/

#include "gtest/gtest.h"

// See (GTEST_SRC_DIR)/include/gtest/gtest.h and (GTEST_SRC_DIR)/src/gtest_main.cc

int main(int argc, char **argv) {
  
  //testing::GTEST_FLAG(repeat) = 1;      //Config test times
  //testing::GTEST_FLAG(color) = "yes";     //config color output
  //testing::GTEST_FLAG(output) = "xml:";   //output to xml file  
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
