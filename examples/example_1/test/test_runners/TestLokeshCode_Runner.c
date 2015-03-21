#include "unity.h"

extern void setUp(void);
extern void tearDown(void);

extern void test_GenerateNumbers0To49(void);

int main(void){
	UnityBegin("test/TestLokeshCode.c");

	RUN_TEST(test_GenerateNumbers0To49, 5);

	UnityEnd();

	return 0;
}
