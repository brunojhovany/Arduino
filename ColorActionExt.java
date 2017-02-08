import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class ColorActionExt implements ActionListener
{
    private Color backgroundColor;
    private Component comp;
    
    public ColorActionExt(Color c, Component comp)
    
    {
       this.backgroundColor = c;
       this.comp=comp;
    }

    
    public void actionPerformed(ActionEvent event)
    {
        comp.setBackground(backgroundColor);
    }
}