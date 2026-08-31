#include "Square.h"

void Square::paint(juce::Graphics& g)
{

	    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(juce::Colours::black);

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
    g.drawFittedText ("Whats up!", getLocalBounds(), juce::Justification::centred, 1);

}


void Square::resized()

{


}
