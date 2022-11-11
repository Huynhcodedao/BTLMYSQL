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
	/// Summary for TiemDiemSV
	/// </summary>
	public ref class TiemDiemSV : public System::Windows::Forms::Form
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
	public:
		TiemDiemSV(void)
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
		~TiemDiemSV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::ComboBox^ cboKhoa;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnXuat;
	private: System::Windows::Forms::Button^ btnThoat;
	private: System::Windows::Forms::Button^ btnTimKiem;
	private: System::Windows::Forms::ComboBox^ cboMonHoc;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtMaSV;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridviewDIEMSV;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TiemDiemSV::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cboKhoa = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnXuat = (gcnew System::Windows::Forms::Button());
			this->btnThoat = (gcnew System::Windows::Forms::Button());
			this->btnTimKiem = (gcnew System::Windows::Forms::Button());
			this->cboMonHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtMaSV = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridviewDIEMSV = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDIEMSV))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cboKhoa);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(233, 202);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(320, 113);
			this->groupBox3->TabIndex = 30;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Lựa chọn";
			// 
			// cboKhoa
			// 
			this->cboKhoa->FormattingEnabled = true;
			this->cboKhoa->Location = System::Drawing::Point(183, 48);
			this->cboKhoa->Name = L"cboKhoa";
			this->cboKhoa->Size = System::Drawing::Size(121, 33);
			this->cboKhoa->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 23);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Mã khoa";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnXuat);
			this->groupBox2->Controls->Add(this->btnThoat);
			this->groupBox2->Controls->Add(this->btnTimKiem);
			this->groupBox2->Controls->Add(this->cboMonHoc);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtMaSV);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(233, 321);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(320, 369);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tìm kiêm";
			// 
			// btnXuat
			// 
			this->btnXuat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXuat->ForeColor = System::Drawing::Color::Blue;
			this->btnXuat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXuat.Image")));
			this->btnXuat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXuat->Location = System::Drawing::Point(55, 284);
			this->btnXuat->Name = L"btnXuat";
			this->btnXuat->Size = System::Drawing::Size(151, 47);
			this->btnXuat->TabIndex = 11;
			this->btnXuat->Text = L"Print table";
			this->btnXuat->UseVisualStyleBackColor = true;
			this->btnXuat->Click += gcnew System::EventHandler(this, &TiemDiemSV::btnXuat_Click);
			// 
			// btnThoat
			// 
			this->btnThoat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThoat->ForeColor = System::Drawing::Color::Blue;
			this->btnThoat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnThoat.Image")));
			this->btnThoat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnThoat->Location = System::Drawing::Point(55, 210);
			this->btnThoat->Name = L"btnThoat";
			this->btnThoat->Size = System::Drawing::Size(153, 47);
			this->btnThoat->TabIndex = 10;
			this->btnThoat->Text = L"Back";
			this->btnThoat->UseVisualStyleBackColor = true;
			this->btnThoat->Click += gcnew System::EventHandler(this, &TiemDiemSV::btnThoat_Click);
			// 
			// btnTimKiem
			// 
			this->btnTimKiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTimKiem->ForeColor = System::Drawing::Color::Blue;
			this->btnTimKiem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTimKiem.Image")));
			this->btnTimKiem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTimKiem->Location = System::Drawing::Point(55, 139);
			this->btnTimKiem->Name = L"btnTimKiem";
			this->btnTimKiem->Size = System::Drawing::Size(153, 47);
			this->btnTimKiem->TabIndex = 3;
			this->btnTimKiem->Text = L"Search";
			this->btnTimKiem->UseVisualStyleBackColor = true;
			this->btnTimKiem->Click += gcnew System::EventHandler(this, &TiemDiemSV::btnTimKiem_Click);
			// 
			// cboMonHoc
			// 
			this->cboMonHoc->FormattingEnabled = true;
			this->cboMonHoc->Location = System::Drawing::Point(183, 72);
			this->cboMonHoc->Name = L"cboMonHoc";
			this->cboMonHoc->Size = System::Drawing::Size(121, 33);
			this->cboMonHoc->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Môn học";
			// 
			// txtMaSV
			// 
			this->txtMaSV->Location = System::Drawing::Point(183, 37);
			this->txtMaSV->Name = L"txtMaSV";
			this->txtMaSV->Size = System::Drawing::Size(121, 30);
			this->txtMaSV->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Mã Sinh Viên";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridviewDIEMSV);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(559, 208);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(820, 482);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Thông tin chi tiết";
			// 
			// dataGridviewDIEMSV
			// 
			this->dataGridviewDIEMSV->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewDIEMSV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewDIEMSV->Location = System::Drawing::Point(15, 44);
			this->dataGridviewDIEMSV->Name = L"dataGridviewDIEMSV";
			this->dataGridviewDIEMSV->RowHeadersWidth = 51;
			this->dataGridviewDIEMSV->Size = System::Drawing::Size(799, 415);
			this->dataGridviewDIEMSV->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(615, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(397, 31);
			this->label1->TabIndex = 27;
			this->label1->Text = L"THÔNG TIN ĐIỂM SINH VIÊN";
			// 
			// TiemDiemSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"TiemDiemSV";
			this->Text = L"TiemDiemSV";
			this->Load += gcnew System::EventHandler(this, &TiemDiemSV::TiemDiemSV_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewDIEMSV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void Upload() {

			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from student";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewDIEMSV->DataSource = sqlDt;

		 }
				 private: System::Void SearchUpload() {

					 sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
					 sqlConn2->Open();
					 sqlCmd2->Connection = sqlConn2;
					 sqlCmd2->CommandText = "Select * From result  where StudentID='" + txtMaSV->Text + "' and SubjectName='" + cboMonHoc->Text + "'";;
					 sqlDd2 = sqlCmd2->ExecuteReader();
					 sqlDt2->Load(sqlDd2);
					 sqlDd2->Close();
					 sqlConn2->Close();
					 dataGridviewDIEMSV->DataSource = sqlDt2;

				 }
	private: System::Void TiemDiemSV_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

		//Add khoa vaof cbo

		sqlConn1->Open();
		cboKhoa->Items->Clear();
		cboKhoa->Text = "";
		String^ aaa = "Select FacultyName from faculty";
		sqlCmd1 = gcnew MySqlCommand(aaa, sqlConn1);
		sqlDd1 = sqlCmd1->ExecuteReader();

		while (sqlDd1->Read()) {
			cboKhoa->Items->Add(sqlDd1->GetString(0));
		}
		sqlConn1->Close();

		//Add ma mon

		sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

		try {
			sqlConn2->Open();
			cboMonHoc->Items->Clear();
			cboMonHoc->Text = "";
			String^ mon = "Select SubjectName from subject1";
			sqlCmd2 = gcnew MySqlCommand(mon, sqlConn2);
			sqlDd2 = sqlCmd2->ExecuteReader();

			while (sqlDd2->Read()) {
				cboMonHoc->Items->Add(sqlDd2->GetString(0));
			}
			
			sqlConn2->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			sqlConn1->Close();
		}
		Upload();
	}
private: System::Void btnTimKiem_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn2->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

	try {
		SearchUpload();

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn2->Close();
	}
	
}
private: System::Void btnThoat_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void btnXuat_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		if (dataGridviewDIEMSV->Rows->Count > 0)
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

			for (int i = 1; i < dataGridviewDIEMSV->Columns->Count + 1; i++)
			{
				xcelApp->Cells[1, i] = dataGridviewDIEMSV->Columns[i - 1]->HeaderText;
			}

			for (int i = 0; i < dataGridviewDIEMSV->Rows->Count; i++)
			{
				for (int j = 0; j < dataGridviewDIEMSV->Columns->Count; j++)
				{
					xcelApp->Cells[i + 2, j + 1] = dataGridviewDIEMSV ->Rows[i]->Cells[j]->Value->ToString();
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
