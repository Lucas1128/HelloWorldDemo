

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

        addAndMakeVisible(numberLabel);
        addAndMakeVisible(numberLabel2);
        addAndMakeVisible(numberLabel3);
        addAndMakeVisible(numberLabel4);
        addAndMakeVisible(numberLabel5);
        addAndMakeVisible(numberLabel6);
        addAndMakeVisible(numberLabel7);
        addAndMakeVisible(numberLabel8);
        addAndMakeVisible(numberLabel9);

        addAndMakeVisible(OrangeText);

        numberLabel.setText ("1", dontSendNotification);
        numberLabel2.setText ("2", dontSendNotification);
        numberLabel3.setText ("3", dontSendNotification);
        numberLabel4.setText ("4", dontSendNotification);
        numberLabel5.setText ("5", dontSendNotification);
        numberLabel6.setText ("6", dontSendNotification);
        numberLabel7.setText ("7", dontSendNotification);
        numberLabel8.setText ("8", dontSendNotification);
        numberLabel9.setText ("9", dontSendNotification);
       
        OrangeText.setText("Make Me Orange!", dontSendNotification);

        /*
        for (int i = 0; i < 9; ++i)
        {
            auto newLabel = new Label({}, "NumberLabel" + String(i));
            addAndMakeVisible(newLabel);
            newLabel->setText(String(i), dontSendNotification);
        }
        */

        addAndMakeVisible(colorButton);

        colorButton.onClick = [this]
        {
            OrangeText.setColour(Label::textColourId, Colours::orange);
        };

        setSize(600, 300);
    }

    //==============================================================================

    void resized() override
    {
        int numbercount = 9;
        numberLabel.setBounds((getWidth() * 1 / (numbercount + 2)), 25, 50, 50);
        numberLabel2.setBounds((getWidth() * 2 / (numbercount + 2)), 25, 50, 50);
        numberLabel3.setBounds((getWidth() * 3 / (numbercount + 2)), 25, 50, 50);
        numberLabel4.setBounds((getWidth() * 4 / (numbercount + 2)), 25, 50, 50);
        numberLabel5.setBounds((getWidth() * 5 / (numbercount + 2)), 25, 50, 50);
        numberLabel6.setBounds((getWidth() * 6 / (numbercount + 2)), 25, 50, 50);
        numberLabel7.setBounds((getWidth() * 7 / (numbercount + 2)), 25, 50, 50);
        numberLabel8.setBounds((getWidth() * 8 / (numbercount + 2)), 25, 50, 50);
        numberLabel9.setBounds((getWidth() * 9 / (numbercount + 2)), 25, 50, 50);

        OrangeText.setBounds(getWidth() - 300, getHeight() - 60, 120, 32);

        colorButton.setBounds(getWidth() - 176, getHeight() - 60, 120, 32);

        
        /*
        for (int i = 0; i < 9; ++i)
        {
            auto newLabel = new Label({}, "NumberLabel" + String(i));
            newLabel.setBounds(50, (50 * i), 50, 50);
        }
        */
    }
private:
    //==============================================================================
    TextButton colorButton{ TRANS("Click Here") };

    Label numberLabel;
    Label numberLabel2;
    Label numberLabel3;
    Label numberLabel4;
    Label numberLabel5;
    Label numberLabel6;
    Label numberLabel7;
    Label numberLabel8;
    Label numberLabel9;

    Label OrangeText;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HelloWorldDemo)
};

