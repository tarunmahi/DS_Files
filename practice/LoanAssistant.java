import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.text.DecimalFormat;
public class LoanAssistant extends JFrame
{
    boolean computePayment;
    public static void main(String args[])
    {
        
        
        new LoanAssistant().show();
    } 
        public LoanAssistant() {
        setTitle("Loan Assistant");
        setResizable(true);
        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent evt)
            {
                exitForm(evt);
            }
        });
        getContentPane().setLayout(new GridBagLayout());
        JLabel balanceLabel = new JLabel();
        JLabel interestLabel = new JLabel();
        JTextField balanceTextField = new JTextField();
        JLabel monthsLabel = new JLabel();
        JTextField interestTextField = new JTextField();
        JTextField monthsTextField = new JTextField();
        JLabel paymentLabel = new JLabel();
        JTextField paymentTextField = new JTextField();
        JButton computeButton = new JButton();
        JButton newLoanButton = new JButton();
        JLabel analysisLabel = new JLabel();
        JTextArea analysisTextArea = new JTextArea();
        JButton exitButton = new JButton();
        JButton monthsButton = new JButton();
        JButton paymentButton = new JButton();
        Color lightYellow = new Color(255, 255, 128);
        
        Font myFont = new Font("Arial", Font.PLAIN, 16);
    
        //1st constraint
        GridBagConstraints gridConstraints1 = new GridBagConstraints();
        gridConstraints1.gridx = 0;
        gridConstraints1.gridy = 0;
        balanceLabel.setText("Loan Balance");
        balanceLabel.setFont(myFont);
        gridConstraints1.anchor = gridConstraints1.WEST;    
        gridConstraints1.insets = new Insets(10, 10, 0, 0);
        getContentPane().add(balanceLabel, gridConstraints1);
        balanceTextField.setPreferredSize(new Dimension(100, 25));
        balanceTextField.setHorizontalAlignment(SwingConstants.RIGHT);
        balanceTextField.setFont(myFont);
        //2nd constraint
        GridBagConstraints gridConstraints2 = new GridBagConstraints();
        gridConstraints2.gridx = 1;
        gridConstraints2.gridy = 0;
        gridConstraints2.insets = new Insets(10, 10, 0, 10);
        getContentPane().add(balanceTextField, gridConstraints2);
        interestLabel.setText("Interest Rate");
        interestLabel.setFont(myFont);
        gridConstraints2 = new GridBagConstraints();
        gridConstraints2.gridx = 0;
        gridConstraints2.gridy = 1;
        gridConstraints2.anchor = GridBagConstraints.WEST;
        gridConstraints2.insets = new Insets(10, 10, 0, 0);
        getContentPane().add(interestLabel, gridConstraints2);
        interestTextField.setPreferredSize(new Dimension(100, 25));
        interestTextField.setHorizontalAlignment(SwingConstants.RIGHT);
        interestTextField.setFont(myFont);
        gridConstraints2 = new GridBagConstraints();
        gridConstraints2.gridx = 1;
        gridConstraints2.gridy = 1;
        gridConstraints2.insets = new Insets(10, 10, 0, 10);
        getContentPane().add(interestTextField, gridConstraints2);
    
        //3rd constraint
        GridBagConstraints gridConstraints3 = new GridBagConstraints();
        gridConstraints3.gridx = 0;
        gridConstraints3.gridy = 2;
        gridConstraints3.anchor = GridBagConstraints.WEST;
        gridConstraints3.insets = new Insets(10, 10, 0, 0);
        monthsLabel.setText("Number of Payments");
        monthsLabel.setFont(myFont);
        getContentPane().add(monthsLabel, gridConstraints3);
       
        //4th constraint
        GridBagConstraints g3 = new GridBagConstraints();
        monthsTextField.setPreferredSize(new Dimension(100, 25));
        monthsTextField.setHorizontalAlignment(SwingConstants.RIGHT);
        monthsTextField.setFont(myFont);
        g3.gridx = 1;
        g3.gridy = 1;
        g3.insets = new Insets(10, 10, 0, 10);
        getContentPane().add(interestTextField, g3);
        //4th constraint
        GridBagConstraints gridConstraints4 = new GridBagConstraints();
        gridConstraints4.gridx = 1;
        gridConstraints4.gridy = 2;
        gridConstraints4.insets = new Insets(10, 10, 0, 10);
        getContentPane().add(monthsTextField, gridConstraints4);
        paymentLabel.setText("Monthly Payment");
        paymentLabel.setFont(myFont);
        gridConstraints4 = new GridBagConstraints();
        gridConstraints4.gridx = 0;
        gridConstraints4.gridy = 3;
        gridConstraints4.anchor = GridBagConstraints.WEST;
        gridConstraints4.insets = new Insets(10, 10, 0, 0);
        getContentPane().add(paymentLabel, gridConstraints4);
        paymentTextField.setPreferredSize(new Dimension(100, 25));
        paymentTextField.setHorizontalAlignment(SwingConstants.RIGHT);
        paymentTextField.setFont(myFont);
        gridConstraints4.gridx = 1;
        gridConstraints4.gridy = 3;
        gridConstraints4.insets = new Insets(10, 10, 0, 10);
        getContentPane().add(paymentTextField, gridConstraints4);
        computeButton.setText("Compute Monthly Payment");
        monthsButton.setText("X");
        GridBagConstraints gridConstraints = new GridBagConstraints();
        gridConstraints.gridx = 2;
        gridConstraints.gridy = 2;
        gridConstraints.insets = new Insets(10, 0, 0, 0);
        getContentPane().add(monthsButton, gridConstraints);
        monthsButton.addActionListener(new ActionListener()
        {
        public void actionPerformed(ActionEvent e)
        {
        monthsButtonActionPerformed(e);
        }

        private void monthsButtonActionPerformed(ActionEvent e) {
            computePayment = false;
            paymentButton.setVisible(true);
            monthsTextField.setText("");
            monthsButton.setVisible(false);
            monthsTextField.setEditable(false);
            monthsTextField.setEditable(false);
            paymentTextField.setEditable(true);
            monthsTextField.setBackground(lightYellow);
            paymentTextField.setFocusable(true);
            paymentTextField.setBackground(Color.WHITE);
            balanceTextField.requestFocus();
            computeButton.setText("Compute Number of Payments");
        }
        
    }); 
    paymentButton.setFocusable(false);
    paymentButton.setText("X");
    GridBagConstraints PaymentGrid = new GridBagConstraints();
    monthsButton.setFocusable(false);
    PaymentGrid.gridy = 3;
    PaymentGrid.gridx = 2;
    getContentPane().add(paymentButton, PaymentGrid);
    PaymentGrid.insets = new Insets(10, 0, 0, 0);
      paymentButton.addActionListener(new ActionListener()
      {
          public void actionPerformed(ActionEvent e)
          {
              paymentButtonActionPerformed(e);
            }

            private void paymentButtonActionPerformed(ActionEvent e) {
               computePayment = true;
                paymentButton.setVisible(false);
                monthsButton.setVisible(true);
                monthsTextField.setEditable(true);
                monthsTextField.setBackground(Color.WHITE);
                monthsTextField.setFocusable(true);
                paymentTextField.setText("");
                paymentTextField.setEditable(false);
                paymentTextField.setBackground(lightYellow);
                paymentTextField.setFocusable(false);
                computeButton.setText("Compute Monthly Payment");
                balanceTextField.requestFocus();
}

        });
        newLoanButton.setText("New Loan Analysis");
        newLoanButton.setEnabled(false);
        GridBagConstraints LoanGrid = new GridBagConstraints();
        LoanGrid.gridx = 0;
        LoanGrid.gridy = 5;
        LoanGrid.gridwidth = 2;
        LoanGrid.insets = new Insets(10, 0, 10, 0);
        getContentPane().add(newLoanButton, LoanGrid);
        newLoanButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                newLoanButtonActionPerformed(e);
            }

            private void newLoanButtonActionPerformed(ActionEvent e) {
                if (computePayment)
                {
                    paymentTextField.setText("");
                }
                else
                {
                    monthsTextField.setText("");
                              }
                analysisTextArea.setText("");
                computeButton.setEnabled(true);
                newLoanButton.setEnabled(false);
                balanceTextField.requestFocus();
            }
        });

        GridBagConstraints button = new GridBagConstraints();
        button.gridx = 0;
        button.gridy = 4;
        button.gridwidth = 2;
        button.insets = new Insets(10, 0, 0, 0);
        getContentPane().add(computeButton, button);
        analysisLabel.setText("Loan Analysis:");
        analysisLabel.setFont(myFont);
        GridBagConstraints analysisgrid = new GridBagConstraints();
        analysisgrid.gridx = 3;
        analysisgrid.gridy = 0;
        analysisgrid.anchor = GridBagConstraints.WEST;
        analysisgrid.insets = new Insets(0, 10, 0, 0);
        getContentPane().add(analysisLabel,analysisgrid);
        analysisTextArea.setPreferredSize(new Dimension(250, 150));
        analysisTextArea.setBorder(BorderFactory.createLineBorder(Color.BLACK));
        analysisTextArea.setFont(new Font("Courier New", Font.PLAIN, 14));
        analysisTextArea.setEditable(false);
        analysisTextArea.setFocusable(false);
        analysisTextArea.setBackground(Color.WHITE);
        GridBagConstraints analysisTextGrid = new GridBagConstraints();
        analysisTextGrid.gridx = 3;
        analysisTextGrid.gridy = 1;
        analysisTextGrid.gridheight = 4;
        analysisTextGrid.insets = new Insets(0, 10, 0, 10);
        getContentPane().add(analysisTextArea, analysisTextGrid);
        exitButton.setText("Exit");
        exitButton.setFocusable(false);
        GridBagConstraints ExitButtonGrid = new GridBagConstraints();
        ExitButtonGrid.gridx = 3;
        ExitButtonGrid.gridy = 5;
        getContentPane().add(exitButton, ExitButtonGrid);
        exitButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                exitButtonActionPerformed(e);
            }

            private void exitButtonActionPerformed(ActionEvent e) {

            }
});
computeButton.addActionListener(new ActionListener()
{
    public void actionPerformed(ActionEvent e)
    {
        computeButtonActionPerformed(e); 
        {

        }
    }
    private void computeButtonActionPerformed(ActionEvent e) {
        double balance, interest, payment;
        int months;
        double monthlyInterest, multiplier;
        double loanBalance, finalPayment;
        if (validateDecimalNumber(balanceTextField))
        {
            balance =Double.valueOf(balanceTextField.getText()).doubleValue();
        }
        else
        {
                JOptionPane.showConfirmDialog(null, "Invalid or empty Loan Balance entry.\nPlease correct.", "Balance Input Error", JOptionPane.DEFAULT_OPTION,
                JOptionPane.INFORMATION_MESSAGE);
                return;
            }
            if (validateDecimalNumber(interestTextField))
            {
                interest =Double.valueOf(interestTextField.getText()).doubleValue();
            }
            else
            {
                JOptionPane.showConfirmDialog(null, "Invalid or empty Interest Rate entry.\nPlease correct.", "Interest Input Error", JOptionPane.DEFAULT_OPTION,
                JOptionPane.INFORMATION_MESSAGE);
                return;
            }
            monthlyInterest = interest / 1200;
            if(computePayment)
            {
                // Compute loan payment
                if (validateDecimalNumber(monthsTextField))
                {
                    months =Integer.valueOf(monthsTextField.getText()).intValue();
                }
                else
                {
                    JOptionPane.showConfirmDialog(null, "Invalid or empty Number of Payments entry.\nPlease correct.", "Number of Payments Input Error",
                    JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE);
                    return;
                }
                if (interest == 0)
                {
                    payment = balance / months;
                }
                else
                {
                    multiplier = Math.pow(1 + monthlyInterest, months);
                    payment = balance * monthlyInterest * multiplier / (multiplier - 1);
                }
                paymentTextField.setText(new DecimalFormat("0.00").format(payment));
            }
            else
            {
                if (validateDecimalNumber(paymentTextField))
                {
                    // Compute number of payments
                    payment =Double.valueOf(paymentTextField.getText()).doubleValue();
                    if (payment <= (balance * monthlyInterest + 1.0))
                    {
                        if (JOptionPane.showConfirmDialog(null, "Minimum payment must be $" +
                        new DecimalFormat("0.00").format((int)(balance * monthlyInterest + 1.0)) + "\n" + "Do you want to use the minimum payment?", "Input Error", JOptionPane.YES_NO_OPTION,
                        JOptionPane.QUESTION_MESSAGE) == JOptionPane.YES_OPTION)
                        {
                            paymentTextField.setText(new DecimalFormat("0.00").format((int)
                            (balance * monthlyInterest + 1.0)));
                            payment =Double.valueOf(paymentTextField.getText()).doubleValue();
                        }
                        else
                        {
                            paymentTextField.requestFocus();
                            return;
                        }
                    }
                }
                else
                {
                    JOptionPane.showConfirmDialog(null, "Invalid or empty Monthly Payment entry.\nPlease correct.", "Payment Input Error", JOptionPane.DEFAULT_OPTION,
                    JOptionPane.INFORMATION_MESSAGE);
                    return;
                }
                if (interest == 0)
                {
                    months = (int)(balance / payment);
                }
                else
                {
                    months = (int)((Math.log(payment) - Math.log(payment - balance * monthlyInterest))/ Math.log(1 + monthlyInterest));
                }
                monthsTextField.setText(String.valueOf(months));
            }

            // reset payment prior to analysis to fix at two decimals
            payment =Double.valueOf(paymentTextField.getText()).doubleValue();
            // show analysis
            analysisTextArea.setText("Loan Balance: $" + new
            DecimalFormat("0.00").format(balance));
            analysisTextArea.append("\n" + "Interest Rate: " + new
            DecimalFormat("0.00").format(interest) + "%");
            // process all but last payment
            loanBalance = balance;
            for (int paymentNumber = 1; paymentNumber <= months - 1; paymentNumber++)
            {
                loanBalance += loanBalance * monthlyInterest - payment;
            }
            // find final payment
            finalPayment = loanBalance;
            if (finalPayment > payment)
            {
                // apply one more payment
                loanBalance += loanBalance * monthlyInterest - payment;
                finalPayment = loanBalance;
                months++;
                monthsTextField.setText(String.valueOf(months));
            }
            analysisTextArea.append("\n\n" + String.valueOf(months - 1) + " Payments of $" + new
            DecimalFormat("0.00").format(payment));
            analysisTextArea.append("\n" + "Final Payment of: $" + new
            DecimalFormat("0.00").format(finalPayment));
            analysisTextArea.append("\n" + "Total Payments: $" + new
            DecimalFormat("0.00").format((months - 1) * payment + finalPayment));
            analysisTextArea.append("\n" + "Interest Paid $" + new
            DecimalFormat("0.00").format((months - 1) * payment + finalPayment - balance));
            computeButton.setEnabled(false);
            newLoanButton.setEnabled(true);
            newLoanButton.requestFocus();
        }

private boolean validateDecimalNumber(JTextField tf) {
    String s = tf.getText().trim();
    boolean hasDecimal = false;
    boolean valid = true;
    if (s.length() == 0)
    {
        valid = false;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            char c = s.charAt(i);
            if (c >= '0' && c <= '9')
            {
                continue;
            }
            else if (c == '.' && !hasDecimal)
            {
                hasDecimal = true;
            }
            else
            {
                // invalid character found
                valid = false;
            }
        }
        }
        tf.setText(s);
        if (!valid)
        {
            tf.requestFocus();
        }
        return (valid);
    }
});
        pack();
        Dimension screenSize =
        Toolkit.getDefaultToolkit().getScreenSize();
        setBounds((int) (0.5 * (screenSize.width - getWidth())), (int) (0.5 * (screenSize.height- getHeight())), getWidth(), getHeight());
    }

    private void exitForm(WindowEvent evt)
    {
        System.exit(0);
    }
}