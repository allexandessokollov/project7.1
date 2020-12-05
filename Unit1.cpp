#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <string.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::enterTextKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 13)
    {
        ListBox1->Items->Add("Your string:");
        ListBox1->Items->Add(enterText->Text);
        ListBox1->Items->Add("Press Enter to start count");


        String str;
        str =  enterText->Text;

        answer->Caption = countAnswer(str);
    }
    
}
//---------------------------------------------------------------------------


int TForm1::countAnswer(String str)
{

    str += " ";
    int counter = 0, tmpCounter = 0, strLength = str.Length();

   
    const char *charArray = str.c_str();

    for(int i = 0; i < strLength; i++)
    {

        if(charArray[i] == '1' || charArray[i] == '0')
        {
            tmpCounter++;
        }
        else if(charArray[i] == ' ')
        {
            if(tmpCounter == 5)
            {
                counter++;
            }
            tmpCounter = 0;
        }
        else
        {
            ShowMessage("unexpected symbol!");
        }
    }


    return counter;

}
