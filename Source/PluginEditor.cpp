/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
TestPluginAudioProcessorEditor::TestPluginAudioProcessorEditor (TestPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
juce::ignoreUnused (audioProcessor);

addAndMakeVisible (square);

    
    setSize (400, 600);
}

TestPluginAudioProcessorEditor::~TestPluginAudioProcessorEditor()
{
}

//==============================================================================
void TestPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(juce::Colours::black);

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
    g.drawFittedText ("whats up", getLocalBounds(), juce::Justification::centred, 1);
}

void TestPluginAudioProcessorEditor::resized()
{
    square.setBounds(100, 100, 200, 200);
}
