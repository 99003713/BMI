#include "unity.h"
#include "bmr.h"
#include "test_division.h"

void test_division_basicse(void)
{
	TEST_ASSERT_EQUAL( 1452, addition(100, 150), subtraction(18));
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
