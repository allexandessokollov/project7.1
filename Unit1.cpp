#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <string.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

const int EXPECTED_GROUP_LEN = 5;

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
        ListBox1->Items->Add("Counting...");

        String str;
        str =  enterText->Text;

        answer->Caption = findQuantOfSequences(str);
    }
    
}
//---------------------------------------------------------------------------


int TForm1::findQuantOfSequences(String str)
{
    int counter = 0, lengthOfgroup = 0,
    strLength = str.Length();

    const char *chArr = str.c_str();

    for(int i = 0; i < strLength; i++)
    {

        if(chArr[i] == '1' || chArr[i] == '0')
        {
            lengthOfgroup++;
        }
        else
        {
            if(lengthOfgroup == EXPECTED_GROUP_LEN)
            {
                counter++;
            }
            lengthOfgroup = 0;
        }

    }

    if(lengthOfgroup == EXPECTED_GROUP_LEN)
    {
         counter++;
    }
    
    return counter;

}

