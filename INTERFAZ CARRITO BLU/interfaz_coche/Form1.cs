using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace interfaz_coche
{
    public partial class Form1 : Form
    {
        System.IO.Ports.SerialPort Arduino;
        public Form1()
        {
            InitializeComponent();
            Arduino=new System.IO.Ports.SerialPort();
            Arduino.PortName = "COM9";
            Arduino.BaudRate = 9600;
            Arduino.Open();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Arduino.Write("E");
            Arduino.Write("A");
            textBox1.Text = ">>Acelerando";

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (Arduino.IsOpen)
            {
                Arduino.Close();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Arduino.Write("F");
            Arduino.Write("B");
            textBox1.Text = ">>Retroceder";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Arduino.Write("S");
            textBox1.Text = ">>Parar";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Arduino.Write("L");
            textBox1.Text = ">>>vuelta a la derecha";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Arduino.Write("R");
            textBox1.Text = ">>vuelta a la izquierda";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Arduino.Write("W");
            textBox1.Text = ">>Izquierda 90 grados";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Arduino.Write("Q");
            textBox1.Text = ">>Derecha 90 grados";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Arduino.Write("V");
            textBox1.Text = ">>Acelerar";
        }
        private void button9_Click(object sender, EventArgs e)
        {
            Arduino.Write("D");
            textBox1.Text = ">>DesAcelerar";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            EnableButtons();
            textBox1.Text = ">>Bienvenido";
        }

        private void button10_Click(object sender, EventArgs e)
        { 
            DisableButtons();
            Arduino.Write("S");
            textBox1.Text = ">>Apagado";
        }
        private void DisableButtons()
        {
            button1.Enabled = false;
            button2.Enabled = false;
            button3.Enabled = false;
            button4.Enabled = false;
            button5.Enabled = false;
            button6.Enabled = false;
            button7.Enabled = false;
            button8.Enabled = false;
            button9.Enabled = false;
        }
        private void EnableButtons()
        {
            button1.Enabled = true;
            button2.Enabled = true;
            button3.Enabled = true;
            button4.Enabled = true;
            button5.Enabled = true;
            button6.Enabled = true;
            button7.Enabled = true;
            button8.Enabled = true;
            button9.Enabled = true;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
