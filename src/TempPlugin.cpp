#include "TempPlugin.h"

void TempPlugin::addParameters (Parameters& params)
{
    
}

void TempPlugin::prepareToPlay (double sampleRate, int samplesPerBlock)
{

}

void TempPlugin::releaseResources()
{

}

void TempPlugin::processBlock (AudioBuffer<float>& buffer)
{

}

// This creates new instances of the plugin
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new TempPlugin();
}
