/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include "pch.h"
#include <gtest/gtest.h>
#include "StringStream.h"

// Basic format of tests: (add your's in individual files for each individual file, Node_test.cpp for Node.cpp)

class ParameterizedStringStreamTests :public ::testing::TestWithParam<std::string> {
protected:
	std::string text;
};

INSTANTIATE_TEST_CASE_P(
	TestName,
	ParameterizedStringStreamTests,
	::testing::Values(
		"abc", "abcdef", "abc       def", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
	));

TEST_P(ParameterizedStringStreamTests, TestName) {
	StringStream* s = new StringStream();
	std::string testable = GetParam();
	char* stringpointer = strdup(testable.c_str());
	int size = testable.length();
	s->addBuffer(stringpointer, size);
	for (int i = 0; i < size; i++) {
		ASSERT_EQ(testable[i], s->nextChar());
	}
}

TEST(StopConditionCheck, TestName) {
	StringStream* s = new StringStream();
	s->setInputEnded(true);
	ASSERT_EQ(true, s->stop());
}