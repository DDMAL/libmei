#include <gtest/gtest.h>
#include <mei/ax_layout.h>
#include <mei/exceptions.h>

#include <string>
#include <vector>

using std::string;
using std::vector;

/* testing constructors */
TEST(LayoutTest, NewLayoutTest) {
    Layout l = Layout();
    ASSERT_TRUE(true); // test passed
}

TEST(LayoutTest, NewSystemTest) {
    System s = System();
    ASSERT_TRUE(true); // test passed
}

TEST(LayoutTest, NewPageTest) {
    Page p = Page();
    ASSERT_TRUE(true); // test passed
}