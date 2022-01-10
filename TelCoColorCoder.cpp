#include <iostream>
#include <assert.h>
#include "TelCoColorCoder.h"

    TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }


