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
	/// Summary for MONHOC
	/// </summary>
	public ref class MONHOC : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet();
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789";
		String^ database = "cppstudent";
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
		DataSet^ DS1 = gcnew DataSet();
	private: System::Windows::Forms::ComboBox^ cboGV;
	private: System::Windows::Forms::Button^ button1;
		   String^ sqlQuery;
	public:
		MONHOC(void)
		{
			InitializeComponent(); CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MONHOC()
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
	private: System::Windows::Forms::DataGridView^ dataGridviewMON;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cboKhoa;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtHocKy;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtSDVHT;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTenMon;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtMaMon;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MONHOC::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewMON = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cboGV = (gcnew System::Windows::Forms::ComboBox());
			this->cboKhoa = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtHocKy = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtSDVHT = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTenMon = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtMaMon = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewMON))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(979, 705);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(178, 51);
			this->btnExit->TabIndex = 19;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MONHOC::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(700, 705);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(178, 51);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MONHOC::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(409, 705);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(178, 51);
			this->btnSua->TabIndex = 17;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &MONHOC::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(145, 705);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(178, 51);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MONHOC::btnAdd_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridviewMON);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(572, 124);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(851, 521);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Danh sách";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MONHOC::groupBox2_Enter);
			// 
			// dataGridviewMON
			// 
			this->dataGridviewMON->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewMON->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewMON->Location = System::Drawing::Point(6, 41);
			this->dataGridviewMON->Name = L"dataGridviewMON";
			this->dataGridviewMON->RowHeadersWidth = 51;
			this->dataGridviewMON->Size = System::Drawing::Size(839, 468);
			this->dataGridviewMON->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cboGV);
			this->groupBox1->Controls->Add(this->cboKhoa);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtHocKy);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtSDVHT);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtTenMon);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtMaMon);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(145, 124);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(416, 521);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin chi tiết";
			// 
			// cboGV
			// 
			this->cboGV->FormattingEnabled = true;
			this->cboGV->Location = System::Drawing::Point(203, 194);
			this->cboGV->Name = L"cboGV";
			this->cboGV->Size = System::Drawing::Size(145, 33);
			this->cboGV->TabIndex = 24;
			// 
			// cboKhoa
			// 
			this->cboKhoa->FormattingEnabled = true;
			this->cboKhoa->Location = System::Drawing::Point(203, 291);
			this->cboKhoa->Name = L"cboKhoa";
			this->cboKhoa->Size = System::Drawing::Size(145, 33);
			this->cboKhoa->TabIndex = 23;
			this->cboKhoa->SelectedIndexChanged += gcnew System::EventHandler(this, &MONHOC::cboKhoa_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 25);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Mã khoa";
			// 
			// txtHocKy
			// 
			this->txtHocKy->Location = System::Drawing::Point(203, 246);
			this->txtHocKy->Name = L"txtHocKy";
			this->txtHocKy->Size = System::Drawing::Size(145, 30);
			this->txtHocKy->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Học kỳ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 25);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Giảng viên";
			// 
			// txtSDVHT
			// 
			this->txtSDVHT->Location = System::Drawing::Point(203, 147);
			this->txtSDVHT->Name = L"txtSDVHT";
			this->txtSDVHT->Size = System::Drawing::Size(145, 30);
			this->txtSDVHT->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Số ĐVHT";
			// 
			// txtTenMon
			// 
			this->txtTenMon->Location = System::Drawing::Point(203, 100);
			this->txtTenMon->Name = L"txtTenMon";
			this->txtTenMon->Size = System::Drawing::Size(145, 30);
			this->txtTenMon->TabIndex = 15;
			this->txtTenMon->TextChanged += gcnew System::EventHandler(this, &MONHOC::txtTenMon_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Tên môn";
			// 
			// txtMaMon
			// 
			this->txtMaMon->Location = System::Drawing::Point(203, 53);
			this->txtMaMon->Name = L"txtMaMon";
			this->txtMaMon->Size = System::Drawing::Size(145, 30);
			this->txtMaMon->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Mã môn";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(651, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Danh sách môn học";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(1245, 705);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 51);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MONHOC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MONHOC";
			this->Text = L"MONHOC";
			this->Load += gcnew System::EventHandler(this, &MONHOC::MONHOC_Load);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewMON))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Load22() {
			DataTable^ sqlDt5 = gcnew DataTable();
			dataGridviewMON->DataSource = sqlDt5;

		}
		 private: System::Void Upload() {
			 Load22();
			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from subject1";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewMON->DataSource = sqlDt;

		 } 

	private: System::Void cboKhoa_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MONHOC_Load(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	sqlConn->Open();
	cboKhoa->Items->Clear();
	cboKhoa->Text = "";
	String^ aa = "Select Facultycode from faculty";
	sqlCmd = gcnew MySqlCommand(aa, sqlConn);
	sqlDd = sqlCmd->ExecuteReader();

	while (sqlDd->Read()) {
		cboKhoa->Items->Add(sqlDd->GetString(0));
	}
	sqlConn->Close();
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	
	sqlConn1->Open();
	cboGV->Items->Clear();
	cboGV->Text = "";
	String^ aaa = "Select GVCode from teacher";
	sqlCmd1 = gcnew MySqlCommand(aaa, sqlConn1);
	sqlDd1 = sqlCmd1->ExecuteReader();

	while (sqlDd1->Read()) {
		cboGV->Items->Add(sqlDd1->GetString(0));
	}

	sqlConn1->Close();

	Upload();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();

		sqlQuery = "insert into subject1(SubjectCode, SubjectName,DVHT, GVCode, HK, Facultycode)" + "value('" + txtMaMon->Text + "','" + txtTenMon->Text + "','" + txtSDVHT->Text +"','"+cboGV->Text+"','"+txtHocKy->Text+"','"+cboKhoa->Text + "')";
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
	Upload();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	String^ delete2 = txtMaMon->Text;
	if (delete2->Length == 0) {
		MessageBox::Show("Error", " Error", MessageBoxButtons::OK);
		return;
	}




	//Delete student
	try {
		sqlConn->Open();
		System::Windows::Forms::DialogResult  iDelete;
		iDelete = MessageBox::Show("Comfirm if you want to delete subject data", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iDelete == System::Windows::Forms::DialogResult::Yes) {
			sqlQuery = "delete from subject1 where SubjectCode = '" + txtMaMon->Text + "'";
		}
		sqlQuery = "delete from subject1 where SubjectCode = '" + txtMaMon->Text + "'";
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
	MessageBox::Show("Deleted subject data!");

	Upload();
}
private: System::Void txtTenMon_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update subject1 Set SubjectCode=N'" + txtMaMon->Text + "',SubjectName='" +
			txtTenMon->Text + "',DVHT='" + txtSDVHT->Text + "',GVCode='" + cboGV->Text + "',HK='"+txtHocKy->Text +"',Facultycode='"+cboKhoa->Text +"' where SubjectCode='" + txtMaMon->Text + "' ";
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

	Upload();
	try {
		//GVCode, TeacherName, Gender, DOB, Email, Phone, PL
		sqlConn->Open();
		sqlQuery = "Update result Set SubjectName=N'" + txtTenMon->Text + "' where SubjectCode='" + txtMaMon->Text + "' ";
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
}
};
}
