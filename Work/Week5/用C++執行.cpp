#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream fin,file;   //設定輸入和檔案的名稱為 fin,file 
	fin.open("2b.txt",ios::in); //開啟檔案 2b.txt 並為輸入狀態 
	file.open("2b_raw.txt",ios::out); //創建一個txt檔 (若已有此檔案則自動清除全部內容) 
	string a,b; //宣告a,b 用來儲存檔案內容
	while(fin>>a)  //將fin的內容傳輸給 a 
	{
		b+=a+"\n"; // 將a的檔案輸出給b並會自動跳行 
	}
	cout<<b<<endl; 
	file<<b; //將b的內容 輸入txt檔案內 
	system ("pause");
}
