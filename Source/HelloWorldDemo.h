#include "numberComponent.h"
//#include "sliderComponent.h"

//==============================================================================

class HelloWorldDemo : public Component
{
public:
    //==============================================================================
    HelloWorldDemo()
    { 

        OrangeText.setText ("Change My Colour", dontSendNotification);
        //addAndMakeVisible (colorButton);
        addAndMakeVisible (OrangeText);
        addAndMakeVisible (nc);

        /*colorButton.onClick = [this]
        {
            OrangeText.setColour(Label::textColourId, Colours::orange);
        };*/

        nc.setLabel(&OrangeText);

        setSize(600, 300);

        slider1.setSliderStyle(juce::Slider::SliderStyle::LinearHorizontal);
        slider1.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 25);
        slider1.setRange(1, 9, 1);
        addAndMakeVisible(slider1);

        //slider1.addListener(this);
    }

    //==============================================================================

    void resized() override
    {
        OrangeText.setBounds((getWidth() - 100) / 2, getHeight() - 100, 120, 32);

        //colorButton.setBounds(getWidth() - 176, getHeight() - 60, 120, 32);
        nc.setBounds(0, 0, getWidth(), getHeight());

        int sliderWidth = getWidth() * 0.7;
        slider1.setBounds((getWidth() * 0.15), getHeight() / 2, sliderWidth, 100);
     
        
        int numbercount = 9;
        
    }

    numberComponent nc;
    Label OrangeText;

    /*
    void sliderValueChanged(Slider slider1) override
    {
        int i = slider1.getValue();
        OrangeText.setColour(juce::Label::textColourId, juce::Colours::red);
    }
    */

private:
    //==============================================================================
    //TextButton colorButton{ TRANS("Click Here") };

    std::vector<std::unique_ptr<Label>> labelVector;

    juce::Slider slider1;

    

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HelloWorldDemo)
};

