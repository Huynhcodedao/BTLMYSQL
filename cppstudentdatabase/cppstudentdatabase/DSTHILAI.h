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
	/// Summary for DSTHILAI
	/// </summary>
	public ref class DSTHILAI : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::DataGridView^ dataGridViewhoclai;
	public:
		DSTHILAI(void)
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
		~DSTHILAI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnXuat;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ cboLoai;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTimKiem;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ cboMonHoc;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cboHocKi;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cboLop;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cboKhoaHoc;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridviewThiLai;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DSTHILAI::typeid));
			this->btnXuat = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cboLoai = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTimKiem = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cboMonHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cboHocKi = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cboLop = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cboKhoaHoc = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridviewThiLai = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewhoclai = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewThiLai))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewhoclai))->BeginInit();
			this->SuspendLayout();
			// 
			// btnXuat
			// 
			this->btnXuat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnXuat->ForeColor = System::Drawing::Color::Blue;
			this->btnXuat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnXuat.Image")));
			this->btnXuat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXuat->Location = System::Drawing::Point(1281, 285);
			this->btnXuat->Margin = System::Windows::Forms::Padding(4);
			this->btnXuat->Name = L"btnXuat";
			this->btnXuat->Size = System::Drawing::Size(178, 51);
			this->btnXuat->TabIndex = 18;
			this->btnXuat->Text = L"Print table";
			this->btnXuat->UseVisualStyleBackColor = true;
			this->btnXuat->Click += gcnew System::EventHandler(this, &DSTHILAI::btnXuat_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cboLoai);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(820, 184);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(411, 172);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &DSTHILAI::groupBox2_Enter);
			// 
			// cboLoai
			// 
			this->cboLoai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboLoai->FormattingEnabled = true;
			this->cboLoai->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Hoc cai thien", L"Hoc lai" });
			this->cboLoai->Location = System::Drawing::Point(153, 70);
			this->cboLoai->Margin = System::Windows::Forms::Padding(4);
			this->cboLoai->Name = L"cboLoai";
			this->cboLoai->Size = System::Drawing::Size(177, 27);
			this->cboLoai->TabIndex = 10;
			this->cboLoai->SelectedIndexChanged += gcnew System::EventHandler(this, &DSTHILAI::cboLoai_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 74);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Loại";
			// 
			// btnTimKiem
			// 
			this->btnTimKiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTimKiem->ForeColor = System::Drawing::Color::Blue;
			this->btnTimKiem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTimKiem.Image")));
			this->btnTimKiem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTimKiem->Location = System::Drawing::Point(1279, 208);
			this->btnTimKiem->Margin = System::Windows::Forms::Padding(4);
			this->btnTimKiem->Name = L"btnTimKiem";
			this->btnTimKiem->Size = System::Drawing::Size(178, 51);
			this->btnTimKiem->TabIndex = 16;
			this->btnTimKiem->Text = L"Display";
			this->btnTimKiem->UseVisualStyleBackColor = true;
			this->btnTimKiem->Click += gcnew System::EventHandler(this, &DSTHILAI::btnTimKiem_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cboMonHoc);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->cboHocKi);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->cboLop);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->cboKhoaHoc);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(247, 184);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(511, 174);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Lựa chọn";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &DSTHILAI::groupBox3_Enter);
			// 
			// cboMonHoc
			// 
			this->cboMonHoc->FormattingEnabled = true;
			this->cboMonHoc->Location = System::Drawing::Point(105, 126);
			this->cboMonHoc->Margin = System::Windows::Forms::Padding(4);
			this->cboMonHoc->Name = L"cboMonHoc";
			this->cboMonHoc->Size = System::Drawing::Size(396, 33);
			this->cboMonHoc->TabIndex = 4;
			this->cboMonHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &DSTHILAI::cboMonHoc_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 135);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 25);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Môn học";
			// 
			// cboHocKi
			// 
			this->cboHocKi->FormattingEnabled = true;
			this->cboHocKi->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L""
			});
			this->cboHocKi->Location = System::Drawing::Point(421, 79);
			this->cboHocKi->Margin = System::Windows::Forms::Padding(4);
			this->cboHocKi->Name = L"cboHocKi";
			this->cboHocKi->Size = System::Drawing::Size(80, 33);
			this->cboHocKi->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(305, 87);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Học kì";
			// 
			// cboLop
			// 
			this->cboLop->FormattingEnabled = true;
			this->cboLop->Location = System::Drawing::Point(105, 79);
			this->cboLop->Margin = System::Windows::Forms::Padding(4);
			this->cboLop->Name = L"cboLop";
			this->cboLop->Size = System::Drawing::Size(173, 33);
			this->cboLop->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 92);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Lớp";
			// 
			// cboKhoaHoc
			// 
			this->cboKhoaHoc->FormattingEnabled = true;
			this->cboKhoaHoc->Location = System::Drawing::Point(105, 30);
			this->cboKhoaHoc->Margin = System::Windows::Forms::Padding(4);
			this->cboKhoaHoc->Name = L"cboKhoaHoc";
			this->cboKhoaHoc->Size = System::Drawing::Size(396, 33);
			this->cboKhoaHoc->TabIndex = 1;
			this->cboKhoaHoc->SelectedIndexChanged += gcnew System::EventHandler(this, &DSTHILAI::cboKhoaHoc_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 39);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Khoa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(530, 71);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(544, 38);
			this->label3->TabIndex = 14;
			this->label3->Text = L"DANH SÁCH SINH VIÊN THI LẠI";
			// 
			// dataGridviewThiLai
			// 
			this->dataGridviewThiLai->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridviewThiLai->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewThiLai->Location = System::Drawing::Point(247, 387);
			this->dataGridviewThiLai->Margin = System::Windows::Forms::Padding(4);
			this->dataGridviewThiLai->Name = L"dataGridviewThiLai";
			this->dataGridviewThiLai->RowHeadersWidth = 51;
			this->dataGridviewThiLai->Size = System::Drawing::Size(1210, 169);
			this->dataGridviewThiLai->TabIndex = 12;
			// 
			// dataGridViewhoclai
			// 
			this->dataGridViewhoclai->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewhoclai->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewhoclai->Location = System::Drawing::Point(247, 564);
			this->dataGridViewhoclai->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewhoclai->Name = L"dataGridViewhoclai";
			this->dataGridViewhoclai->RowHeadersWidth = 51;
			this->dataGridViewhoclai->Size = System::Drawing::Size(1210, 228);
			this->dataGridViewhoclai->TabIndex = 19;
			// 
			// DSTHILAI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1873, 1051);
			this->Controls->Add(this->dataGridViewhoclai);
			this->Controls->Add(this->dataGridviewThiLai);
			this->Controls->Add(this->btnXuat);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnTimKiem);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label3);
			this->Name = L"DSTHILAI";
			this->Text = L"DSTHILAI";
			this->Load += gcnew System::EventHandler(this, &DSTHILAI::DSTHILAI_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewThiLai))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewhoclai))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void Upload1() {

			 sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			 sqlConn->Open();
			 sqlCmd->Connection = sqlConn;
			 sqlCmd->CommandText = "select *from hoccaithien where SubjectName = '"+cboMonHoc->Text+"' and ClassName='"+cboLop->Text+"'";
			 sqlDd = sqlCmd->ExecuteReader();
			 sqlDt->Load(sqlDd);
			 sqlDd->Close();
			 sqlConn->Close();
			 dataGridviewThiLai->DataSource = sqlDt;

		 }
		private: System::Void Upload2() {

			sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
			sqlConn1->Open();
			sqlCmd1->Connection = sqlConn1;
			sqlCmd1->CommandText = "select *from result where ScoreTotal = '0' and SubjectName ='"+cboMonHoc->Text +"' and  Faculty='"+cboKhoaHoc->Text+"'and HK ='"+cboHocKi->Text+"' ";
			sqlDd1 = sqlCmd1->ExecuteReader();
			sqlDt1->Load(sqlDd1);
			sqlDd1->Close();
			sqlConn1->Close();
			dataGridViewhoclai->DataSource = sqlDt1;

				 }
	private: System::Void DSTHILAI_Load(System::Object^ sender, System::EventArgs^ e) {

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
	//Add khoa vaof cbo
	//sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;


	try {

		sqlConn->Open();
		cboMonHoc->Items->Clear();
		cboMonHoc->Text = "";
		String^ b = "Select SubjectName from subject1";
		sqlCmd = gcnew MySqlCommand(b, sqlConn);
		sqlDd = sqlCmd->ExecuteReader();

		while (sqlDd->Read()) {
			cboMonHoc->Items->Add(sqlDd->GetString(0));
		}

		sqlConn->Close();
	}

	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}
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
		//MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();

	}


}
private: System::Void btnTimKiem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
	if (cboLoai->Text == "Hoc cai thien") {
		Upload1();
	}
	else {
	Upload2();
	}
	
	}
	catch (Exception^ ex) {

	}
	

}
private: System::Void btnXuat_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		if (dataGridviewThiLai->Rows->Count > 0)
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

			for (int i = 1; i < dataGridviewThiLai->Columns->Count + 1; i++)
			{
				xcelApp->Cells[1, i] = dataGridviewThiLai->Columns[i - 1]->HeaderText;
			}

			for (int i = 0; i < dataGridviewThiLai->Rows->Count; i++)
			{
				for (int j = 0; j < dataGridviewThiLai->Columns->Count; j++)
				{
					xcelApp->Cells[i + 2, j + 1] = dataGridviewThiLai->Rows[i]->Cells[j]->Value->ToString();
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
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cboLoai_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
