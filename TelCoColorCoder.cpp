#include "TelCoColorCoder.h"

const char* TelCoColorCoder::MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
int numberOfMajorColors =
        sizeof(TelCoColorCoder::MajorColorNames) / sizeof(TelCoColorCoder::MajorColorNames[0]);
const char* TelCoColorCoder::MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

int numberOfMinorColors =
        sizeof(TelCoColorCoder::MinorColorNames) / sizeof(TelCoColorCoder::MinorColorNames[0]);

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
                       std::cout << TelCoColorCoder::MajorColorNames[major_color] <<" " << TelCoColorCoder::MinorColorNames[minor_color] << " " << color_index << std::endl;
                       color_index ++;
               }
        }
}

