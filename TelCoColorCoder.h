#include <iostream>
#include <assert.h>
using namespace std;

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColourNames[];
    extern const char* MinorColourNames[];
    extern int numberOfMinorColors;
    extern int TelCoColorCoder::numberOfMajorColors;
    MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
