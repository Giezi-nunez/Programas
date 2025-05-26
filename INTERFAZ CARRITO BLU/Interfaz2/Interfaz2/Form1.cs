using System.IO.Ports;

namespace Interfaz2
{
    public partial class Form1 : Form
    {
        SerialPort ArduinoSerial;
        public Form1()
        {
            InitializeComponent();
            ArduinoSerial = new SerialPort();
            ArduinoSerial.PortName = "COM5";
            ArduinoSerial.BaudRate = 9600;
            ArduinoSerial.Close();

            //codigo para accionar los botones
            this.KeyPreview = true;
            this.KeyDown += new KeyEventHandler(Direccion_KeyDown);
            this.KeyUp += new KeyEventHandler(Direccion_KeyUp);
            AcelerarA.MouseDown += acelerarA_MouseDown;
            AcelerarA.MouseUp += acelerarA_MouseUp;
        }

        // Manejador de eventos para el acelerador
        /*private void Acelerador_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.W)
            {
                // Simula el clic del botón 1
                button1.PerformClick();
            }
        }*/

        // Manejador de eventos para la dirección
        private void Direccion_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.W)
            {
                button1.PerformClick();
            }
            else if (e.KeyCode == Keys.A)
            {
                // Simula el clic del botón 4
                button4.PerformClick();
            }
            else if (e.KeyCode == Keys.D)
            {
                // Simula el clic del botón 3
                button3.PerformClick();
            }
            else if (e.KeyCode == Keys.S)
            {
                button2.PerformClick();
            }
            else if (e.KeyCode == Keys.X)
            {
                button5.PerformClick();
            }
            else if (e.KeyCode == Keys.C)
            {
                Der_R.PerformClick();
            }
            else if (e.KeyCode == Keys.Z)
            {
                Izq_R.PerformClick();
            }
            else if (e.KeyCode == Keys.E)
            {
                Der_A.PerformClick();
            }
            else if (e.KeyCode == Keys.Q)
            {
                Izq_A.PerformClick();
            }
            else if(e.KeyCode == Keys.R)
            {
                button1.PerformClick();
            }
        }

        private void Direccion_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.W)
            {
                // Detener cuando se suelte la tecla W
                button5.PerformClick();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("1");
                textBox1.Text = ">>Acelerando";
                //button1.BackColor = Color.Red;
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void acelerarA_MouseDown(object sender, MouseEventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("U");
                textBox1.Text = ">>Acelerando<<";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        // Evento que se dispara cuando se suelta el botón
        private void acelerarA_MouseUp(object sender, MouseEventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("S");
                textBox1.Text = ">>PARANDO!!!<<";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        // Botón de Reversa
        private void button2_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("D");
                textBox1.Text = ">>Reversa";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {

        }

        // Encender Auto
        private void button6_Click(object sender, EventArgs e)
        {
            if (!ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Open();
                textBox1.Text = ">> Auto encendido";
            }
        }

        // Apagar Auto
        private void button8_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("S");
                ArduinoSerial.Close();
                textBox1.Text = ">> Auto apagado";
            }
        }

        // Botón de Stop
        private void button5_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("S");
                textBox1.Text = ">>STOP";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        // Botón de Dirección Izquierdaa
        private void button4_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("L");
                textBox1.Text = ">>Direccion 90° Izquierda";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }

        }

        // Botón de Dirección Derecha
        private void button3_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("R");
                textBox1.Text = ">>Direccion 90° Derecha";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        // Modo Automático
        private void button7_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                textBox1.Text = "<<Modo Automatico Activado!!!>>";
                ArduinoSerial.Write("O");
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            //textBox1.Text = ">> Bienvenido <<";
        }

        private void Der_A_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("Q");
                textBox1.Text = ">>Direccion 45° Derecha";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void Izq_A_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("E");
                textBox1.Text = ">>Direccion 45° Izquierda";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void Der_R_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("C");
                textBox1.Text = ">>Reversa 45° DERECHA";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void Izq_R_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                ArduinoSerial.Write("Z");
                textBox1.Text = ">>Reversa 45° IZQUIERDA";
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

        private void Desactivar_A_Click(object sender, EventArgs e)
        {
            if (ArduinoSerial.IsOpen)
            {
                textBox1.Text = "<<Modo Automatico Desactivado!!!>>";
                ArduinoSerial.Write("S");
            }
            else
            {
                textBox1.Text = ">>ALERTA NO HAY CONEXION!!!<<";
            }
        }

    }
}

