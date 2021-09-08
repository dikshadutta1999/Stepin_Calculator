#include "unity.h"
#include "calc.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_div()
{
  TEST_ASSERT_EQUAL(1, divis(10, 10));
  
}
void test_m()
{
  TEST_ASSERT_EQUAL(100, mul(10, 10));
  
}
void test_sumation()
{
  TEST_ASSERT_EQUAL(20, sum(10, 10));
  TEST_ASSERT_EQUAL(10, sum(10, 0));
}
void test_subtraction()
{
  TEST_ASSERT_EQUAL(0, sub(10, 10));
  TEST_ASSERT_EQUAL(10, sub(10, 0));
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);
  RUN_TEST(test_m);
  RUN_TEST(test_sumation);
  RUN_TEST(test_subtraction);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}