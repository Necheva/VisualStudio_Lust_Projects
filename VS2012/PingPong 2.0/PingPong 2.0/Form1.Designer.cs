namespace PingPong_2._0
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.playground = new System.Windows.Forms.Panel();
            this.step1 = new System.Windows.Forms.PictureBox();
            this.ball1 = new System.Windows.Forms.PictureBox();
            this.racket = new System.Windows.Forms.PictureBox();
            this.shapeContainer1 = new Microsoft.VisualBasic.PowerPacks.ShapeContainer();
            this.ball = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.button1 = new System.Windows.Forms.Button();
            this.playground.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.step1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ball1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.racket)).BeginInit();
            this.SuspendLayout();
            // 
            // playground
            // 
            this.playground.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.playground.Controls.Add(this.button1);
            this.playground.Controls.Add(this.step1);
            this.playground.Controls.Add(this.ball1);
            this.playground.Controls.Add(this.racket);
            this.playground.Controls.Add(this.shapeContainer1);
            this.playground.Dock = System.Windows.Forms.DockStyle.Fill;
            this.playground.Location = new System.Drawing.Point(0, 0);
            this.playground.Name = "playground";
            this.playground.Size = new System.Drawing.Size(646, 438);
            this.playground.TabIndex = 0;
            // 
            // step1
            // 
            this.step1.BackColor = System.Drawing.Color.Purple;
            this.step1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.step1.Location = new System.Drawing.Point(-53, 12);
            this.step1.Name = "step1";
            this.step1.Size = new System.Drawing.Size(1363, 81);
            this.step1.TabIndex = 3;
            this.step1.TabStop = false;
            // 
            // ball1
            // 
            this.ball1.BackColor = System.Drawing.Color.Red;
            this.ball1.Location = new System.Drawing.Point(248, 89);
            this.ball1.Name = "ball1";
            this.ball1.Size = new System.Drawing.Size(30, 30);
            this.ball1.TabIndex = 2;
            this.ball1.TabStop = false;
            // 
            // racket
            // 
            this.racket.BackColor = System.Drawing.Color.Black;
            this.racket.Location = new System.Drawing.Point(260, 326);
            this.racket.Name = "racket";
            this.racket.Size = new System.Drawing.Size(200, 10);
            this.racket.TabIndex = 0;
            this.racket.TabStop = false;
            // 
            // shapeContainer1
            // 
            this.shapeContainer1.Location = new System.Drawing.Point(0, 0);
            this.shapeContainer1.Margin = new System.Windows.Forms.Padding(0);
            this.shapeContainer1.Name = "shapeContainer1";
            this.shapeContainer1.Shapes.AddRange(new Microsoft.VisualBasic.PowerPacks.Shape[] {
            this.ball});
            this.shapeContainer1.Size = new System.Drawing.Size(646, 438);
            this.shapeContainer1.TabIndex = 1;
            this.shapeContainer1.TabStop = false;
            // 
            // ball
            // 
            this.ball.BackColor = System.Drawing.SystemColors.Control;
            this.ball.FillColor = System.Drawing.Color.Red;
            this.ball.FillGradientColor = System.Drawing.Color.DarkRed;
            this.ball.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.ball.Location = new System.Drawing.Point(254, 136);
            this.ball.Name = "ball";
            this.ball.Size = new System.Drawing.Size(30, 30);
            // 
            // timer1
            // 
            this.timer1.Interval = 1;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // timer2
            // 
            this.timer2.Interval = 1;
            this.timer2.Tick += new System.EventHandler(this.timer2_Tick);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(13, 403);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 4;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(646, 438);
            this.Controls.Add(this.playground);
            this.Name = "Form1";
            this.Text = "Form1";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Form1_KeyDown);
            this.playground.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.step1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ball1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.racket)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel playground;
        private System.Windows.Forms.PictureBox racket;
        private Microsoft.VisualBasic.PowerPacks.ShapeContainer shapeContainer1;
        private Microsoft.VisualBasic.PowerPacks.OvalShape ball;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.PictureBox ball1;
        private System.Windows.Forms.Timer timer2;
        private System.Windows.Forms.PictureBox step1;
        private System.Windows.Forms.Button button1;
    }
}

