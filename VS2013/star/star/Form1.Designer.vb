<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.playground = New System.Windows.Forms.Panel()
        Me.spaceship = New System.Windows.Forms.PictureBox()
        Me.playground.SuspendLayout()
        CType(Me.spaceship, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'playground
        '
        Me.playground.BackgroundImage = Global.star.My.Resources.Resources.kosmos_05
        Me.playground.Controls.Add(Me.spaceship)
        Me.playground.Dock = System.Windows.Forms.DockStyle.Fill
        Me.playground.Location = New System.Drawing.Point(0, 0)
        Me.playground.Name = "playground"
        Me.playground.Size = New System.Drawing.Size(653, 487)
        Me.playground.TabIndex = 0
        '
        'spaceship
        '
        Me.spaceship.BackColor = System.Drawing.Color.Transparent
        Me.spaceship.Image = Global.star.My.Resources.Resources.space1
        Me.spaceship.Location = New System.Drawing.Point(272, 345)
        Me.spaceship.Name = "spaceship"
        Me.spaceship.Size = New System.Drawing.Size(91, 130)
        Me.spaceship.TabIndex = 0
        Me.spaceship.TabStop = False
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(653, 487)
        Me.Controls.Add(Me.playground)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.playground.ResumeLayout(False)
        CType(Me.spaceship, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents playground As System.Windows.Forms.Panel
    Friend WithEvents spaceship As System.Windows.Forms.PictureBox

End Class
