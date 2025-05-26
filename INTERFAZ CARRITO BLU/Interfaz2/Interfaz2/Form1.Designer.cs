namespace Interfaz2
{
    partial class Form1
    {

        private System.ComponentModel.IContainer components = null;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            button4 = new Button();
            button5 = new Button();
            button6 = new Button();
            button7 = new Button();
            button8 = new Button();
            Der_A = new Button();
            Izq_A = new Button();
            Der_R = new Button();
            Izq_R = new Button();
            textBox1 = new TextBox();
            Desactivar_A = new Button();
            AcelerarA = new Button();
            SuspendLayout();
            // 
            // button1
            // 
            button1.BackColor = Color.MediumTurquoise;
            button1.Location = new Point(186, 164);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 0;
            button1.Text = "AcelerarA";
            button1.UseVisualStyleBackColor = false;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.BackColor = Color.MediumTurquoise;
            button2.Location = new Point(186, 307);
            button2.Name = "button2";
            button2.Size = new Size(94, 29);
            button2.TabIndex = 1;
            button2.Text = "Reversa";
            button2.UseVisualStyleBackColor = false;
            button2.Click += button2_Click;
            // 
            // button3
            // 
            button3.BackColor = Color.MediumTurquoise;
            button3.Location = new Point(317, 233);
            button3.Name = "button3";
            button3.Size = new Size(94, 29);
            button3.TabIndex = 2;
            button3.Text = "Derecha";
            button3.UseVisualStyleBackColor = false;
            button3.Click += button3_Click;
            // 
            // button4
            // 
            button4.BackColor = Color.MediumTurquoise;
            button4.Location = new Point(57, 233);
            button4.Name = "button4";
            button4.Size = new Size(94, 29);
            button4.TabIndex = 3;
            button4.Text = "Izquierda";
            button4.UseVisualStyleBackColor = false;
            button4.Click += button4_Click;
            // 
            // button5
            // 
            button5.BackColor = Color.Gold;
            button5.Location = new Point(186, 233);
            button5.Name = "button5";
            button5.Size = new Size(94, 29);
            button5.TabIndex = 4;
            button5.Text = "STOP";
            button5.UseVisualStyleBackColor = false;
            button5.Click += button5_Click;
            // 
            // button6
            // 
            button6.BackColor = Color.LawnGreen;
            button6.Location = new Point(12, 12);
            button6.Name = "button6";
            button6.Size = new Size(63, 29);
            button6.TabIndex = 5;
            button6.Text = "ON";
            button6.UseVisualStyleBackColor = false;
            button6.Click += button6_Click;
            // 
            // button7
            // 
            button7.BackColor = Color.MediumSlateBlue;
            button7.Location = new Point(12, 55);
            button7.Name = "button7";
            button7.Size = new Size(97, 29);
            button7.TabIndex = 7;
            button7.Text = "Automatico";
            button7.UseVisualStyleBackColor = false;
            button7.Click += button7_Click;
            // 
            // button8
            // 
            button8.BackColor = Color.Red;
            button8.Location = new Point(87, 12);
            button8.Name = "button8";
            button8.Size = new Size(64, 29);
            button8.TabIndex = 8;
            button8.Text = "OFF";
            button8.UseVisualStyleBackColor = false;
            button8.Click += button8_Click;
            // 
            // Der_A
            // 
            Der_A.Location = new Point(328, 164);
            Der_A.Name = "Der_A";
            Der_A.Size = new Size(74, 29);
            Der_A.TabIndex = 9;
            Der_A.Text = "Der_A";
            Der_A.UseVisualStyleBackColor = true;
            Der_A.Click += Der_A_Click;
            // 
            // Izq_A
            // 
            Izq_A.Location = new Point(68, 164);
            Izq_A.Name = "Izq_A";
            Izq_A.Size = new Size(70, 29);
            Izq_A.TabIndex = 10;
            Izq_A.Text = "Izq_A";
            Izq_A.UseVisualStyleBackColor = true;
            Izq_A.Click += Izq_A_Click;
            // 
            // Der_R
            // 
            Der_R.Location = new Point(328, 307);
            Der_R.Name = "Der_R";
            Der_R.Size = new Size(74, 29);
            Der_R.TabIndex = 11;
            Der_R.Text = "Der_R";
            Der_R.UseVisualStyleBackColor = true;
            Der_R.Click += Der_R_Click;
            // 
            // Izq_R
            // 
            Izq_R.Location = new Point(68, 307);
            Izq_R.Name = "Izq_R";
            Izq_R.Size = new Size(70, 29);
            Izq_R.TabIndex = 12;
            Izq_R.Text = "Izq_R";
            Izq_R.UseVisualStyleBackColor = true;
            Izq_R.Click += Izq_R_Click;
            // 
            // textBox1
            // 
            textBox1.BackColor = Color.DarkKhaki;
            textBox1.Location = new Point(172, 24);
            textBox1.Multiline = true;
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(254, 68);
            textBox1.TabIndex = 13;
            textBox1.Text = "Bienvenido!!!";
            textBox1.TextChanged += textBox1_TextChanged;
            // 
            // Desactivar_A
            // 
            Desactivar_A.BackColor = Color.MediumSlateBlue;
            Desactivar_A.Location = new Point(12, 90);
            Desactivar_A.Name = "Desactivar_A";
            Desactivar_A.Size = new Size(97, 29);
            Desactivar_A.TabIndex = 14;
            Desactivar_A.Text = "Desactivar";
            Desactivar_A.UseVisualStyleBackColor = false;
            Desactivar_A.Click += Desactivar_A_Click;
            // 
            // AcelerarA
            // 
            AcelerarA.BackColor = Color.MediumOrchid;
            AcelerarA.BackgroundImage = (Image)resources.GetObject("AcelerarA.BackgroundImage");
            AcelerarA.Location = new Point(186, 129);
            AcelerarA.Name = "AcelerarA";
            AcelerarA.Size = new Size(94, 29);
            AcelerarA.TabIndex = 15;
            AcelerarA.Text = "AcelerarM";
            AcelerarA.UseVisualStyleBackColor = false;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.ActiveCaptionText;
            ClientSize = new Size(452, 394);
            Controls.Add(AcelerarA);
            Controls.Add(Desactivar_A);
            Controls.Add(textBox1);
            Controls.Add(Izq_R);
            Controls.Add(Der_R);
            Controls.Add(Izq_A);
            Controls.Add(Der_A);
            Controls.Add(button8);
            Controls.Add(button7);
            Controls.Add(button6);
            Controls.Add(button5);
            Controls.Add(button4);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Name = "Form1";
            Text = "  ";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private Button button5;
        private Button button6;
        private Button button7;
        private Button button8;
        private Button Der_A;
        private Button Izq_A;
        private Button Der_R;
        private Button Izq_R;
        private TextBox textBox1;
        private Button Desactivar_A;
        private Button AcelerarA;
    }
}
