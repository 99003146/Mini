#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_multiply(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


 
  CU_add_test(suite,"multiply",test_multiply);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */


void test_multiply(void)
{
    ASSERT_DOUBLE_EQUAL(8.420, multiply(4.21,2));

}