#include "TelCoColorCoder.h"

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
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
        TelCoColorCoder::MajorColor majorColor = 
            (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }

    int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }


