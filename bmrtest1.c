#include "unity.h"
#include "bmr.h"
#include "test_division.h"

void test_division_basics(void)
{
	TEST_ASSERT_EQUAL( 17361, addition(80, 150), subtraction(23));
}

int test_division(void)
{
	/* Initiate Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_division_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
