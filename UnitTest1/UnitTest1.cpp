#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 5.5/PR 5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(AckermannFunctionTest) {
public:

    TEST_METHOD(A_2_3_Returns_9) {
        int result = A(2, 3);
        Assert::AreEqual(9, result);
    }
};
