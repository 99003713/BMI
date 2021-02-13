#include "unity.h"
#include "bmr.h"
#include "test_division.h"

void test_division_basicse(void)
{
	TEST_ASSERT_EQUAL( 1452, addition(100, 150), subtraction(18));
}

int test_division(void)
{
	/* Initiate Unity Test Framework */
	UNITY_BEGIN();

	/*Run the Test Functions */
	RUN_TEST(test_division_basic);

	/* Close Unity Test Framework */
	return UNITY_END();
}
