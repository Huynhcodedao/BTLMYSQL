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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
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
       String^ password = "123456789";String^ database = "projectstudent";
       MySqlConnection^ sqlConn1 = gcnew MySqlConnection();
       MySqlCommand^ sqlCmd1 = gcnew MySqlCommand();
       DataTable^ sqlDt1 = gcnew DataTable();
       MySqlDataAdapter^ sqlDta1 = gcnew MySqlDataAdapter();
       MySqlDataReader^ sqlDd1;
       DataSet^ DS1 = gcnew DataSet();

       String^ sqlQuery1;

    private: System::Windows::Forms::Button^ btnUpdate;
    private: System::Windows::Forms::TextBox^ txtTinChi8;


    private: System::Windows::Forms::TextBox^ txtTinChi7;

    private: System::Windows::Forms::TextBox^ txtTinChi6;

    private: System::Windows::Forms::TextBox^ txtTinChi5;

    private: System::Windows::Forms::TextBox^ txtTinChi4;

    private: System::Windows::Forms::TextBox^ txtTinChi3;
    private: System::Windows::Forms::TextBox^ txtTinChi2;
    private: System::Windows::Forms::TextBox^ txtTinChi1;
    private: System::Windows::Forms::Button^ btnResult;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::Button^ btnReset;

    private: System::Windows::Forms::DataGridView^ dataGridView1;


       
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnBack1;


    private: System::Windows::Forms::Button^ btnAdd;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::ComboBox^ cboScholarship;
    private: System::Windows::Forms::ComboBox^ cboExchange;
    private: System::Windows::Forms::ComboBox^ cboAcommodation;
    private: System::Windows::Forms::ComboBox^ cboOverseaStudent;
    private: System::Windows::Forms::ComboBox^ cboHomeStudent;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::TextBox^ txtEmail1;
    private: System::Windows::Forms::ComboBox^ cboGuidane;
    private: System::Windows::Forms::TextBox^ txtMobile1;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TextBox^ txtAddress1;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::TextBox^ txtSurname1;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::TextBox^ txtFirstname1;

    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TextBox^ txtDate;
    private: System::Windows::Forms::TextBox^ txtRanking;
    private: System::Windows::Forms::TextBox^ txtTotal;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ txtScore8;
    private: System::Windows::Forms::ComboBox^ cboModule8;
    private: System::Windows::Forms::TextBox^ txtScore7;
    private: System::Windows::Forms::ComboBox^ cboModule7;
    private: System::Windows::Forms::TextBox^ txtScore6;
    private: System::Windows::Forms::ComboBox^ cboModule6;
    private: System::Windows::Forms::TextBox^ txtScore5;
    private: System::Windows::Forms::ComboBox^ cboModule5;
    private: System::Windows::Forms::TextBox^ txtScore4;
    private: System::Windows::Forms::ComboBox^ cboModule4;
    private: System::Windows::Forms::TextBox^ txtScore3;
    private: System::Windows::Forms::ComboBox^ cboModule3;
    private: System::Windows::Forms::TextBox^ txtScore2;
    private: System::Windows::Forms::ComboBox^ cboModule2;
    private: System::Windows::Forms::TextBox^ txtScore1;
    private: System::Windows::Forms::ComboBox^ cboModule1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::TextBox^ txtCourseTutor;
    private: System::Windows::Forms::TextBox^ txtProgramLeader;
    private: System::Windows::Forms::TextBox^ txtDeanofFaculty;
    private: System::Windows::Forms::ComboBox^ cboCourse;
    private: System::Windows::Forms::TextBox^ txtFaculty;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TextBox^ txtCourseCode;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::ComboBox^ cboGender;
    private: System::Windows::Forms::TextBox^ txtEmail;
    private: System::Windows::Forms::TextBox^ txtMobile;
    private: System::Windows::Forms::TextBox^ txtDOB;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::TextBox^ txtStudentID;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ txtAddress;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::TextBox^ txtSurname;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TextBox^ txtFirstname;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::TabPage^ tabPage2;

     //  String^ database = "projectstudent";
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->btnResult = (gcnew System::Windows::Forms::Button());
            this->btnUpdate = (gcnew System::Windows::Forms::Button());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnBack1 = (gcnew System::Windows::Forms::Button());
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->cboScholarship = (gcnew System::Windows::Forms::ComboBox());
            this->cboExchange = (gcnew System::Windows::Forms::ComboBox());
            this->cboAcommodation = (gcnew System::Windows::Forms::ComboBox());
            this->cboOverseaStudent = (gcnew System::Windows::Forms::ComboBox());
            this->cboHomeStudent = (gcnew System::Windows::Forms::ComboBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->txtEmail1 = (gcnew System::Windows::Forms::TextBox());
            this->cboGuidane = (gcnew System::Windows::Forms::ComboBox());
            this->txtMobile1 = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->txtAddress1 = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->txtSurname1 = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->txtFirstname1 = (gcnew System::Windows::Forms::TextBox());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->txtTinChi8 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi7 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi6 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi5 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi4 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi3 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi2 = (gcnew System::Windows::Forms::TextBox());
            this->txtTinChi1 = (gcnew System::Windows::Forms::TextBox());
            this->txtDate = (gcnew System::Windows::Forms::TextBox());
            this->txtRanking = (gcnew System::Windows::Forms::TextBox());
            this->txtTotal = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->txtScore8 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule8 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore7 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule7 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore6 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule6 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore5 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule5 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore4 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule4 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore3 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule3 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore2 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule2 = (gcnew System::Windows::Forms::ComboBox());
            this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
            this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->txtCourseTutor = (gcnew System::Windows::Forms::TextBox());
            this->txtProgramLeader = (gcnew System::Windows::Forms::TextBox());
            this->txtDeanofFaculty = (gcnew System::Windows::Forms::TextBox());
            this->cboCourse = (gcnew System::Windows::Forms::ComboBox());
            this->txtFaculty = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->txtCourseCode = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->cboGender = (gcnew System::Windows::Forms::ComboBox());
            this->txtEmail = (gcnew System::Windows::Forms::TextBox());
            this->txtMobile = (gcnew System::Windows::Forms::TextBox());
            this->txtDOB = (gcnew System::Windows::Forms::TextBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->txtAddress = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->txtSurname = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabControl1->Location = System::Drawing::Point(0, 2);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1576, 791);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::White;
            this->tabPage1->Controls->Add(this->panel6);
            this->tabPage1->Controls->Add(this->panel5);
            this->tabPage1->Controls->Add(this->panel4);
            this->tabPage1->Controls->Add(this->panel3);
            this->tabPage1->Controls->Add(this->panel2);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1568, 762);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"UET System";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel6->Controls->Add(this->btnReset);
            this->panel6->Controls->Add(this->btnResult);
            this->panel6->Controls->Add(this->btnUpdate);
            this->panel6->Controls->Add(this->btnExit);
            this->panel6->Controls->Add(this->btnBack1);
            this->panel6->Controls->Add(this->btnAdd);
            this->panel6->Location = System::Drawing::Point(8, 681);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1060, 85);
            this->panel6->TabIndex = 5;
            // 
            // btnResult
            // 
            this->btnResult->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnResult.Image")));
            this->btnResult->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnResult->Location = System::Drawing::Point(366, 23);
            this->btnResult->Name = L"btnResult";
            this->btnResult->Size = System::Drawing::Size(143, 35);
            this->btnResult->TabIndex = 5;
            this->btnResult->Text = L"Result";
            this->btnResult->UseVisualStyleBackColor = true;
            this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click_1);
            // 
            // btnUpdate
            // 
            this->btnUpdate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUpdate.Image")));
            this->btnUpdate->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnUpdate->Location = System::Drawing::Point(189, 23);
            this->btnUpdate->Name = L"btnUpdate";
            this->btnUpdate->Size = System::Drawing::Size(143, 35);
            this->btnUpdate->TabIndex = 4;
            this->btnUpdate->Text = L"Update";
            this->btnUpdate->UseVisualStyleBackColor = true;
            // 
            // btnExit
            // 
            this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
            this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnExit->Location = System::Drawing::Point(897, 23);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(143, 35);
            this->btnExit->TabIndex = 3;
            this->btnExit->Text = L"Exit";
            this->btnExit->UseVisualStyleBackColor = true;
            this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
            // 
            // btnBack1
            // 
            this->btnBack1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack1.Image")));
            this->btnBack1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnBack1->Location = System::Drawing::Point(726, 23);
            this->btnBack1->Name = L"btnBack1";
            this->btnBack1->Size = System::Drawing::Size(143, 35);
            this->btnBack1->TabIndex = 2;
            this->btnBack1->Text = L"Back";
            this->btnBack1->UseVisualStyleBackColor = true;
            this->btnBack1->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
            // 
            // btnAdd
            // 
            this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
            this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnAdd->Location = System::Drawing::Point(19, 23);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(143, 35);
            this->btnAdd->TabIndex = 0;
            this->btnAdd->Text = L"Add";
            this->btnAdd->UseVisualStyleBackColor = true;
            this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel5->Controls->Add(this->cboScholarship);
            this->panel5->Controls->Add(this->cboExchange);
            this->panel5->Controls->Add(this->cboAcommodation);
            this->panel5->Controls->Add(this->cboOverseaStudent);
            this->panel5->Controls->Add(this->cboHomeStudent);
            this->panel5->Controls->Add(this->label22);
            this->panel5->Controls->Add(this->label23);
            this->panel5->Controls->Add(this->label18);
            this->panel5->Controls->Add(this->label20);
            this->panel5->Controls->Add(this->label19);
            this->panel5->Location = System::Drawing::Point(540, 409);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(528, 266);
            this->panel5->TabIndex = 4;
            // 
            // cboScholarship
            // 
            this->cboScholarship->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboScholarship->FormattingEnabled = true;
            this->cboScholarship->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes", L"No" });
            this->cboScholarship->Location = System::Drawing::Point(246, 191);
            this->cboScholarship->Name = L"cboScholarship";
            this->cboScholarship->Size = System::Drawing::Size(260, 33);
            this->cboScholarship->TabIndex = 50;
            this->cboScholarship->Text = L"No";
            // 
            // cboExchange
            // 
            this->cboExchange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboExchange->FormattingEnabled = true;
            this->cboExchange->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes", L"No" });
            this->cboExchange->Location = System::Drawing::Point(246, 148);
            this->cboExchange->Name = L"cboExchange";
            this->cboExchange->Size = System::Drawing::Size(260, 33);
            this->cboExchange->TabIndex = 49;
            this->cboExchange->Text = L"No";
            // 
            // cboAcommodation
            // 
            this->cboAcommodation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboAcommodation->FormattingEnabled = true;
            this->cboAcommodation->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes", L"No" });
            this->cboAcommodation->Location = System::Drawing::Point(246, 105);
            this->cboAcommodation->Name = L"cboAcommodation";
            this->cboAcommodation->Size = System::Drawing::Size(260, 33);
            this->cboAcommodation->TabIndex = 48;
            this->cboAcommodation->Text = L"No";
            // 
            // cboOverseaStudent
            // 
            this->cboOverseaStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboOverseaStudent->FormattingEnabled = true;
            this->cboOverseaStudent->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes", L"No" });
            this->cboOverseaStudent->Location = System::Drawing::Point(246, 61);
            this->cboOverseaStudent->Name = L"cboOverseaStudent";
            this->cboOverseaStudent->Size = System::Drawing::Size(260, 33);
            this->cboOverseaStudent->TabIndex = 47;
            this->cboOverseaStudent->Text = L"No";
            // 
            // cboHomeStudent
            // 
            this->cboHomeStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboHomeStudent->FormattingEnabled = true;
            this->cboHomeStudent->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Yes", L"No" });
            this->cboHomeStudent->Location = System::Drawing::Point(246, 17);
            this->cboHomeStudent->Name = L"cboHomeStudent";
            this->cboHomeStudent->Size = System::Drawing::Size(260, 33);
            this->cboHomeStudent->TabIndex = 44;
            this->cboHomeStudent->Text = L"No";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(19, 189);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(126, 25);
            this->label22->TabIndex = 46;
            this->label22->Text = L"Scholarship";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(19, 148);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(108, 25);
            this->label23->TabIndex = 45;
            this->label23->Text = L"Exchange";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(19, 105);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(155, 25);
            this->label18->TabIndex = 44;
            this->label18->Text = L"Acommodation";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(19, 23);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(149, 25);
            this->label20->TabIndex = 42;
            this->label20->Text = L"Home Student";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(19, 64);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(175, 25);
            this->label19->TabIndex = 43;
            this->label19->Text = L"Oversea Student";
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel4->Controls->Add(this->txtEmail1);
            this->panel4->Controls->Add(this->cboGuidane);
            this->panel4->Controls->Add(this->txtMobile1);
            this->panel4->Controls->Add(this->label21);
            this->panel4->Controls->Add(this->txtAddress1);
            this->panel4->Controls->Add(this->label35);
            this->panel4->Controls->Add(this->txtSurname1);
            this->panel4->Controls->Add(this->label32);
            this->panel4->Controls->Add(this->txtFirstname1);
            this->panel4->Controls->Add(this->label36);
            this->panel4->Controls->Add(this->label33);
            this->panel4->Controls->Add(this->label34);
            this->panel4->Location = System::Drawing::Point(6, 409);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(528, 266);
            this->panel4->TabIndex = 3;
            // 
            // txtEmail1
            // 
            this->txtEmail1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtEmail1->Location = System::Drawing::Point(243, 228);
            this->txtEmail1->Name = L"txtEmail1";
            this->txtEmail1->Size = System::Drawing::Size(260, 30);
            this->txtEmail1->TabIndex = 48;
            // 
            // cboGuidane
            // 
            this->cboGuidane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboGuidane->FormattingEnabled = true;
            this->cboGuidane->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Bố ", L"Mẹ" });
            this->cboGuidane->Location = System::Drawing::Point(243, 17);
            this->cboGuidane->Name = L"cboGuidane";
            this->cboGuidane->Size = System::Drawing::Size(260, 33);
            this->cboGuidane->TabIndex = 56;
            this->cboGuidane->Text = L"Bố";
            this->cboGuidane->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboGuidane_SelectedIndexChanged);
            // 
            // txtMobile1
            // 
            this->txtMobile1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtMobile1->Location = System::Drawing::Point(243, 187);
            this->txtMobile1->Name = L"txtMobile1";
            this->txtMobile1->Size = System::Drawing::Size(260, 30);
            this->txtMobile1->TabIndex = 47;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(25, 225);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(65, 25);
            this->label21->TabIndex = 47;
            this->label21->Text = L"Email";
            // 
            // txtAddress1
            // 
            this->txtAddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtAddress1->Location = System::Drawing::Point(243, 146);
            this->txtAddress1->Name = L"txtAddress1";
            this->txtAddress1->Size = System::Drawing::Size(260, 30);
            this->txtAddress1->TabIndex = 46;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(25, 23);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(93, 25);
            this->label35->TabIndex = 42;
            this->label35->Text = L"Guidane";
            // 
            // txtSurname1
            // 
            this->txtSurname1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtSurname1->Location = System::Drawing::Point(243, 105);
            this->txtSurname1->Name = L"txtSurname1";
            this->txtSurname1->Size = System::Drawing::Size(260, 30);
            this->txtSurname1->TabIndex = 45;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(25, 184);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(76, 25);
            this->label32->TabIndex = 46;
            this->label32->Text = L"Mobile";
            // 
            // txtFirstname1
            // 
            this->txtFirstname1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFirstname1->Location = System::Drawing::Point(243, 64);
            this->txtFirstname1->Name = L"txtFirstname1";
            this->txtFirstname1->Size = System::Drawing::Size(260, 30);
            this->txtFirstname1->TabIndex = 44;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(25, 64);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(107, 25);
            this->label36->TabIndex = 43;
            this->label36->Text = L"Firstname";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(25, 143);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(92, 25);
            this->label33->TabIndex = 45;
            this->label33->Text = L"Address";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(25, 105);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(99, 25);
            this->label34->TabIndex = 44;
            this->label34->Text = L"Surname";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel3->Controls->Add(this->txtTinChi8);
            this->panel3->Controls->Add(this->txtTinChi7);
            this->panel3->Controls->Add(this->txtTinChi6);
            this->panel3->Controls->Add(this->txtTinChi5);
            this->panel3->Controls->Add(this->txtTinChi4);
            this->panel3->Controls->Add(this->txtTinChi3);
            this->panel3->Controls->Add(this->txtTinChi2);
            this->panel3->Controls->Add(this->txtTinChi1);
            this->panel3->Controls->Add(this->txtDate);
            this->panel3->Controls->Add(this->txtRanking);
            this->panel3->Controls->Add(this->txtTotal);
            this->panel3->Controls->Add(this->label9);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->label11);
            this->panel3->Controls->Add(this->txtScore8);
            this->panel3->Controls->Add(this->cboModule8);
            this->panel3->Controls->Add(this->txtScore7);
            this->panel3->Controls->Add(this->cboModule7);
            this->panel3->Controls->Add(this->txtScore6);
            this->panel3->Controls->Add(this->cboModule6);
            this->panel3->Controls->Add(this->txtScore5);
            this->panel3->Controls->Add(this->cboModule5);
            this->panel3->Controls->Add(this->txtScore4);
            this->panel3->Controls->Add(this->cboModule4);
            this->panel3->Controls->Add(this->txtScore3);
            this->panel3->Controls->Add(this->cboModule3);
            this->panel3->Controls->Add(this->txtScore2);
            this->panel3->Controls->Add(this->cboModule2);
            this->panel3->Controls->Add(this->txtScore1);
            this->panel3->Controls->Add(this->cboModule1);
            this->panel3->Controls->Add(this->label5);
            this->panel3->Controls->Add(this->label6);
            this->panel3->Controls->Add(this->label7);
            this->panel3->Controls->Add(this->label8);
            this->panel3->Controls->Add(this->label3);
            this->panel3->Controls->Add(this->label4);
            this->panel3->Controls->Add(this->label2);
            this->panel3->Controls->Add(this->label1);
            this->panel3->Controls->Add(this->panel7);
            this->panel3->Location = System::Drawing::Point(1074, 6);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(459, 760);
            this->panel3->TabIndex = 2;
            // 
            // txtTinChi8
            // 
            this->txtTinChi8->Enabled = false;
            this->txtTinChi8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi8->Location = System::Drawing::Point(368, 572);
            this->txtTinChi8->Name = L"txtTinChi8";
            this->txtTinChi8->Size = System::Drawing::Size(44, 30);
            this->txtTinChi8->TabIndex = 43;
            this->txtTinChi8->Text = L"0";
            this->txtTinChi8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi7
            // 
            this->txtTinChi7->Enabled = false;
            this->txtTinChi7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi7->Location = System::Drawing::Point(368, 531);
            this->txtTinChi7->Name = L"txtTinChi7";
            this->txtTinChi7->Size = System::Drawing::Size(44, 30);
            this->txtTinChi7->TabIndex = 42;
            this->txtTinChi7->Text = L"0";
            this->txtTinChi7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi6
            // 
            this->txtTinChi6->Enabled = false;
            this->txtTinChi6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi6->Location = System::Drawing::Point(368, 490);
            this->txtTinChi6->Name = L"txtTinChi6";
            this->txtTinChi6->Size = System::Drawing::Size(44, 30);
            this->txtTinChi6->TabIndex = 41;
            this->txtTinChi6->Text = L"0";
            this->txtTinChi6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi5
            // 
            this->txtTinChi5->Enabled = false;
            this->txtTinChi5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi5->Location = System::Drawing::Point(368, 449);
            this->txtTinChi5->Name = L"txtTinChi5";
            this->txtTinChi5->Size = System::Drawing::Size(44, 30);
            this->txtTinChi5->TabIndex = 40;
            this->txtTinChi5->Text = L"0";
            this->txtTinChi5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi4
            // 
            this->txtTinChi4->Enabled = false;
            this->txtTinChi4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi4->Location = System::Drawing::Point(368, 407);
            this->txtTinChi4->Name = L"txtTinChi4";
            this->txtTinChi4->Size = System::Drawing::Size(44, 30);
            this->txtTinChi4->TabIndex = 39;
            this->txtTinChi4->Text = L"0";
            this->txtTinChi4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi3
            // 
            this->txtTinChi3->Enabled = false;
            this->txtTinChi3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi3->Location = System::Drawing::Point(368, 366);
            this->txtTinChi3->Name = L"txtTinChi3";
            this->txtTinChi3->Size = System::Drawing::Size(44, 30);
            this->txtTinChi3->TabIndex = 38;
            this->txtTinChi3->Text = L"0";
            this->txtTinChi3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi2
            // 
            this->txtTinChi2->Enabled = false;
            this->txtTinChi2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi2->Location = System::Drawing::Point(368, 325);
            this->txtTinChi2->Name = L"txtTinChi2";
            this->txtTinChi2->Size = System::Drawing::Size(44, 30);
            this->txtTinChi2->TabIndex = 37;
            this->txtTinChi2->Text = L"0";
            this->txtTinChi2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtTinChi1
            // 
            this->txtTinChi1->Enabled = false;
            this->txtTinChi1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTinChi1->Location = System::Drawing::Point(368, 284);
            this->txtTinChi1->Name = L"txtTinChi1";
            this->txtTinChi1->Size = System::Drawing::Size(44, 30);
            this->txtTinChi1->TabIndex = 36;
            this->txtTinChi1->Text = L"0";
            this->txtTinChi1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtDate
            // 
            this->txtDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDate->Location = System::Drawing::Point(165, 708);
            this->txtDate->Name = L"txtDate";
            this->txtDate->Size = System::Drawing::Size(247, 30);
            this->txtDate->TabIndex = 35;
            // 
            // txtRanking
            // 
            this->txtRanking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtRanking->Location = System::Drawing::Point(165, 667);
            this->txtRanking->Name = L"txtRanking";
            this->txtRanking->Size = System::Drawing::Size(247, 30);
            this->txtRanking->TabIndex = 34;
            // 
            // txtTotal
            // 
            this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTotal->Location = System::Drawing::Point(165, 626);
            this->txtTotal->Name = L"txtTotal";
            this->txtTotal->Size = System::Drawing::Size(247, 30);
            this->txtTotal->TabIndex = 33;
            this->txtTotal->TextChanged += gcnew System::EventHandler(this, &MyForm::txtTotal_TextChanged);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(33, 708);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(57, 25);
            this->label9->TabIndex = 32;
            this->label9->Text = L"Date";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(33, 667);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(90, 25);
            this->label10->TabIndex = 31;
            this->label10->Text = L"Ranking";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(33, 626);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(61, 25);
            this->label11->TabIndex = 30;
            this->label11->Text = L"Total";
            // 
            // txtScore8
            // 
            this->txtScore8->Enabled = false;
            this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore8->Location = System::Drawing::Point(298, 573);
            this->txtScore8->Name = L"txtScore8";
            this->txtScore8->Size = System::Drawing::Size(44, 30);
            this->txtScore8->TabIndex = 29;
            this->txtScore8->Text = L"0";
            this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule8
            // 
            this->cboModule8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule8->FormattingEnabled = true;
            this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule8->Location = System::Drawing::Point(84, 572);
            this->cboModule8->Name = L"cboModule8";
            this->cboModule8->Size = System::Drawing::Size(189, 33);
            this->cboModule8->TabIndex = 28;
            this->cboModule8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule8_SelectedIndexChanged);
            // 
            // txtScore7
            // 
            this->txtScore7->Enabled = false;
            this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore7->Location = System::Drawing::Point(298, 532);
            this->txtScore7->Name = L"txtScore7";
            this->txtScore7->Size = System::Drawing::Size(44, 30);
            this->txtScore7->TabIndex = 27;
            this->txtScore7->Text = L"0";
            this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule7
            // 
            this->cboModule7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule7->FormattingEnabled = true;
            this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule7->Location = System::Drawing::Point(84, 531);
            this->cboModule7->Name = L"cboModule7";
            this->cboModule7->Size = System::Drawing::Size(189, 33);
            this->cboModule7->TabIndex = 26;
            this->cboModule7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule7_SelectedIndexChanged);
            // 
            // txtScore6
            // 
            this->txtScore6->Enabled = false;
            this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore6->Location = System::Drawing::Point(298, 491);
            this->txtScore6->Name = L"txtScore6";
            this->txtScore6->Size = System::Drawing::Size(44, 30);
            this->txtScore6->TabIndex = 25;
            this->txtScore6->Text = L"0";
            this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule6
            // 
            this->cboModule6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule6->FormattingEnabled = true;
            this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule6->Location = System::Drawing::Point(84, 490);
            this->cboModule6->Name = L"cboModule6";
            this->cboModule6->Size = System::Drawing::Size(189, 33);
            this->cboModule6->TabIndex = 24;
            this->cboModule6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule6_SelectedIndexChanged);
            // 
            // txtScore5
            // 
            this->txtScore5->Enabled = false;
            this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore5->Location = System::Drawing::Point(298, 450);
            this->txtScore5->Name = L"txtScore5";
            this->txtScore5->Size = System::Drawing::Size(44, 30);
            this->txtScore5->TabIndex = 23;
            this->txtScore5->Text = L"0";
            this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule5
            // 
            this->cboModule5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule5->FormattingEnabled = true;
            this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule5->Location = System::Drawing::Point(84, 449);
            this->cboModule5->Name = L"cboModule5";
            this->cboModule5->Size = System::Drawing::Size(189, 33);
            this->cboModule5->TabIndex = 22;
            this->cboModule5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule5_SelectedIndexChanged);
            // 
            // txtScore4
            // 
            this->txtScore4->Enabled = false;
            this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore4->Location = System::Drawing::Point(298, 408);
            this->txtScore4->Name = L"txtScore4";
            this->txtScore4->Size = System::Drawing::Size(44, 30);
            this->txtScore4->TabIndex = 21;
            this->txtScore4->Text = L"0";
            this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule4
            // 
            this->cboModule4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule4->FormattingEnabled = true;
            this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule4->Location = System::Drawing::Point(84, 407);
            this->cboModule4->Name = L"cboModule4";
            this->cboModule4->Size = System::Drawing::Size(189, 33);
            this->cboModule4->TabIndex = 20;
            this->cboModule4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule4_SelectedIndexChanged);
            // 
            // txtScore3
            // 
            this->txtScore3->Enabled = false;
            this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore3->Location = System::Drawing::Point(298, 367);
            this->txtScore3->Name = L"txtScore3";
            this->txtScore3->Size = System::Drawing::Size(44, 30);
            this->txtScore3->TabIndex = 19;
            this->txtScore3->Text = L"0";
            this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule3
            // 
            this->cboModule3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule3->FormattingEnabled = true;
            this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống",
                    L"Xử lý tín hiệu số"
            });
            this->cboModule3->Location = System::Drawing::Point(84, 366);
            this->cboModule3->Name = L"cboModule3";
            this->cboModule3->Size = System::Drawing::Size(189, 33);
            this->cboModule3->TabIndex = 18;
            this->cboModule3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule3_SelectedIndexChanged);
            // 
            // txtScore2
            // 
            this->txtScore2->Enabled = false;
            this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore2->Location = System::Drawing::Point(298, 326);
            this->txtScore2->Name = L"txtScore2";
            this->txtScore2->Size = System::Drawing::Size(44, 30);
            this->txtScore2->TabIndex = 17;
            this->txtScore2->Text = L"0";
            this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule2
            // 
            this->cboModule2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule2->FormattingEnabled = true;
            this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống"
            });
            this->cboModule2->Location = System::Drawing::Point(84, 325);
            this->cboModule2->Name = L"cboModule2";
            this->cboModule2->Size = System::Drawing::Size(189, 33);
            this->cboModule2->TabIndex = 16;
            this->cboModule2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule2_SelectedIndexChanged);
            // 
            // txtScore1
            // 
            this->txtScore1->Enabled = false;
            this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore1->Location = System::Drawing::Point(298, 285);
            this->txtScore1->Name = L"txtScore1";
            this->txtScore1->Size = System::Drawing::Size(44, 30);
            this->txtScore1->TabIndex = 15;
            this->txtScore1->Text = L"0";
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // cboModule1
            // 
            this->cboModule1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboModule1->FormattingEnabled = true;
            this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
                L"", L"Nhập môn lập trình", L"Lập trình nâng cao",
                    L"Xác suất thống kê", L"Kỹ thuật điện", L"Lập trình hướng đối tượng", L"Cấu trúc dữ liệu và giải thuật", L"Cơ sở dữ liệu", L"Tín hiệu và hệ thống"
            });
            this->cboModule1->Location = System::Drawing::Point(84, 284);
            this->cboModule1->Name = L"cboModule1";
            this->cboModule1->Size = System::Drawing::Size(189, 33);
            this->cboModule1->TabIndex = 14;
            this->cboModule1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(33, 572);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(26, 27);
            this->label5->TabIndex = 13;
            this->label5->Text = L"8";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(33, 531);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(26, 27);
            this->label6->TabIndex = 12;
            this->label6->Text = L"7";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(33, 490);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(26, 27);
            this->label7->TabIndex = 11;
            this->label7->Text = L"6";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(33, 449);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(26, 27);
            this->label8->TabIndex = 10;
            this->label8->Text = L"5";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(33, 407);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(26, 27);
            this->label3->TabIndex = 9;
            this->label3->Text = L"4";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(33, 366);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(26, 27);
            this->label4->TabIndex = 8;
            this->label4->Text = L"3";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(33, 325);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(26, 27);
            this->label2->TabIndex = 7;
            this->label2->Text = L"2";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(33, 284);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(26, 27);
            this->label1->TabIndex = 6;
            this->label1->Text = L"1";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::White;
            this->panel7->Controls->Add(this->monthCalendar1);
            this->panel7->Location = System::Drawing::Point(33, 3);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(382, 266);
            this->panel7->TabIndex = 5;
            // 
            // monthCalendar1
            // 
            this->monthCalendar1->Location = System::Drawing::Point(9, 38);
            this->monthCalendar1->Name = L"monthCalendar1";
            this->monthCalendar1->TabIndex = 0;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel2->Controls->Add(this->txtCourseTutor);
            this->panel2->Controls->Add(this->txtProgramLeader);
            this->panel2->Controls->Add(this->txtDeanofFaculty);
            this->panel2->Controls->Add(this->cboCourse);
            this->panel2->Controls->Add(this->txtFaculty);
            this->panel2->Controls->Add(this->label15);
            this->panel2->Controls->Add(this->txtCourseCode);
            this->panel2->Controls->Add(this->label16);
            this->panel2->Controls->Add(this->label17);
            this->panel2->Controls->Add(this->label12);
            this->panel2->Controls->Add(this->label14);
            this->panel2->Controls->Add(this->label13);
            this->panel2->Location = System::Drawing::Point(540, 6);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(528, 397);
            this->panel2->TabIndex = 1;
            // 
            // txtCourseTutor
            // 
            this->txtCourseTutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCourseTutor->Location = System::Drawing::Point(246, 223);
            this->txtCourseTutor->Name = L"txtCourseTutor";
            this->txtCourseTutor->Size = System::Drawing::Size(260, 30);
            this->txtCourseTutor->TabIndex = 43;
            // 
            // txtProgramLeader
            // 
            this->txtProgramLeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtProgramLeader->Location = System::Drawing::Point(246, 182);
            this->txtProgramLeader->Name = L"txtProgramLeader";
            this->txtProgramLeader->Size = System::Drawing::Size(260, 30);
            this->txtProgramLeader->TabIndex = 42;
            // 
            // txtDeanofFaculty
            // 
            this->txtDeanofFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDeanofFaculty->Location = System::Drawing::Point(246, 141);
            this->txtDeanofFaculty->Name = L"txtDeanofFaculty";
            this->txtDeanofFaculty->Size = System::Drawing::Size(260, 30);
            this->txtDeanofFaculty->TabIndex = 38;
            // 
            // cboCourse
            // 
            this->cboCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboCourse->FormattingEnabled = true;
            this->cboCourse->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"", L"Department of Construction Technology - Traffic",
                    L"Department of Telecommunications Systems", L"Department of Electronics and Computer Engineering", L"Bionanotechnology", L"Computer Science",
                    L"Department of Photonic Technology"
            });
            this->cboCourse->Location = System::Drawing::Point(246, 15);
            this->cboCourse->Name = L"cboCourse";
            this->cboCourse->Size = System::Drawing::Size(260, 33);
            this->cboCourse->TabIndex = 36;
            this->cboCourse->Text = L"Select a Course";
            this->cboCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboCourse_SelectedIndexChanged);
            // 
            // txtFaculty
            // 
            this->txtFaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFaculty->Location = System::Drawing::Point(246, 100);
            this->txtFaculty->Name = L"txtFaculty";
            this->txtFaculty->Size = System::Drawing::Size(260, 30);
            this->txtFaculty->TabIndex = 37;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(23, 223);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(139, 25);
            this->label15->TabIndex = 41;
            this->label15->Text = L"Course Tutor";
            // 
            // txtCourseCode
            // 
            this->txtCourseCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCourseCode->Location = System::Drawing::Point(246, 59);
            this->txtCourseCode->Name = L"txtCourseCode";
            this->txtCourseCode->Size = System::Drawing::Size(260, 30);
            this->txtCourseCode->TabIndex = 36;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(23, 182);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(166, 25);
            this->label16->TabIndex = 40;
            this->label16->Text = L"Program Leader";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(23, 141);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(163, 25);
            this->label17->TabIndex = 39;
            this->label17->Text = L"Dean of Faculty";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(23, 103);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(82, 25);
            this->label12->TabIndex = 38;
            this->label12->Text = L"Faculty";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(23, 21);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(82, 25);
            this->label14->TabIndex = 36;
            this->label14->Text = L"Course";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(23, 62);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(140, 25);
            this->label13->TabIndex = 37;
            this->label13->Text = L"Course Code";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
            this->panel1->Controls->Add(this->cboGender);
            this->panel1->Controls->Add(this->txtEmail);
            this->panel1->Controls->Add(this->txtMobile);
            this->panel1->Controls->Add(this->txtDOB);
            this->panel1->Controls->Add(this->label30);
            this->panel1->Controls->Add(this->txtStudentID);
            this->panel1->Controls->Add(this->label27);
            this->panel1->Controls->Add(this->txtAddress);
            this->panel1->Controls->Add(this->label31);
            this->panel1->Controls->Add(this->txtSurname);
            this->panel1->Controls->Add(this->label28);
            this->panel1->Controls->Add(this->txtFirstname);
            this->panel1->Controls->Add(this->label29);
            this->panel1->Controls->Add(this->label24);
            this->panel1->Controls->Add(this->label26);
            this->panel1->Controls->Add(this->label25);
            this->panel1->Location = System::Drawing::Point(6, 6);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(528, 397);
            this->panel1->TabIndex = 0;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // cboGender
            // 
            this->cboGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->cboGender->FormattingEnabled = true;
            this->cboGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nam", L"Nữ" });
            this->cboGender->Location = System::Drawing::Point(243, 187);
            this->cboGender->Name = L"cboGender";
            this->cboGender->Size = System::Drawing::Size(260, 33);
            this->cboGender->TabIndex = 44;
            this->cboGender->Text = L"Nam";
            // 
            // txtEmail
            // 
            this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtEmail->Location = System::Drawing::Point(243, 307);
            this->txtEmail->Name = L"txtEmail";
            this->txtEmail->Size = System::Drawing::Size(260, 30);
            this->txtEmail->TabIndex = 55;
            // 
            // txtMobile
            // 
            this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtMobile->Location = System::Drawing::Point(243, 266);
            this->txtMobile->Name = L"txtMobile";
            this->txtMobile->Size = System::Drawing::Size(260, 30);
            this->txtMobile->TabIndex = 54;
            // 
            // txtDOB
            // 
            this->txtDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDOB->Location = System::Drawing::Point(243, 229);
            this->txtDOB->Name = L"txtDOB";
            this->txtDOB->Size = System::Drawing::Size(260, 30);
            this->txtDOB->TabIndex = 49;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(29, 307);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(65, 25);
            this->label30->TabIndex = 43;
            this->label30->Text = L"Email";
            // 
            // txtStudentID
            // 
            this->txtStudentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtStudentID->Location = System::Drawing::Point(243, 24);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(260, 30);
            this->txtStudentID->TabIndex = 48;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(29, 223);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(58, 25);
            this->label27->TabIndex = 53;
            this->label27->Text = L"DOB";
            // 
            // txtAddress
            // 
            this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtAddress->Location = System::Drawing::Point(243, 147);
            this->txtAddress->Name = L"txtAddress";
            this->txtAddress->Size = System::Drawing::Size(260, 30);
            this->txtAddress->TabIndex = 47;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(29, 266);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(76, 25);
            this->label31->TabIndex = 42;
            this->label31->Text = L"Mobile";
            // 
            // txtSurname
            // 
            this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtSurname->Location = System::Drawing::Point(243, 106);
            this->txtSurname->Name = L"txtSurname";
            this->txtSurname->Size = System::Drawing::Size(260, 30);
            this->txtSurname->TabIndex = 46;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(29, 182);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(83, 25);
            this->label28->TabIndex = 52;
            this->label28->Text = L"Gender";
            // 
            // txtFirstname
            // 
            this->txtFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtFirstname->Location = System::Drawing::Point(243, 65);
            this->txtFirstname->Name = L"txtFirstname";
            this->txtFirstname->Size = System::Drawing::Size(260, 30);
            this->txtFirstname->TabIndex = 45;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(29, 141);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(92, 25);
            this->label29->TabIndex = 51;
            this->label29->Text = L"Address";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(29, 103);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(99, 25);
            this->label24->TabIndex = 50;
            this->label24->Text = L"Surname";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(29, 21);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(114, 25);
            this->label26->TabIndex = 48;
            this->label26->Text = L"Student ID";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(29, 62);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(107, 25);
            this->label25->TabIndex = 49;
            this->label25->Text = L"Firstname";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->dataGridView2);
            this->tabPage2->Controls->Add(this->dataGridView1);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1568, 762);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView2->Location = System::Drawing::Point(3, 3);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(1562, 756);
            this->dataGridView2->TabIndex = 1;
            this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(3, 3);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1562, 756);
            this->dataGridView1->TabIndex = 0;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->dataGridView3);
            this->tabPage3->Location = System::Drawing::Point(4, 25);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(1568, 762);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Database Guidance";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Location = System::Drawing::Point(0, 3);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowHeadersWidth = 51;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1651, 872);
            this->dataGridView3->TabIndex = 0;
            // 
            // btnReset
            // 
            this->btnReset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReset.Image")));
            this->btnReset->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnReset->Location = System::Drawing::Point(545, 23);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(143, 35);
            this->btnReset->TabIndex = 6;
            this->btnReset->Text = L"Reset";
            this->btnReset->UseVisualStyleBackColor = true;
            this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1908, 941);
            this->Controls->Add(this->tabControl1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"UET";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tabPage3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
            private: System::Void studentUpload() {
           

                sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
                sqlConn->Open();
                sqlCmd->Connection = sqlConn;
                sqlCmd->CommandText = "select *from new_table";
                sqlDd = sqlCmd->ExecuteReader();
                sqlDt->Load(sqlDd);
                sqlDd->Close();
                sqlConn->Close();
                dataGridView2->DataSource = sqlDt;

            }
            private: System::Void guidanceUpload() {
                sqlConn1->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;
                sqlConn1->Open();
                sqlCmd1->Connection = sqlConn1;
                sqlCmd1->CommandText = "select *from phuhuynh";
                sqlDd1 = sqlCmd1->ExecuteReader();
                sqlDt1->Load(sqlDd1);
                sqlDd1->Close();
                sqlConn1->Close();
                dataGridView3->DataSource = sqlDt1;
            }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        studentUpload();
        guidanceUpload();
    }
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult  iExit;
    iExit = MessageBox::Show("Comfirm if you want to exit", "Student Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
    if (iExit == System::Windows::Forms::DialogResult::Yes) {
    Application::Exit();
    }

   
}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + password + ";" + "database=" + database;

    
    try {
        sqlConn1->Open();
        sqlQuery1 = "insert into phuhuynh(StudentID, Guidance, Firstname, Surname, Address, Mobile)" + "value('" + txtStudentID->Text + "', '" + cboGuidane->Text + "', '" + txtFirstname1->Text + "', '" + txtSurname1->Text + "', '" + txtAddress1->Text + "', '" + txtMobile1->Text + "')";
        sqlCmd1 = gcnew MySqlCommand(sqlQuery1, sqlConn1);
        sqlDd1 = sqlCmd1->ExecuteReader();
        sqlConn1->Close();
    }

    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
    finally {
        sqlConn1->Close();
    }
    
    guidanceUpload();
    try {
        sqlConn->Open();
        sqlQuery = "insert into new_table(StudentID, Firstname, Surname, Address, Gender, DOB, Mobile, Email,"+" Course, CourseCode, HomeStudent, OverseaStudent, Accommodation, Exchange, Scholarship,"+"Module1, Module2, Module3, Module4, Module5, Module6, Module7, Module8, "+"Score1, Score2, Score3, Score4, Score5, Score6, Score7, Score8, Total, Ranking, Date)" + "value('"+txtStudentID->Text+ "', '" + txtFirstname->Text + "', '" + txtSurname->Text + "', '" + txtAddress->Text + "', '" + cboGender->Text + "', '" + txtDOB->Text + "', '" + txtMobile->Text + "', '" + txtEmail->Text + "', '" + cboCourse->Text + "', '" + txtCourseCode->Text + "', '" + cboHomeStudent->Text + "', '" + cboOverseaStudent->Text + "', '" + cboAcommodation->Text + "', '" + cboExchange->Text + "', '" + cboScholarship->Text + "', '" + cboModule1->Text + "', '" + cboModule2->Text + "', '" + cboModule3->Text + "', '" + cboModule4->Text + "', '" + cboModule5->Text + "', '" + cboModule6->Text + "', '" + cboModule7->Text + "', '" + cboModule8->Text + "', '" + txtScore1->Text + "', '" + txtScore2->Text + "', '" + txtScore3->Text + "', '" + txtScore4->Text + "', '" + txtScore5->Text + "', '" + txtScore6->Text + "', '" + txtScore7->Text + "', '" + txtScore8->Text + "', '" + txtTotal->Text + "', '" + txtRanking->Text + "', '" + txtDate->Text + "')";
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
    studentUpload();

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void cboCourse_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    
    if (cboCourse->Text == "") {
        txtCourseCode->Text = "";
        txtFaculty->Text = "";
        txtDeanofFaculty->Text = "";
        txtProgramLeader->Text = "";
        txtCourseTutor->Text = "";
    }
    else if (cboCourse->Text == "Computer Science") {
        txtCourseCode->Text = "KHMT";
        txtFaculty->Text = "Faculty of Information Technology";
        txtDeanofFaculty->Text = "PGS.TS Le Sy Vinh";
        txtProgramLeader->Text = "GS.TS. Nguyen Thanh Thuy";
        txtCourseTutor->Text = "TS. Tran Quoc Long";
    }
    else if (cboCourse->Text == "Department of Telecommunications Systems") {
        txtCourseCode->Text = "HTVT";
        txtFaculty->Text = "Faculty of electronics and telecommunications";
        txtDeanofFaculty->Text = "TS. Dinh Trieu Duong";
        txtProgramLeader->Text = "TS. Dinh Thi Thai Mai";
        txtCourseTutor->Text = "TS. Dinh Thi Thai Mai";
    }else if(cboCourse->Text == "Department of Electronics and Computer Engineering"){
        txtCourseCode->Text = "DTVKTMT";
        txtFaculty->Text = "Faculty of electronics and telecommunications";
        txtDeanofFaculty->Text = "TS. Dinh Trieu Duong";
        txtProgramLeader->Text = "TS. Hoang Gia Hung";
        txtCourseTutor->Text = "ThS. Pham Dinh Tuan";
    }
    else if (cboCourse->Text == "Bionanotechnology") {
        txtCourseCode->Text = "CNNANO";
        txtFaculty->Text = "Faculty of Agricultural Technology";
        txtDeanofFaculty->Text = "GS.TS. Le Huy Ham";
        txtProgramLeader->Text = "TS. Hoang Gia Huy";
        txtCourseTutor->Text = "ThS. Pham Dinh Tu";
    }
    else if (cboCourse->Text == "Department of Photonic Technology") {
        txtCourseCode->Text = "CNQT";
        txtFaculty->Text = "Faculty of engineering physics and nanotechnology";
        txtDeanofFaculty->Text = "GS.TS. Nguyen Nang Đinh";
        txtProgramLeader->Text = "TS. Bui Dinh Tu";
        txtCourseTutor->Text = "GS.TS. Le Tran Binh";
    }
    else if (cboCourse->Text == "Department of Construction Technology - Traffic") {
        txtCourseCode->Text = "CNKTXD";
        txtFaculty->Text = "Faculty of Construction Technology";
        txtDeanofFaculty->Text = "GS.TSKH Nguyen Dinh Duc";
        txtProgramLeader->Text = "TS. Nguyen Van Bac";
        txtCourseTutor->Text = "TS. Vu Thi Thuy Anh";
    }
}
private: System::Void cboModule1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule1->Text == "") {
        txtScore1->Text = "0";
        txtScore1->Enabled = false;
    }
    else {
        txtScore1->Text = "";
        txtScore1->Enabled = true;
        txtScore1->Focus();
        txtTinChi1->Enabled = true;
        txtTinChi1->Focus();
    }
}
private: System::Void cboModule2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule2->Text == "") {
        txtScore2->Text = "0";
        txtScore2->Enabled = false;
    }
    else {
        txtScore2->Text = "";
        txtScore2->Enabled = true;
        txtScore2->Focus();
        txtTinChi2->Enabled = true;
        txtTinChi2->Focus();
    }
}
private: System::Void cboModule3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule3->Text == "") {
        txtScore3->Text = "0";
        txtScore3->Enabled = false;
    }
    else {
        txtScore3->Text = "";
        txtScore3->Enabled = true;
        txtScore3->Focus();
        txtTinChi3->Enabled = true;
        txtTinChi3->Focus();
    }
}
private: System::Void cboModule4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule4->Text == "") {
        txtScore4->Text = "0";
        txtScore4->Enabled = false;
    }
    else {
        txtScore4->Text = "";
        txtScore4->Enabled = true;
        txtScore4->Focus();
        txtTinChi4->Enabled = true;
        txtTinChi4->Focus();
    }
}
private: System::Void cboModule5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule5->Text == "") {
        txtScore5->Text = "0";
        txtScore5->Enabled = false;
    }
    else {
        txtScore5->Text = "";
        txtScore5->Enabled = true;
        txtScore5->Focus();
        txtTinChi5->Enabled = true;
        txtTinChi5->Focus();
    }
}
private: System::Void cboModule6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule6->Text == "") {
        txtScore6->Text = "0";
        txtScore6->Enabled = false;
    }
    else {
        txtScore6->Text = "";
        txtScore6->Enabled = true;
        txtScore6->Focus();
        txtTinChi6->Enabled = true;
        txtTinChi6->Focus();
    }
}
private: System::Void cboModule7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule7->Text == "") {
        txtScore7->Text = "0";
        txtScore7->Enabled = false;
    }
    else {
        txtScore7->Text = "";
        txtScore7->Enabled = true;
        txtScore7->Focus();
        txtTinChi7->Enabled = true;
        txtTinChi7->Focus();
    }
}
private: System::Void cboModule8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (cboModule8->Text == "") {
        txtScore8->Text = "0";
        txtScore8->Enabled = false;
    }
    else {
        txtScore8->Text = "";
        txtScore8->Enabled = true;
        txtScore8->Focus();
        txtTinChi8->Enabled = true;
        txtTinChi8->Focus();
    }
}
private: System::Void txtTotal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
   
}
private: System::Void btnResult_Click_1(System::Object^ sender, System::EventArgs^ e) {
    float A[8];
    int TC[8];
    try {
        A[0] = Convert::ToDouble(txtScore1->Text);
        A[1] = Convert::ToDouble(txtScore2->Text);
        A[2] = Convert::ToDouble(txtScore3->Text);
        A[3] = Convert::ToDouble(txtScore4->Text);
        A[4] = Convert::ToDouble(txtScore5->Text);
        A[5] = Convert::ToDouble(txtScore6->Text);
        A[6] = Convert::ToDouble(txtScore7->Text);
        A[7] = Convert::ToDouble(txtScore8->Text);

        TC[0] = Convert::ToInt32(txtTinChi1->Text);
        TC[1] = Convert::ToInt32(txtTinChi2->Text);
        TC[2] = Convert::ToInt32(txtTinChi3->Text);
        TC[3] = Convert::ToInt32(txtTinChi4->Text);
        TC[4] = Convert::ToInt32(txtTinChi5->Text);
        TC[5] = Convert::ToInt32(txtTinChi6->Text);
        TC[6] = Convert::ToInt32(txtTinChi7->Text);
        TC[7] = Convert::ToInt32(txtTinChi8->Text);

       if (A[0] > 10) {
            txtScore1->Text = ("0");
        }
        if (A[1] > 10) {
           txtScore2->Text = ("0");
        }
        if (A[2] > 10) {
            txtScore3->Text = ("0");
        }
        if (A[3] > 10) {
            txtScore4->Text = ("0");
        }
        if (A[4] > 10) {
           txtScore5->Text = ("0");
      }
       if (A[5] > 10) {
           txtScore6->Text = ("0");
        }
        if (A[6] > 10) {
            txtScore7->Text = ("0");
        }
        if (A[7] > 10) {
            txtScore8->Text = ("0");
        }

  for (int i = 0; i < 8; i++) {
            if (A[i] >= 9) {
              A[i] = 4;
            }
           else if (A[i] >= 8.5 && A[i] < 9) {
                A[i] = 3.7;
            }
            else if (A[i] >= 8 && A[i] < 8.5) {
                A[i] = 3.5;
           }
            else if (A[i] >= 7 && A[i] < 8) {
                A[i] = 3;
           }
            else if (A[i] >= 6.5 && A[i] < 7) {
                A[i] = 2.5;
            }
            else if (A[i] >= 5.5 && A[i] < 6.5) {
                A[i] = 2;
           }
            else if (A[i] >= 5 && A[i] < 5.5) {
                A[i] = 1.5;
            }
            else if (A[i] >= 4 && A[i] < 5) {
                A[i] = 1;
            }
           else {
                A[i] = 0;
            }
        }
        int TongTC = 0;
        for (int i = 0; i < 8; i++) {
            TongTC += TC[i];
        }
        float sum = (A[0] * TC[0] + A[1] * TC[1] + A[2] * TC[2] + A[3] * TC[3] + A[4] * TC[4] + A[5] * TC[5] + A[6] * TC[6] + A[7] * TC[7]) / TongTC;
        

        if (sum >= 3.6) {
            if (TongTC >= 16) {
                txtRanking->Text = "Xuat sac";
            }
            txtRanking->Text = "Kha";
            
        }
        else if (sum >= 3.2 && sum < 3.6) {
            if (TongTC >= 16) {
                txtRanking->Text = "Gioi";
            }
            txtRanking->Text = "Kha";
        }
        else if (sum >= 2.5 && sum < 3.2) {
            txtRanking->Text = "Kha";
        }
        else if (sum >= 2 && sum < 2.5) {
            txtRanking->Text = "Trung binh";
        }
        else {
            txtRanking->Text = "Yeu";
        }
        txtDate->Text = monthCalendar1->SelectionStart.ToLongDateString();
        txtTotal->Text = Convert::ToString(sum);
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
}
private: System::Void cboGuidane_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
    txtAddress->Text = "";
    txtAddress1->Text = "";
    txtCourseCode->Text = "";
    txtCourseTutor->Text = "";
    txtDate->Text = "";
    txtDeanofFaculty->Text = "";
    txtDOB->Text = "";
    txtEmail->Text = "";
    txtEmail1->Text = "";
    txtFaculty->Text = "";
    txtFirstname->Text = "";
    txtFirstname1->Text = "";
    txtMobile->Text = "";
    txtMobile1->Text = "";
    txtProgramLeader->Text = "";
    txtRanking->Text = "";
    txtScore1->Text = "0";
    txtScore2->Text = "0";
    txtScore3->Text = "0";
    txtScore4->Text = "0";
    txtScore5->Text = "0";

    txtScore6->Text = "0";
    txtScore7->Text = "0";
    txtScore8->Text = "0";
    txtStudentID->Text = "";
    txtSurname->Text = "";
    txtSurname1->Text = "";
    txtTinChi1->Text = "";
    txtTinChi2->Text = "";
    txtTinChi3->Text = "";
    txtTinChi4->Text = "";
    txtTinChi5->Text = "";
    txtTinChi6->Text = "";
    txtTinChi7->Text = "";
    txtTinChi8->Text = "";
    txtTotal->Text = "";
    cboAcommodation->Text = "No";
    cboCourse->Text = "Select a Course";
    cboExchange->Text = "No";
    cboGender->Text = "Nam";
    
    cboHomeStudent->Text = "No";
    cboModule1->Text = ""; cboModule2->Text = ""; cboModule3->Text = ""; cboModule4->Text = ""; cboModule5->Text = ""; cboModule6->Text = ""; cboModule7->Text = ""; cboModule8->Text = "";
    cboOverseaStudent->Text = "No";
    cboScholarship->Text = "No";



}
};
}
