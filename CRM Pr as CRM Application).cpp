#include<iostream>
#include"clsBankClient.h";
#include"ClsInputValidate.h";
#include<iomanip>
#include"ClsMainScreenOfImplementation.h";
#include"clsUser.h";
#include"ClsLoginRegisterUserScreen.h";
#include"clsLoginUsersScreen.h";
#include"ClsDates.h";
#include"clsScreen.h"
#include<fstream>
#include"ClsUtil.h";

using namespace std;

const string ClientsFileInfo = "Clients Info";

const  string Users = "Users.txt";

void OpenFile(string FileName)
{
	fstream MyFile;

	MyFile.open(FileName, ios::app);

	if (MyFile.is_open())
	{

	}
}

int main()
{
	//OpenFile("Users.txt");
	//OpenFile("Clients Info");
	
	//OpenFile("LoginRegister.text");

	while (true)
	{
		if (!clsLoginScreen::ShowLoginScreen())
		{
			break;
		}
	}


	
	return 0;
}

