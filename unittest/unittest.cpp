
#include <gtest/gtest.h>
#include "codility.h" 

TEST(BinaryGapTest, BinaryGaps) { 
    ASSERT_EQ(5, codility::binaryGap(1041));
     ASSERT_EQ(2, codility::binaryGap(9));
     ASSERT_EQ(4, codility::binaryGap(529));
}

TEST(BinaryGapTest, NoBinaryGaps) { 
    ASSERT_EQ(0, codility::binaryGap(32));
     ASSERT_EQ(0, codility::binaryGap(15));
}

TEST(BinaryGapTest, Largenumber) { 
    ASSERT_EQ(4, codility::binaryGap(1000000));
}

TEST(VectorRotationTest, RotateBy0) {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4,5};
    EXPECT_EQ(expected,codility::rotate(vec,0));
}
TEST(VectorRotationTest, RotateBy1) {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> expected = {5, 1, 2, 3, 4};
    EXPECT_EQ(expected,codility::rotate(vec, 1));
}
TEST(VectorRotationTest, RotateBy2) {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> expected = {4, 5, 1, 2, 3};
    EXPECT_EQ(expected,codility::rotate(vec, 2));
}
TEST(VectorRotationTest, RotateBy3) {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> expected = {3,4, 5, 1, 2};
    EXPECT_EQ(expected,codility::rotate(vec, 3));
}
TEST(VectorRotationTest, RotateBy4) {
    vector<int> vec = {1, 2, 3, 4};
    vector<int> expected = {1, 2, 3,4};
    EXPECT_EQ(expected,codility::rotate(vec, 4));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
