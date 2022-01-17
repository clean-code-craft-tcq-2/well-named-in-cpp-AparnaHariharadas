#include "TelCoColorCoder.h"

const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
       TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

void TelCoColorCoder::PrintColorCodeManual(){
        int color_index = 1;
        int major_color,minor_color;
        for (major_color = 0;major_color<numberOfMajorColors;major_color++){
                for (minor_color = 0;minor_color<numberOfMinorColors;minor_color++){                       
                       std::cout << MajorColorNames[major_color] <<" " << MinorColorNames[minor_color] << " " << color_index << std::endl;
                       color_index ++;
               }
        }
}

/*void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor){
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber){
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
void test_colorcodeManual(){
    std::cout << "Colour 1 " << "Colour 2 " << "Value"<< std::endl;
    TelCoColorCoder::PrintColorCodeManual();
}
        
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    test_colorcodeManual();
    return 0;
}*/


