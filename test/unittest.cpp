#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../roster.hpp"
#include "gtest_ext.h"

using ::testing::HasSubstr;

TEST(Roster, constructor) {
  Roster roster;
  ASSERT_EQ(roster.getCount(), 0) << "### ERROR calling constructor, the number of elements should be  \'0\' ###";
}

TEST(Roster, addNameNoMax) {
  Roster roster;
  for(int i = 0; i < 200; i++){
    roster.addName("John");
  }
  ASSERT_EQ(roster.getName(199), "John") << "### ERROR calling addName, with name the name John 200 times the name at element 199 should be \'John\' ###";
}

TEST(Roster, addNameCheckSort) {
  Roster roster;
  roster.addName("Bill");
  roster.addName("Cindy");
  roster.addName("Albert");
  ASSERT_EQ(roster.getName(2), "Cindy") << "### ERROR calling addName, with names Bill, Cindy, and Albert added and sorted the name at element 2 should be \'Cindy\' ###";
}

TEST(Roster, getNameBeyondCount) {
  Roster roster;
  ASSERT_EQ(roster.getName(20), "") << "### ERROR calling getName, with the element number much larger than the array size should be \'\' ###";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
    return RUN_ALL_TESTS();
}
