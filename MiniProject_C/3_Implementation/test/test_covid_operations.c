#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


/* Modify these two lines according to the project */
#include <covid_operations.h>
#define PROJECT_NAME    "Covid"

/* Prototypes for all the test functions */
void test_visits(void);
void test_positive(void);
void test_negative(void);
void test_died(void);
void test_recovered(void);
void test_homequarant(void);
void test_revisitedpos(void);
void test_revisitedneg(void);
void test_hospquarant(void);
void test_compisolation(void);
void test_diffstatepos(void);
void test_diffstateneg(void);
void test_primecon(void);
void test_seccon(void);
void test_infectedrate(void);
void test_deathrate(void);
void test_recoveryrate(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "visit", test_visits);
  CU_add_test(suite, "positive", test_positive);
  CU_add_test(suite, "negative", test_negative);
  CU_add_test(suite, "died", test_died);
  CU_add_test(suite, "recovered", test_recovered);
  CU_add_test(suite, "homequarant", test_homequarant);
  CU_add_test(suite, "revisitedpos", test_revisitedpos);
  CU_add_test(suite, "revisitedneg", test_revisitedneg);
  CU_add_test(suite, "hospquarant", test_hospquarant);
  CU_add_test(suite, "compisolation", test_compisolation);
  CU_add_test(suite, "diffstatepos", test_diffstatepos);
  CU_add_test(suite, "diffstateneg", test_diffstateneg);
  CU_add_test(suite, "primecon", test_primecon);
  CU_add_test(suite, "seccon", test_seccon);
  CU_add_test(suite, "infectedrate", test_infectedrate);
  CU_add_test(suite, "deathrate", test_deathrate);
  CU_add_test(suite, "recoveryrate", test_recoveryrate);


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
void test_visits(void) {
  CU_ASSERT(30 == visits(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == visits(750, 7500));
}

void test_positive(void) {
  CU_ASSERT(3 == positive(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == positive(1000, 900));
}

void test_negative(void) {
  CU_ASSERT(7 == negative(10, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == negative(1000, 900));
}

void test_died(void) {
  CU_ASSERT(27 == died(20, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1025 == died(100, 2500));
}

void test_recovered(void) {
  CU_ASSERT(13 == recovered(16, 3));
  
  /* Dummy fail*/
  CU_ASSERT(106 == recovered(1080, 900));
}

void test_homequarant(void) {
  CU_ASSERT(88 == homequarant(18, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == homequarant(1450, 900));
}

void test_revisitedpos(void) {
  CU_ASSERT(56 == revisitedpos(23, 33));
  
  /* Dummy fail*/
  CU_ASSERT(1999 == revisitedpos(1900, 990));
}

void test_revisitedneg(void) {
  CU_ASSERT(10 == revisitedneg(80, 70));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == revisitedneg(1450, 900));
}

void test_hospquarant(void) {
  CU_ASSERT(100 == hospquarant(80, 20));
  
  /* Dummy fail*/
  CU_ASSERT(166 == hospquarant(1386, 800));
}

void test_compisolation(void) {
  CU_ASSERT(8100 == compisolation(8050, 50));
  
  /* Dummy fail*/
  CU_ASSERT(1458 == compisolation(1550, 800));
}

void test_diffstatepos(void) {
  CU_ASSERT(180 == diffstatepos(80, 100));
  
  /* Dummy fail*/
  CU_ASSERT(2665 == diffstatepos(2650, 200));
}

void test_diffstateneg(void) {
  CU_ASSERT(50 == diffstateneg(150, 100));
  
  /* Dummy fail*/
  CU_ASSERT(2905 == diffstateneg(2900, 200));
}

void test_primecon(void) {
  CU_ASSERT(1600 == primecon(800, 800));
  
  /* Dummy fail*/
  CU_ASSERT(3560 == primecon(1780, 200));
}

void test_seccon(void) {
  CU_ASSERT(980 == seccon(900, 80));
  
  /* Dummy fail*/
  CU_ASSERT(2540 == seccon(2500, 40));
}

void test_infectedrate(void) {
  CU_ASSERT(100 == infectedrate(200, 200));
  
  /* Dummy fail*/
  CU_ASSERT(26 == infectedrate(32, 500));
}

void test_deathrate(void) {
  CU_ASSERT(50 == deathrate(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(32 == deathrate(8, 32));
}

void test_recoveryrate(void) {
  CU_ASSERT(75 == recoveryrate(30, 40));
  
  /* Dummy fail*/
  CU_ASSERT(200 == recoveryrate(400, 100));
}


