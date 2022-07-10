

// To create a class like helloworlddemo, with all of its functions, but with different features.
// 1. Position numbers 1 to 9 at the top of the screen, using different colors.
// 2. Make a textbutton called colorButton, and when you click this button, change the color of a piece of text next to it
//    to orange.

//Paint(g), resized(), constructor
//==============================================================================

class HelloWorldDemo : public Component
{
public:
    //==============================================================================
    HelloWorldDemo()
    { 
        /*
        for (int i = 1; i < 10; ++i)
        {
            labelVector.push_back (std::make_unique<Label> ( "NumberLabel" + String(i)));
            addAndMakeVisible (labelVector.back().get());
            labelVector.back()->setText (String(i + 1), dontSendNotification);
        }*/

        for (int i = 0; i < 9; ++i)
        {
            ButtonVector.push_back(std::make_unique<TextButton>(String(i + 1)));
            addAndMakeVisible(ButtonVector.back().get());
            if (i == 0)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::red);
                };
            }
            else if (i == 1)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::orange);
                };
            }
            else if (i == 2)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::yellow);
                };
            }
            else if (i == 3)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::green);
                };
            }
            else if (i == 4)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::blue);
                };
            }
            else if (i == 5)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::indigo);
                };
            }
            else if (i == 6)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::violet);
                };
            }
            else if (i == 7)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::orange);
                };
            }
            else if (i == 8)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::brown);
                };
            }
            else if (i == 9)
            {
                ButtonVector[i]->onClick = [this]
                {
                    OrangeText.setColour(Label::textColourId, Colours::white);
                };
            }

        }

        OrangeText.setText ("Change My Colour", dontSendNotification);
        //addAndMakeVisible (colorButton);
        addAndMakeVisible (OrangeText);

        /*colorButton.onClick = [this]
        {
            OrangeText.setColour(Label::textColourId, Colours::orange);
        };*/

        setSize(600, 300);
    }

    //==============================================================================

    void resized() override
    {
        OrangeText.setBounds((getWidth() - 100) / 2, getHeight() - 100, 120, 32);

        //colorButton.setBounds(getWidth() - 176, getHeight() - 60, 120, 32);

     
        
        int numbercount = 9;

        for (int i = 0; i < 9; ++i)
        {
            ButtonVector[i]->setBounds ((getWidth() * (i + 1) / (numbercount + 2)), 50, 50, 50);
        }       
        
    }
private:
    //==============================================================================
    //TextButton colorButton{ TRANS("Click Here") };

    std::vector<std::unique_ptr<Label>> labelVector;
    std::vector<std::unique_ptr<TextButton>> ButtonVector;

    Label OrangeText;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HelloWorldDemo)
};

