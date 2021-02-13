#include "unity.h"
#include "height.h"
#include "test_division.h"

void test_division_basic3(void)
{
    TEST_ASSERT_EQUAL(80, multiplication(30));
}

int test_division(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_division_basic);

    /* Close the Unity Test Framework */
    return UNITY_END();
}