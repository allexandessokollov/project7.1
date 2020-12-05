//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <string.h>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *close;
        TListBox *ListBox1;
        TEdit *enterText;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *answer;
        void __fastcall enterTextKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:
        int countAnswer(String str);	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 