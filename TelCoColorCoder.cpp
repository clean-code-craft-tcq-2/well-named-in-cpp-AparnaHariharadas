#include "TelCoColorCoder.h"

TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
       TelCoColorCoder::MinorColor minorColor =
            (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }

int TelCoColorCoder::PrintColorCodeManual(){
        int initial_index_major = 0;
        int intial_index_minor = 0;
        int colour_index= 0 ;
        for (major_colour = initial_index_major;major_color<TelCoColorCoder::numberOfMajorColors;major_color++){
               for (minor_colour = initial_index_minor;major_color<TelCoColorCoder::numberOfMinorColors;minor_color++){
                       cout<< TelCoColorCoder::MajorColor " + " TelCoColorCoder::MinorColor " = " colour_index<<endl;
                       color_index ++;
               }
        }


void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
void test_colorcodeManual()
{
    std::cout << "Colour 1 " << "colour 2" << "Value"<< std::endl;
    TelCoColorCoder::PrintColorCodeManual();
        
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    test_colorcodeManual();

    return 0;
}


