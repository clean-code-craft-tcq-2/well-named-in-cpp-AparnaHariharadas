#include <iostream>
#include <assert.h>
#include "TelCoColorCoder.h"

using namespace std;

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);

void test_colorcodeManual();
