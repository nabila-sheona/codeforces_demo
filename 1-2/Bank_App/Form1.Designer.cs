namespace Bank_App
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
            this.bank_name_label = new System.Windows.Forms.Label();
            this.crt_name_label = new System.Windows.Forms.Label();
            this.crt_branch_label = new System.Windows.Forms.Label();
            this.crt_type_label = new System.Windows.Forms.Label();
            this.crt_inidip_label = new System.Windows.Forms.Label();
            this.crt_name_textBox = new System.Windows.Forms.TextBox();
            this.crt_inidip_textBox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.crt_acno_label = new System.Windows.Forms.Label();
            this.crt_acc_button = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.info_acno_textbox = new System.Windows.Forms.TextBox();
            this.info_name_label = new System.Windows.Forms.Label();
            this.info_branch_label = new System.Windows.Forms.Label();
            this.info_type_label = new System.Windows.Forms.Label();
            this.info_bal_label = new System.Windows.Forms.Label();
            this.info_button = new System.Windows.Forms.Button();
            this.label9 = new System.Windows.Forms.Label();
            this.banking_acno_textBox = new System.Windows.Forms.TextBox();
            this.label10 = new System.Windows.Forms.Label();
            this.banking_amount_textbox = new System.Windows.Forms.TextBox();
            this.label11 = new System.Windows.Forms.Label();
            this.diposit_button = new System.Windows.Forms.Button();
            this.withdraw_button = new System.Windows.Forms.Button();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.comboBox3 = new System.Windows.Forms.ComboBox();
            this.comboBox4 = new System.Windows.Forms.ComboBox();
            this.comboBox5 = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // bank_name_label
            // 
            this.bank_name_label.AutoSize = true;
            this.bank_name_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 36F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bank_name_label.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.bank_name_label.Location = new System.Drawing.Point(883, 28);
            this.bank_name_label.Name = "bank_name_label";
            this.bank_name_label.Size = new System.Drawing.Size(316, 55);
            this.bank_name_label.TabIndex = 0;
            this.bank_name_label.Text = "AB Bank Ltd.";
            this.bank_name_label.Click += new System.EventHandler(this.bank_name_label_Click);
            // 
            // crt_name_label
            // 
            this.crt_name_label.AutoSize = true;
            this.crt_name_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_name_label.ForeColor = System.Drawing.Color.Gold;
            this.crt_name_label.Location = new System.Drawing.Point(36, 299);
            this.crt_name_label.Name = "crt_name_label";
            this.crt_name_label.Size = new System.Drawing.Size(83, 24);
            this.crt_name_label.TabIndex = 2;
            this.crt_name_label.Text = "Name : ";
            // 
            // crt_branch_label
            // 
            this.crt_branch_label.AutoSize = true;
            this.crt_branch_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_branch_label.ForeColor = System.Drawing.Color.Gold;
            this.crt_branch_label.Location = new System.Drawing.Point(36, 344);
            this.crt_branch_label.Name = "crt_branch_label";
            this.crt_branch_label.Size = new System.Drawing.Size(94, 24);
            this.crt_branch_label.TabIndex = 3;
            this.crt_branch_label.Text = "Branch : ";
            // 
            // crt_type_label
            // 
            this.crt_type_label.AutoSize = true;
            this.crt_type_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_type_label.ForeColor = System.Drawing.Color.Gold;
            this.crt_type_label.Location = new System.Drawing.Point(36, 386);
            this.crt_type_label.Name = "crt_type_label";
            this.crt_type_label.Size = new System.Drawing.Size(75, 24);
            this.crt_type_label.TabIndex = 3;
            this.crt_type_label.Text = "Type : ";
            // 
            // crt_inidip_label
            // 
            this.crt_inidip_label.AutoSize = true;
            this.crt_inidip_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_inidip_label.ForeColor = System.Drawing.Color.Gold;
            this.crt_inidip_label.Location = new System.Drawing.Point(36, 430);
            this.crt_inidip_label.Name = "crt_inidip_label";
            this.crt_inidip_label.Size = new System.Drawing.Size(145, 24);
            this.crt_inidip_label.TabIndex = 3;
            this.crt_inidip_label.Text = "Initial Diposit : ";
            // 
            // crt_name_textBox
            // 
            this.crt_name_textBox.BackColor = System.Drawing.SystemColors.InfoText;
            this.crt_name_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_name_textBox.ForeColor = System.Drawing.SystemColors.Info;
            this.crt_name_textBox.Location = new System.Drawing.Point(204, 299);
            this.crt_name_textBox.Name = "crt_name_textBox";
            this.crt_name_textBox.Size = new System.Drawing.Size(237, 29);
            this.crt_name_textBox.TabIndex = 4;
            // 
            // crt_inidip_textBox
            // 
            this.crt_inidip_textBox.BackColor = System.Drawing.SystemColors.InfoText;
            this.crt_inidip_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_inidip_textBox.ForeColor = System.Drawing.SystemColors.Info;
            this.crt_inidip_textBox.Location = new System.Drawing.Point(204, 430);
            this.crt_inidip_textBox.Name = "crt_inidip_textBox";
            this.crt_inidip_textBox.Size = new System.Drawing.Size(237, 29);
            this.crt_inidip_textBox.TabIndex = 5;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label2.Location = new System.Drawing.Point(138, 171);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(174, 25);
            this.label2.TabIndex = 0;
            this.label2.Text = "Create Account";
            // 
            // crt_acno_label
            // 
            this.crt_acno_label.AutoSize = true;
            this.crt_acno_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_acno_label.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.crt_acno_label.Location = new System.Drawing.Point(201, 255);
            this.crt_acno_label.Name = "crt_acno_label";
            this.crt_acno_label.Size = new System.Drawing.Size(154, 25);
            this.crt_acno_label.TabIndex = 6;
            this.crt_acno_label.Text = "Account No : ";
            // 
            // crt_acc_button
            // 
            this.crt_acc_button.BackColor = System.Drawing.Color.PapayaWhip;
            this.crt_acc_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.crt_acc_button.Location = new System.Drawing.Point(106, 492);
            this.crt_acc_button.Name = "crt_acc_button";
            this.crt_acc_button.Size = new System.Drawing.Size(249, 55);
            this.crt_acc_button.TabIndex = 7;
            this.crt_acc_button.Text = "Create Account";
            this.crt_acc_button.UseVisualStyleBackColor = false;
            this.crt_acc_button.Click += new System.EventHandler(this.crt_acc_button_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label3.Location = new System.Drawing.Point(766, 9);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(51, 25);
            this.label3.TabIndex = 0;
            this.label3.Text = "Info";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label4.Location = new System.Drawing.Point(535, 255);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(154, 25);
            this.label4.TabIndex = 6;
            this.label4.Text = "Account No : ";
            // 
            // info_acno_textbox
            // 
            this.info_acno_textbox.BackColor = System.Drawing.SystemColors.InfoText;
            this.info_acno_textbox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_acno_textbox.ForeColor = System.Drawing.SystemColors.Info;
            this.info_acno_textbox.Location = new System.Drawing.Point(695, 253);
            this.info_acno_textbox.Name = "info_acno_textbox";
            this.info_acno_textbox.Size = new System.Drawing.Size(237, 29);
            this.info_acno_textbox.TabIndex = 4;
            this.info_acno_textbox.TextChanged += new System.EventHandler(this.info_acno_textbox_TextChanged);
            // 
            // info_name_label
            // 
            this.info_name_label.AutoSize = true;
            this.info_name_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_name_label.ForeColor = System.Drawing.Color.Gold;
            this.info_name_label.Location = new System.Drawing.Point(536, 386);
            this.info_name_label.Name = "info_name_label";
            this.info_name_label.Size = new System.Drawing.Size(83, 24);
            this.info_name_label.TabIndex = 2;
            this.info_name_label.Text = "Name : ";
            // 
            // info_branch_label
            // 
            this.info_branch_label.AutoSize = true;
            this.info_branch_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_branch_label.ForeColor = System.Drawing.Color.Gold;
            this.info_branch_label.Location = new System.Drawing.Point(536, 431);
            this.info_branch_label.Name = "info_branch_label";
            this.info_branch_label.Size = new System.Drawing.Size(94, 24);
            this.info_branch_label.TabIndex = 3;
            this.info_branch_label.Text = "Branch : ";
            // 
            // info_type_label
            // 
            this.info_type_label.AutoSize = true;
            this.info_type_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_type_label.ForeColor = System.Drawing.Color.Gold;
            this.info_type_label.Location = new System.Drawing.Point(536, 473);
            this.info_type_label.Name = "info_type_label";
            this.info_type_label.Size = new System.Drawing.Size(75, 24);
            this.info_type_label.TabIndex = 3;
            this.info_type_label.Text = "Type : ";
            // 
            // info_bal_label
            // 
            this.info_bal_label.AutoSize = true;
            this.info_bal_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_bal_label.ForeColor = System.Drawing.Color.Gold;
            this.info_bal_label.Location = new System.Drawing.Point(536, 517);
            this.info_bal_label.Name = "info_bal_label";
            this.info_bal_label.Size = new System.Drawing.Size(172, 24);
            this.info_bal_label.TabIndex = 3;
            this.info_bal_label.Text = "Current Balance :";
            // 
            // info_button
            // 
            this.info_button.BackColor = System.Drawing.Color.Honeydew;
            this.info_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.info_button.Location = new System.Drawing.Point(695, 295);
            this.info_button.Name = "info_button";
            this.info_button.Size = new System.Drawing.Size(155, 41);
            this.info_button.TabIndex = 7;
            this.info_button.Text = "Get Info";
            this.info_button.UseVisualStyleBackColor = false;
            this.info_button.Click += new System.EventHandler(this.info_button_Click);
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label9.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label9.Location = new System.Drawing.Point(1167, 171);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(183, 25);
            this.label9.TabIndex = 0;
            this.label9.Text = "Banking Section";
            // 
            // banking_acno_textBox
            // 
            this.banking_acno_textBox.BackColor = System.Drawing.SystemColors.InfoText;
            this.banking_acno_textBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.banking_acno_textBox.ForeColor = System.Drawing.SystemColors.Info;
            this.banking_acno_textBox.Location = new System.Drawing.Point(1197, 253);
            this.banking_acno_textBox.Name = "banking_acno_textBox";
            this.banking_acno_textBox.Size = new System.Drawing.Size(237, 29);
            this.banking_acno_textBox.TabIndex = 4;
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label10.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label10.Location = new System.Drawing.Point(1037, 255);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(154, 25);
            this.label10.TabIndex = 6;
            this.label10.Text = "Account No : ";
            // 
            // banking_amount_textbox
            // 
            this.banking_amount_textbox.BackColor = System.Drawing.SystemColors.InfoText;
            this.banking_amount_textbox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.banking_amount_textbox.ForeColor = System.Drawing.SystemColors.Info;
            this.banking_amount_textbox.Location = new System.Drawing.Point(1197, 293);
            this.banking_amount_textbox.Name = "banking_amount_textbox";
            this.banking_amount_textbox.Size = new System.Drawing.Size(237, 29);
            this.banking_amount_textbox.TabIndex = 4;
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label11.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.label11.Location = new System.Drawing.Point(1037, 295);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(112, 25);
            this.label11.TabIndex = 6;
            this.label11.Text = "Amount : ";
            // 
            // diposit_button
            // 
            this.diposit_button.BackColor = System.Drawing.Color.SpringGreen;
            this.diposit_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.diposit_button.Location = new System.Drawing.Point(1042, 344);
            this.diposit_button.Name = "diposit_button";
            this.diposit_button.Size = new System.Drawing.Size(392, 41);
            this.diposit_button.TabIndex = 7;
            this.diposit_button.Text = "Diposit";
            this.diposit_button.UseVisualStyleBackColor = false;
            this.diposit_button.Click += new System.EventHandler(this.diposit_button_Click);
            // 
            // withdraw_button
            // 
            this.withdraw_button.BackColor = System.Drawing.Color.SpringGreen;
            this.withdraw_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.withdraw_button.Location = new System.Drawing.Point(1042, 401);
            this.withdraw_button.Name = "withdraw_button";
            this.withdraw_button.Size = new System.Drawing.Size(392, 41);
            this.withdraw_button.TabIndex = 7;
            this.withdraw_button.Text = "Withdraw";
            this.withdraw_button.UseVisualStyleBackColor = false;
            this.withdraw_button.Click += new System.EventHandler(this.withdraw_button_Click);
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(0, 0);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 21);
            this.comboBox1.TabIndex = 8;
            // 
            // comboBox2
            // 
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Location = new System.Drawing.Point(0, 0);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(121, 21);
            this.comboBox2.TabIndex = 9;
            // 
            // comboBox3
            // 
            this.comboBox3.FormattingEnabled = true;
            this.comboBox3.Location = new System.Drawing.Point(0, 0);
            this.comboBox3.Name = "comboBox3";
            this.comboBox3.Size = new System.Drawing.Size(121, 21);
            this.comboBox3.TabIndex = 10;
            // 
            // comboBox4
            // 
            this.comboBox4.FormattingEnabled = true;
            this.comboBox4.Location = new System.Drawing.Point(204, 344);
            this.comboBox4.Name = "comboBox4";
            this.comboBox4.Size = new System.Drawing.Size(121, 21);
            this.comboBox4.TabIndex = 11;
            // 
            // comboBox5
            // 
            this.comboBox5.FormattingEnabled = true;
            this.comboBox5.Location = new System.Drawing.Point(204, 391);
            this.comboBox5.Name = "comboBox5";
            this.comboBox5.Size = new System.Drawing.Size(121, 21);
            this.comboBox5.TabIndex = 12;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveBorder;
            this.ClientSize = new System.Drawing.Size(1370, 689);
            this.Controls.Add(this.comboBox5);
            this.Controls.Add(this.comboBox4);
            this.Controls.Add(this.comboBox3);
            this.Controls.Add(this.comboBox2);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.withdraw_button);
            this.Controls.Add(this.diposit_button);
            this.Controls.Add(this.info_button);
            this.Controls.Add(this.crt_acc_button);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.crt_acno_label);
            this.Controls.Add(this.crt_inidip_textBox);
            this.Controls.Add(this.banking_amount_textbox);
            this.Controls.Add(this.banking_acno_textBox);
            this.Controls.Add(this.info_acno_textbox);
            this.Controls.Add(this.crt_name_textBox);
            this.Controls.Add(this.info_bal_label);
            this.Controls.Add(this.crt_inidip_label);
            this.Controls.Add(this.info_type_label);
            this.Controls.Add(this.crt_type_label);
            this.Controls.Add(this.info_branch_label);
            this.Controls.Add(this.crt_branch_label);
            this.Controls.Add(this.info_name_label);
            this.Controls.Add(this.crt_name_label);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.bank_name_label);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label bank_name_label;
        private System.Windows.Forms.Label crt_name_label;
        private System.Windows.Forms.Label crt_branch_label;
        private System.Windows.Forms.Label crt_type_label;
        private System.Windows.Forms.Label crt_inidip_label;
        private System.Windows.Forms.TextBox crt_name_textBox;
        private System.Windows.Forms.TextBox crt_inidip_textBox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label crt_acno_label;
        private System.Windows.Forms.Button crt_acc_button;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox info_acno_textbox;
        private System.Windows.Forms.Label info_name_label;
        private System.Windows.Forms.Label info_branch_label;
        private System.Windows.Forms.Label info_type_label;
        private System.Windows.Forms.Label info_bal_label;
        private System.Windows.Forms.Button info_button;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.TextBox banking_acno_textBox;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.TextBox banking_amount_textbox;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Button diposit_button;
        private System.Windows.Forms.Button withdraw_button;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.ComboBox comboBox3;
        private System.Windows.Forms.ComboBox comboBox4;
        private System.Windows.Forms.ComboBox comboBox5;
    }
}

