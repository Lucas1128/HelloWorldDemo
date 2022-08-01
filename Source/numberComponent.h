/*
  ==============================================================================

    numberComponent.h
    Created: 10 Jul 2022 5:06:14pm
    Author:  lucas

  ==============================================================================
*/

#pragma once

class numberComponent : public Component, public Button::Listener
{
public: 
    numberComponent();
    void resized () override;
    void paint (Graphics& g) override;
    void buttonClicked(Button* button) override;
    void setLabel(Label* newLabel);
    std::vector<std::unique_ptr<TextButton>> ButtonVector;
    std::vector<Colour> Colours{Colours::red, Colours::orange, Colours::yellow, Colours::green, Colours::blue, Colours::indigo, Colours::violet, Colours::brown, Colours::white};
    Label* OrangeText;
};