#include "custom-lib.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace custom_lib {
    namespace {
        TEST(CustomLib, Case1) {
        EXPECT_EQ(solution(), 1);
    }

}  // namespace
}  // namespace shape
