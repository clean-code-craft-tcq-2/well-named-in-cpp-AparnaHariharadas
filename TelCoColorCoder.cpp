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

void TelCoColorCoder::PrintColorCodeManual(){
        int initial_index_major,initial_index_minor,color_index = 0;
        int major_color,minor_color;
        std::cout << " Major_colour,  minor_colour, value" << std::endl;
                for (major_color = initial_index_major;major_color<TelCoColorCoder::numberOfMajorColors;major_color++){
                        for (minor_color = initial_index_minor;minor_color<TelCoColorCoder::numberOfMinorColors;minor_color++){
                       
                       std::cout << TelCoColorCoder::MajorColorNames[initial_index_major] << TelCoColorCoder::MinorColorNames[initial_index_minor] << color_index << std::endl;
                       color_index ++;
               }
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
}
        
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    test_colorcodeManual();

    return 0;
}


