#include "TestTelCoColorCoder.h"
#include "TelCoColorCoder.cpp"
void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor){
    TelCoColorCoder::ColorPair colorPair =
        GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber){
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
void test_colorcodeManual(){
    std::cout << "Colour 1 " << "Colour 2 " << "Value"<< std::endl;
    PrintColorCodeManual();
}
