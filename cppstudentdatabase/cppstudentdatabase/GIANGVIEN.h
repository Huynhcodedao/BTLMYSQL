#pragma once

namespace cppstudentdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for GIANGVIEN
	/// </summary>
	public ref class GIANGVIEN : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();
		String^ sqlQuery;
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789";
	private: System::Windows::Forms::TextBox^ txtDOB;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnXem;
		   String^ database = "cppstudent";
	public:
		GIANGVIEN(void)
		{
			
			InitializeComponent();CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GIANGVIEN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnSua;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridviewDSGV;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cboPhanloai;
	private: System::Windows::Forms::ComboBox^ cboGioiTinh;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ mskPhone;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtHoTen;
	private: System::Windows::Forms::TextBox^ txtMaGV;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label1;
	private:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GIANGVIEN::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewDSGV = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDOB = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cboPhanloai = (gcnew System::Windows::Forms::ComboBox());
			this->cboGioiTinh = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->mskPhone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtHoTen = (gcnew System::Windows::Forms::TextBox());
			this->txtMaGV = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnXem = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDSGV))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::Black;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(1250, 690);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 51);
			this->btnExit->TabIndex = 19;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &GIANGVIEN::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::Black;
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(982, 690);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 51);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &GIANGVIEN::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->ForeColor = System::Drawing::Color::Black;
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(708, 690);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 17;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &GIANGVIEN::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(139, 690);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &GIANGVIEN::btnAdd_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridviewDSGV);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(582, 130);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(851, 521);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh sách";
			// 
			// dataGridviewDSGV
			// 
			this->dataGridviewDSGV->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDSGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewDSGV->Location = System::Drawing::Point(5, 58);
			this->dataGridviewDSGV->Name = L"dataGridviewDSGV";
			this->dataGridviewDSGV->RowHeadersWidth = 51;
			this->dataGridviewDSGV->Size = System::Drawing::Size(841, 458);
			this->dataGridviewDSGV->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtDOB);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->cboPhanloai);
			this->groupBox1->Controls->Add(this->cboGioiTinh);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->mskPhone);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtEmail);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtHoTen);
			this->groupBox1->Controls->Add(this->txtMaGV);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(139, 130);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(416, 521);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin chi tiết";
			// 
			// txtDOB
			// 
			this->txtDOB->Location = System::Drawing::Point(186, 298);
			this->txtDOB->Name = L"txtDOB";
			this->txtDOB->Size = System::Drawing::Size(225, 30);
			this->txtDOB->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(15, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 25);
			this->label8->TabIndex = 35;
			this->label8->Text = L"DOB";
			this->label8->Click += gcnew System::EventHandler(this, &GIANGVIEN::label8_Click);
			// 
			// cboPhanloai
			// 
			this->cboPhanloai->FormattingEnabled = true;
			this->cboPhanloai->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cơ Hữu", L"Thỉnh giảng" });
			this->cboPhanloai->Location = System::Drawing::Point(186, 427);
			this->cboPhanloai->Name = L"cboPhanloai";
			this->cboPhanloai->Size = System::Drawing::Size(225, 33);
			this->cboPhanloai->TabIndex = 6;
			// 
			// cboGioiTinh
			// 
			this->cboGioiTinh->FormattingEnabled = true;
			this->cboGioiTinh->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nam", L"Nữ" });
			this->cboGioiTinh->Location = System::Drawing::Point(186, 170);
			this->cboGioiTinh->Name = L"cboGioiTinh";
			this->cboGioiTinh->Size = System::Drawing::Size(225, 33);
			this->cboGioiTinh->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 25);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Giới tính:";
			// 
			// mskPhone
			// 
			this->mskPhone->Location = System::Drawing::Point(186, 234);
			this->mskPhone->Mask = L"9999 000 000";
			this->mskPhone->Name = L"mskPhone";
			this->mskPhone->Size = System::Drawing::Size(225, 30);
			this->mskPhone->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 430);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 25);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Phân loại GV:";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(186, 368);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(225, 30);
			this->txtEmail->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 371);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 25);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Phone";
			// 
			// txtHoTen
			// 
			this->txtHoTen->Location = System::Drawing::Point(186, 110);
			this->txtHoTen->Name = L"txtHoTen";
			this->txtHoTen->Size = System::Drawing::Size(225, 30);
			this->txtHoTen->TabIndex = 2;
			// 
			// txtMaGV
			// 
			this->txtMaGV->Location = System::Drawing::Point(186, 58);
			this->txtMaGV->Name = L"txtMaGV";
			this->txtMaGV->Size = System::Drawing::Size(225, 30);
			this->txtMaGV->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 25);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Họ và tên";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Mã giảng viên";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(571, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(348, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"DANH SÁCH GIẢNG VIÊN";
			// 
			// btnXem
			// 
			this->btnXem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXem->ForeColor = System::Drawing::Color::Black;
			this->btnXem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXem.Image")));
			this->btnXem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXem->Location = System::Drawing::Point(435, 690);
			this->btnXem->Name = L"btnXem";
			this->btnXem->Size = System::Drawing::Size(178, 51);
			this->btnXem->TabIndex = 20;
			this->btnXem->Text = L"Display";
			this->btnXem->UseVisualStyleBackColor = true;
			this->btnXem->Click += gcnew System::EventHandler(this, &GIANGVIEN::btnXem_Click);
			// 
			// GIANGVIEN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->btnXem);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"GIANGVIEN";
			this->Text = L"GIANGVIEN";
			this->Load += gcnew System::EventHandler(this, &GIANGVIEN::GIANGVIEN_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDSGV))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Load22() {
			DataTable^ sqlDt5 = gcnew DataTable();
			dataGridviewDSGV->DataSource = sqlDt5;

		}
		 private: System::Void GVUpload() {
			 Load22();
			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from teacher";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewDSGV->DataSource = sqlDt;

		 }
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		try {
			sqlConn->Open();
			sqlQuery = "insert into teacher( GVCode, TeacherName, Gender, DOB, Email, Phone, PL)" + "value('" + txtMaGV->Text + "','" + txtHoTen->Text +"','" +cboGioiTinh->Text +"','"+txtDOB->Text+"','"+txtEmail->Text+"','"+mskPhone->Text +"','"+cboPhanloai->Text+ "')";
			sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlDd = sqlCmd->ExecuteReader();
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			sqlConn->Close();
		}
		MessageBox::Show("Student Management System Update");
		GVUpload();
	}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtMaGV->Text;
	if (delete2->Length == 0) {
		MessageBox::Show("Error", " Error", MessageBoxButtons::OK);
		return;
	}




	//Delete student
	try {
		sqlConn->Open();
		System::Windows::Forms::DialogResult  iDelete;
		iDelete = MessageBox::Show("Comfirm if you want to delete teacher data", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iDelete == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery = "delete from teacher where GVCode = '" + txtMaGV->Text + "'";
		}
		sqlQuery = "delete from teacher where GVCode = '" + txtMaGV->Text + "'";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();
		sqlConn->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Erorr", "Student Management System", MessageBoxButtons::OK);
	}
	finally {
		sqlConn->Close();
	}
	MessageBox::Show("Deleted faculty data!");
	Load22();
	GVUpload();

}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnXem_Click(System::Object^ sender, System::EventArgs^ e) {
	GVUpload();
}
private: System::Void GIANGVIEN_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update teacher Set GVCode=N'" + txtMaGV->Text + "',TeacherName='" +
			txtHoTen->Text + "',Gender='" + cboGioiTinh->Text + "',DOB='" +
			txtDOB->Text + "',Email='" + txtEmail->Text + "',Phone='"+mskPhone->Text  +"',PL='"+cboPhanloai->Text +"' where GVCode='" + txtMaGV->Text + "' ";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}

	GVUpload();
}
};
}
