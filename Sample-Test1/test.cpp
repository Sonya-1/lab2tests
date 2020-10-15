#include "pch.h"
#include "../lab2tests/lab2tests.c"

TEST(strlenTest, nullTest) {
	char str[256] = "\0";
	EXPECT_EQ(strlen(str, 0), 0);
}

TEST(strlenTest, strTest) {
	char str[101] = "Hello\0";
	EXPECT_EQ(strlen(str, 5), 5);
}

TEST(strcompTest, diffTest) {
	char str[101] = "Hey\0", sub[101] = "Bye\0";
	EXPECT_EQ(strcomp(str, sub, 3), 0);
}

TEST(strcompTest, sameTest) {
	char str[101] = "123\0", sub[101] = "123\0";
	EXPECT_EQ(strcomp(str, sub, 3), 1);
}

TEST(strstrTest, diffTest) {
	char str[101] = "Hey\0", sub[101] = "Bye\0";
	EXPECT_EQ(strstr(str, sub, 3, 3), -1);
}

TEST(strstrTest, sameTest) {
	char str[256] = "Rain-rain go away\0", sub[256] = "go\0";
	EXPECT_EQ(strstr(str, sub, 17, 2), 10);
}

TEST(strstrTest, null2Test) {
	char str[256] = "Rain-rain go away\0", sub[256] = "\0";
	EXPECT_EQ(strstr(str, sub, 17, 0), 0);
}

TEST(strstrTest, null1Test) {
	char str[256] = "\0", sub[256] = "rainbow\0";
	EXPECT_EQ(strstr(str, sub, 0, 7), -1);
}