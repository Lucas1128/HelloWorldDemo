/*
  ==============================================================================

    numberComponent.cpp
    Created: 10 Jul 2022 5:06:14pm
    Author:  lucas

  ==============================================================================
*/
#include <JuceHeader.h>
#include "numberComponent.h"

numberComponent::numberComponent()
{
    for (int i = 0; i < 9; i++)
    {
        ButtonVector.push_back(std::make_unique<TextButton>(String(i + 1)));
        ButtonVector.back()->addListener(this);
        addAndMakeVisible(ButtonVector.back().get());
    };
}

void numberComponent::paint (Graphics& g) 
{

}

void numberComponent::resized ()
{
    for (int i = 0; i < 9; ++i)
    {
        ButtonVector[i]->setBounds((getWidth() * (i + 1) / (9 + 2)), 50, getWidth() / 11, getHeight() / 6);
    }
}

void numberComponent::buttonClicked (Button* button)
{
    for (int i = 0; i < 9; ++i)
    {
        if (ButtonVector[i].get() == button)
        {
            OrangeText->setColour(Label::textColourId, Colours[i]);
        }
    }
}

void numberComponent::setLabel (Label* newLabel)
{
    OrangeText = newLabel;
}