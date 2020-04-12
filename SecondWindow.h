#pragma once

namespace KursV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class SecondWindow : public System::Windows::Forms::Form
	{

		static const int mapSize = 8; //Размер карты
		static const int cellSize = 50; //Размер шашки и т.д

		 Image^ WF;
		 Image^ BF;
		
		 

	public:
		SecondWindow(void)
		{
			InitializeComponent();

			
			this->Text = "Шахматы";
		}
			
		
	public: void Init()
		{
		int map[mapSize][mapSize] = {

			{0,1,0,1,0,1,0,1},
			{1,0,1,0,1,0,1,0},
			{0,1,0,1,0,1,0,1},
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0},
			{2,0,2,0,2,0,2,0},
			{0,2,0,2,0,2,0,2},
			{2,0,2,0,2,0,2,0},
		};
		
		Cratemap();

		
		}
	public: void Cratemap()
	{
			WF = gcnew Bitmap(gcnew Bitmap(LR"(C:\Im\w.png)"), System::Drawing::Size(cellSize - 2, cellSize - 2));
			BF = gcnew Bitmap(gcnew Bitmap(LR"(C:\Im\b.png)"), System::Drawing::Size(cellSize - 2, cellSize - 2));
	int map[mapSize][mapSize] = {

			{0,1,0,1,0,1,0,1},
			{1,0,1,0,1,0,1,0},
			{0,1,0,1,0,1,0,1},
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0},
			{2,0,2,0,2,0,2,0},
			{0,2,0,2,0,2,0,2},
			{2,0,2,0,2,0,2,0}, };
			
		
		
		this->Width = (mapSize + 1) * cellSize;
		this->Height = (mapSize + 1) * cellSize;
	
		for (int i = 0; i < mapSize; i++)
		{
	
			for (int j = 0; j < mapSize; j++)
			{
		
				Button^ button = gcnew Button();
				button->Location = Point(j * cellSize, i * cellSize);
				button->Size = System::Drawing::Size(cellSize,cellSize);
				this->Controls->Add(button);


				if (map[i][j] == 1) {
					button->Image = WF;
				}
				else if (map[i][j] == 2) {
					button->Image = BF;
				}
				
				this->Controls->Add(button);
				
				
		
				
				
			}
		}
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SecondWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			//
			//
			//
			Init();
			//
			//
			//
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(449, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SecondWindow::button1_Click);
			// 
			// SecondWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 396);
			this->Controls->Add(this->button1);
			this->Name = L"SecondWindow";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();//Закрытие второго окна 
	}
	};
}
