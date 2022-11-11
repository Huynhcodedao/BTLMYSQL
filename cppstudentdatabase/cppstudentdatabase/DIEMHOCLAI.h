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
	/// Summary for DIEMHOCLAI
	/// </summary>
	public ref class DIEMHOCLAI : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd;
		DataSet^ DS = gcnew DataSet(); String^ sqlQuery;
		String^ server = "localhost";
		String^ username = "root";
		String^ password = "123456789";
		String^ database = "cppstudent";
		MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd1;
		DataSet^ DS1 = gcnew DataSet(); String^ sqlQuery1;
		MySqlConnection^ sqlConn2 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd2 = gcnew MySqlCommand();
		DataTable^ sqlDt2 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta2 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd2;
		DataSet^ DS2 = gcnew DataSet(); String^ sqlQuery2;

		MySqlConnection^ sqlConn3 = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd3 = gcnew MySqlCommand();
		DataTable^ sqlDt3 = gcnew DataTable();
		MySqlDataAdapter^ sqlDta3 = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDd3;
		DataSet^ DS3 = gcnew DataSet(); String^ sqlQuery3;
	private: System::Windows::Forms::ComboBox^ txtok;



	public:
		DIEMHOCLAI(void)
		{
			InitializeComponent();
			CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DIEMHOCLAI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnXuat;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnSua;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataGridView^ dataGridviewDiem;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtDiemThi3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtHoTen;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtMaSV;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cboMonHoc;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cboHocKi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cboLop;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cboKhoaHoc;
	private: System::Windows::Forms::Label^ label2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DIEMHOCLAI::typeid));
			this->btnXuat = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewDiem = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtDiemThi3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtHoTen = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtMaSV = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtok = (gcnew System::Windows::Forms::ComboBox());
			this->cboMonHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cboHocKi = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cboLop = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cboKhoaHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDiem))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnXuat
			// 
			this->btnXuat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXuat->ForeColor = System::Drawing::Color::Blue;
			this->btnXuat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXuat.Image")));
			this->btnXuat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXuat->Location = System::Drawing::Point(1143, 703);
			this->btnXuat->Name = L"btnXuat";
			this->btnXuat->Size = System::Drawing::Size(137, 47);
			this->btnXuat->TabIndex = 21;
			this->btnXuat->Text = L"Print";
			this->btnXuat->UseVisualStyleBackColor = true;
			this->btnXuat->Click += gcnew System::EventHandler(this, &DIEMHOCLAI::btnXuat_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(925, 703);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(137, 47);
			this->btnExit->TabIndex = 20;
			this->btnExit->Text = L"Back";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &DIEMHOCLAI::btnExit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Image")));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->Location = System::Drawing::Point(701, 703);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 47);
			this->btnDelete->TabIndex = 19;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DIEMHOCLAI::btnDelete_Click);
			// 
			// btnSua
			// 
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSua->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSua.Image")));
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(468, 703);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(137, 47);
			this->btnSua->TabIndex = 18;
			this->btnSua->Text = L"Fix";
			this->btnSua->UseVisualStyleBackColor = true;
			this->btnSua->Click += gcnew System::EventHandler(this, &DIEMHOCLAI::btnSua_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(253, 703);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(137, 47);
			this->btnAdd->TabIndex = 17;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DIEMHOCLAI::btnAdd_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridviewDiem);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(254, 503);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1032, 154);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Danh sách";
			// 
			// dataGridviewDiem
			// 
			this->dataGridviewDiem->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDiem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewDiem->Location = System::Drawing::Point(6, 40);
			this->dataGridviewDiem->Name = L"dataGridviewDiem";
			this->dataGridviewDiem->RowHeadersWidth = 51;
			this->dataGridviewDiem->Size = System::Drawing::Size(1020, 94);
			this->dataGridviewDiem->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtDiemThi3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txtHoTen);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->txtMaSV);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(254, 389);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1032, 108);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Thông tin chi tiết";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &DIEMHOCLAI::groupBox2_Enter);
			// 
			// txtDiemThi3
			// 
			this->txtDiemThi3->Location = System::Drawing::Point(821, 38);
			this->txtDiemThi3->Name = L"txtDiemThi3";
			this->txtDiemThi3->Size = System::Drawing::Size(70, 30);
			this->txtDiemThi3->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(634, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 25);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Điểm cải thiện";
			// 
			// txtHoTen
			// 
			this->txtHoTen->Location = System::Drawing::Point(448, 40);
			this->txtHoTen->Name = L"txtHoTen";
			this->txtHoTen->Size = System::Drawing::Size(163, 30);
			this->txtHoTen->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(298, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Họ và tên";
			// 
			// txtMaSV
			// 
			this->txtMaSV->Location = System::Drawing::Point(168, 47);
			this->txtMaSV->Name = L"txtMaSV";
			this->txtMaSV->Size = System::Drawing::Size(112, 30);
			this->txtMaSV->TabIndex = 5;
			this->txtMaSV->TextChanged += gcnew System::EventHandler(this, &DIEMHOCLAI::txtMaSV_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Mã sinh viên";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtok);
			this->groupBox1->Controls->Add(this->cboMonHoc);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->cboHocKi);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->cboLop);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->cboKhoaHoc);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(254, 159);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1032, 224);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lựa chọn";
			// 
			// txtok
			// 
			this->txtok->FormattingEnabled = true;
			this->txtok->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L""
			});
			this->txtok->Location = System::Drawing::Point(392, 172);
			this->txtok->Name = L"txtok";
			this->txtok->Size = System::Drawing::Size(61, 33);
			this->txtok->TabIndex = 30;
			// 
			// cboMonHoc
			// 
			this->cboMonHoc->FormattingEnabled = true;
			this->cboMonHoc->Location = System::Drawing::Point(129, 127);
			this->cboMonHoc->Name = L"cboMonHoc";
			this->cboMonHoc->Size = System::Drawing::Size(324, 33);
			this->cboMonHoc->TabIndex = 4;
			this->cboMonHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &DIEMHOCLAI::cboMonHoc_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Môn học";
			// 
			// cboHocKi
			// 
			this->cboHocKi->FormattingEnabled = true;
			this->cboHocKi->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L""
			});
			this->cboHocKi->Location = System::Drawing::Point(392, 82);
			this->cboHocKi->Name = L"cboHocKi";
			this->cboHocKi->Size = System::Drawing::Size(61, 33);
			this->cboHocKi->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(280, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Học kì";
			// 
			// cboLop
			// 
			this->cboLop->FormattingEnabled = true;
			this->cboLop->Location = System::Drawing::Point(129, 77);
			this->cboLop->Name = L"cboLop";
			this->cboLop->Size = System::Drawing::Size(131, 33);
			this->cboLop->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Lớp";
			// 
			// cboKhoaHoc
			// 
			this->cboKhoaHoc->FormattingEnabled = true;
			this->cboKhoaHoc->Location = System::Drawing::Point(129, 35);
			this->cboKhoaHoc->Name = L"cboKhoaHoc";
			this->cboKhoaHoc->Size = System::Drawing::Size(324, 33);
			this->cboKhoaHoc->TabIndex = 1;
			this->cboKhoaHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &DIEMHOCLAI::cboKhoaHoc_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Khoa";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(544, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(486, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"QUẢN LÝ ĐIỂM HỌC CẢI THIỆN";
			// 
			// DIEMHOCLAI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->btnXuat);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSua);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"DIEMHOCLAI";
			this->Text = L"DIEMHOCLAI";
			this->Load += gcnew System::EventHandler(this, &DIEMHOCLAI::DIEMHOCLAI_Load);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDiem))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void Upload() {

			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from hoccaithien";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewDiem->DataSource = sqlDt;

		 }
	private: System::Void DIEMHOCLAI_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
		//Add khoa vaof cbo
		sqlConn1->Open();
		cboKhoaHoc->Items->Clear();
		cboKhoaHoc->Text = "";
		String^ aaa = "Select FacultyName from faculty";
		sqlCmd1 = gcnew MySqlCommand(aaa, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();

		while (sqlDd1->Read()) {
			cboKhoaHoc->Items->Add(sqlDd1->GetString(0));
		}
		sqlConn1->Close();
	}
private: System::Void cboKhoaHoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { 

	//Add lop trong khoa
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();
		cboLop->Items->Clear();
		cboLop->Text = "";
		String^ aa = "Select ClassName from class where FacultyName = '" + cboKhoaHoc->Text + "'";
		sqlCmd = gcnew MySqlCommand(aa, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();

		while (sqlDd->Read()) {
			cboLop->Items->Add(sqlDd->GetString(0));
		}
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}
	//Add mon vaof cbo

	sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	sqlConn2->Open();
	cboMonHoc->Items->Clear();
	cboMonHoc->Text = "";
	String^ aaaq = "Select SubjectName from subject1";
	sqlCmd2 = gcnew MySqlCommand(aaaq, sqlConn2);
	sqlDd2 = sqlCmd2->ExecuteReader();

	while (sqlDd2->Read()) {
		cboMonHoc->Items->Add(sqlDd2->GetString(0));
	}
	sqlConn2->Close();

}
private: System::Void cboMonHoc_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();
		cboHocKi->Items->Clear();
		cboHocKi->Text = "";
		String^ aa = "Select HK from result where SubjectName = '" + cboMonHoc->Text + "'";
		sqlCmd = gcnew MySqlCommand(aa, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();

		while (sqlDd->Read()) {
			cboHocKi->Items->Add(sqlDd->GetString(0));
		}
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}
	

	try {
		sqlConn->Open();
		txtok->Items->Clear();
		txtok->Text = "";
		String^ aa = "Select HK from result where SubjectName = '" + cboMonHoc->Text + "'";
		sqlCmd = gcnew MySqlCommand(aa, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();

		while (sqlDd->Read()) {
			txtok->Items->Add(sqlDd->GetString(0));
		}
		sqlConn->Close();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn1->Open();

		txtDiemThi3->Text = "";
		String^ ii = "Select ScoreTotal from result where StudentID = '" + txtMaSV->Text + "' and SubjectName='" + cboMonHoc->Text + "'";
		sqlCmd1 = gcnew MySqlCommand(ii, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();
		sqlDd1->Read();
		String^ saa = sqlDd1->GetString(0);
		txtDiemThi3->Text = saa;
		sqlConn1->Close();
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn1->Close();
	}

	
}
private: System::Void txtMaSV_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn1->Open();
		cboLop->Items->Clear();
		cboLop->Text = "";
		String^ io = "Select ClassName from class c, student s where c.ClassCode = c.ClassCode and StudentID = '" + txtMaSV->Text + "'";
		sqlCmd1 = gcnew MySqlCommand(io, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();
		while (sqlDd1->Read()) {
			String^ sao = sqlDd1->GetString(0);
			cboLop->Text = sao;
			sqlConn1->Close();
		}
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn1->Close();
	}

	//Add ten vaof txt


	sqlConn3->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn3->Open();
		cboMonHoc->Items->Clear();
		cboMonHoc->Text = "";
		String^ i = "Select Fullname from student where StudentID = '" + txtMaSV->Text + "'";
		sqlCmd3 = gcnew MySqlCommand(i, sqlConn3);
		sqlDd3 = sqlCmd3->ExecuteReader();
		while (sqlDd3->Read()) {
			String^ sa = sqlDd3->GetString(0);
			txtHoTen->Text = sa;
			sqlConn3->Close();
		}
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn3->Close();
	}
	
	
	//Cập nhật điểm qua mã sinh viên và môn học

	

}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn->Open();
		sqlQuery = "insert into hoccaithien(StudentID, StudentName, ClassName,SubjectName, DiemHocCaiThien)" + "value('" +txtMaSV->Text+ "','" + txtHoTen->Text + "','" + cboLop->Text + "','" + cboMonHoc->Text + "','"+txtDiemThi3->Text + "')";
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
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnSua_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
	try {
		sqlConn->Open();
		sqlQuery = "Update hoccaithien Set StudentID=N'" + txtMaSV->Text + "',StudentName='" +
			txtHoTen->Text + "',ClassName='" +cboLop->Text + "',SubjectName='" +
			cboMonHoc->Text + "',DiemHocCaiThien='" + txtDiemThi3->Text + "' where StudentID='" + txtMaSV->Text + "' ";
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
}
private: System::Void btnXuat_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		if (dataGridviewDiem->Rows->Count > 0)
		{

			using namespace::Microsoft::Office::Interop::Excel;
			ApplicationClass^ xcelApp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();

			Microsoft::Office::Interop::Excel::_Workbook^ workbook = xcelApp->Workbooks->Add(Type::Missing);
			// creating new Excelsheet in workbook  
			Microsoft::Office::Interop::Excel::_Worksheet^ worksheet = nullptr;
			// see the excel sheet behind the program  
			xcelApp->Visible = true;


			worksheet == workbook->Sheets["Sheet1"];
			worksheet == workbook->ActiveSheet;
			// changing the name of active sheet  
			xcelApp->Name == "ok";

			for (int i = 1; i < dataGridviewDiem->Columns->Count + 1; i++)
			{
				xcelApp->Cells[1, i] = dataGridviewDiem->Columns[i - 1]->HeaderText;
			}

			for (int i = 0; i < dataGridviewDiem->Rows->Count; i++)
			{
				for (int j = 0; j < dataGridviewDiem->Columns->Count; j++)
				{
					xcelApp->Cells[i + 2, j + 1] = dataGridviewDiem->Rows[i]->Cells[j]->Value->ToString();
				}
			}
			xcelApp->Columns->AutoFit();
			xcelApp->Visible = true;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
