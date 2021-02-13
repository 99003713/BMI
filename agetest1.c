#include "unity.h"
#include "age.h"
#include "test_division.h"

void test_division_basicsa(void)
{
	TEST_ASSERT_EQUAL( 22 Years And 5 Months, subtraction(2020-(5+1),subtraction(12, 7));
}

int test_division(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run the Test functions */
	RUN_TEST(test_division_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
