#include <gtest/gtest.h>
#include <mei/solesmes.h>
#include <mei/exceptions.h>

#include <string>
#include <vector>

using std::string;
using std::vector;

/* testing constructors */
TEST(SolesmesTest, NewNeumeTest) {
    Neume n = Neume();
    ASSERT_TRUE(true); // test passed
}

TEST(SolesmesTest, NewDivisionTest) {
    Division d = Division();
    ASSERT_TRUE(true); // test passed
}

TEST(SolesmesTest, NewEpisemaTest) {
    Episema e = Episema();
    ASSERT_TRUE(true); // test passed
}