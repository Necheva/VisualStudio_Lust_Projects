namespace osmols2
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
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.timer3 = new System.Windows.Forms.Timer(this.components);
            this.timer4 = new System.Windows.Forms.Timer(this.components);
            this.timer5 = new System.Windows.Forms.Timer(this.components);
            this.playground = new System.Windows.Forms.Panel();
            this.shapeContainer1 = new Microsoft.VisualBasic.PowerPacks.ShapeContainer();
            this.oval4 = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.ball = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.oval3 = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.oval1 = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.player = new Microsoft.VisualBasic.PowerPacks.OvalShape();
            this.playground.SuspendLayout();
            this.SuspendLayout();
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
            // timer3
            // 
            this.timer3.Interval = 1;
            this.timer3.Tick += new System.EventHandler(this.timer3_Tick);
            // 
            // timer4
            // 
            this.timer4.Interval = 1;
            this.timer4.Tick += new System.EventHandler(this.timer4_Tick);
            // 
            // timer5
            // 
            this.timer5.Interval = 1;
          
            // 
            // playground
            // 
            this.playground.BackColor = System.Drawing.Color.Black;
            this.playground.Controls.Add(this.shapeContainer1);
            this.playground.Dock = System.Windows.Forms.DockStyle.Fill;
            this.playground.Location = new System.Drawing.Point(0, 0);
            this.playground.Name = "playground";
            this.playground.Size = new System.Drawing.Size(709, 427);
            this.playground.TabIndex = 0;
            // 
            // shapeContainer1
            // 
            this.shapeContainer1.Location = new System.Drawing.Point(0, 0);
            this.shapeContainer1.Margin = new System.Windows.Forms.Padding(0);
            this.shapeContainer1.Name = "shapeContainer1";
            this.shapeContainer1.Shapes.AddRange(new Microsoft.VisualBasic.PowerPacks.Shape[] {
            this.oval4,
            this.ball,
            this.oval3,
            this.oval1,
            this.player});
            this.shapeContainer1.Size = new System.Drawing.Size(709, 427);
            this.shapeContainer1.TabIndex = 0;
            this.shapeContainer1.TabStop = false;
            // 
            // oval4
            // 
            this.oval4.BackgroundImage = global::osmols2.Properties.Resources._5;
            this.oval4.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.oval4.Location = new System.Drawing.Point(547, 194);
            this.oval4.Name = "oval4";
            this.oval4.Size = new System.Drawing.Size(110, 111);
            // 
            // ball
            // 
            this.ball.BackgroundImage = global::osmols2.Properties.Resources._13353_4b1827d94e48b__3_;
            this.ball.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.ball.Location = new System.Drawing.Point(58, 44);
            this.ball.Name = "ball";
            this.ball.Size = new System.Drawing.Size(50, 50);
            // 
            // oval3
            // 
            this.oval3.BackgroundImage = global::osmols2.Properties.Resources._13353_4b1827d94e48b__4_;
            this.oval3.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.oval3.Location = new System.Drawing.Point(144, 205);
            this.oval3.Name = "oval3";
            this.oval3.Size = new System.Drawing.Size(40, 40);
            // 
            // oval1
            // 
            this.oval1.BackgroundImage = global::osmols2.Properties.Resources._13353_4b1827d94e48b__2_;
            this.oval1.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.oval1.Location = new System.Drawing.Point(482, 24);
            this.oval1.Name = "oval1";
            this.oval1.Size = new System.Drawing.Size(87, 89);
            // 
            // player
            // 
            this.player.BackColor = System.Drawing.Color.Transparent;
            this.player.BackgroundImage = global::osmols2.Properties.Resources.osmos_37__2_;
            this.player.FillColor = System.Drawing.Color.Transparent;
            this.player.FillStyle = Microsoft.VisualBasic.PowerPacks.FillStyle.Solid;
            this.player.Location = new System.Drawing.Point(303, 272);
            this.player.Name = "player";
            this.player.Size = new System.Drawing.Size(60, 60);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(709, 427);
            this.Controls.Add(this.playground);
            this.Name = "Form1";
            this.Text = "Form1";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Form1_KeyDown);
            this.playground.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel playground;
        private Microsoft.VisualBasic.PowerPacks.ShapeContainer shapeContainer1;
        private Microsoft.VisualBasic.PowerPacks.OvalShape player;
        private Microsoft.VisualBasic.PowerPacks.OvalShape ball;
        private Microsoft.VisualBasic.PowerPacks.OvalShape oval3;
        private Microsoft.VisualBasic.PowerPacks.OvalShape oval1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Timer timer2;
        private System.Windows.Forms.Timer timer3;
        private Microsoft.VisualBasic.PowerPacks.OvalShape oval4;
        private System.Windows.Forms.Timer timer4;
        private System.Windows.Forms.Timer timer5;
    }
}

