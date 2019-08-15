/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioProcessing.hpp"
//==============================================================================
int main (int argc, char* argv[])
{
    int *a = new int;
    *a = 1;
    ScopedPointer<int> x = new int (2);
    std::unique_ptr<int> y(new int (3));
    
    std::cout << *(x) << '\n';
    
    AudioProcessing processor;
    printf("Press 'q' to quit:\n");
    while (getchar() != 'q')
    {

    }

    return 0;
}
