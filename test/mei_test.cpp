/*
 *  libmei: Music Encoding Initiative
 *
 */

#include <gtest/gtest.h>

#include <mei/libmei.h>

// Test that incr() increases the constructor parameter by 1
TEST(MeiTest, TestIncr) {
    mei m = mei(2);
    EXPECT_INT_EQ(3, m.incr());
}


