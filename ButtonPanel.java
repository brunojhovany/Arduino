import java.awt.Color;
import java.awt.event.*;
import javax.swing.*;

class ButtonPanel extends JPanel
{
   
    public ButtonPanel()
    {
       JButton yellowButton = new JButton("Yellow");
       add(yellowButton);
       ColorActionExt yellowAction = new ColorActionExt(Color.YELLOW,this);
       yellowButton.addActionListener(yellowAction);
    }
}