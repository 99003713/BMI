#include "unity.h"
#include "bmi1.h"
#include "test_division.h"

void test_division_basic(void)
{
    TEST_ASSERT_EQUAL(4, division(40, 3));
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