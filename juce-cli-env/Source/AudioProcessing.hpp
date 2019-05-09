//
//  AudioProcessing.hpp
//  TestConsoleApp - ConsoleApp
//
//  Created by mhamilt7 on 29/10/2018.
//

#ifndef AudioProcessing_hpp
#define AudioProcessing_hpp

#include "../JuceLibraryCode/JuceHeader.h"

class AudioProcessing : public AudioIODeviceCallback
{
public:
    //==============================================================================
    AudioProcessing();
    ~AudioProcessing();
    //==============================================================================
    void audioDeviceIOCallback(const float** inputChannelData,
                               int numInputChannels,
                               float** outputChannelData,
                               int numOutputChannels,
                               int numSamples);
    
    //=============================================================================
    void audioDeviceAboutToStart(AudioIODevice* device);
    //==============================================================================
    void audioDeviceStopped();
    
private:
    //==============================================================================
    AudioDeviceManager deviceManager;
    float oscFreq    = 440;
    float radsPerSec = 0;
    float currRad    = 0;
};




#endif /* AudioProcessing_hpp */
