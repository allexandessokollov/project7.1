object Form1: TForm1
  Left = 187
  Top = 125
  Width = 776
  Height = 399
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Trebuchet MS'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 24
  object Label1: TLabel
    Left = 16
    Top = 8
    Width = 191
    Height = 24
    Caption = 'Write your string here:'
  end
  object Label2: TLabel
    Left = 16
    Top = 320
    Width = 93
    Height = 24
    Caption = 'Answer is: '
  end
  object answer: TLabel
    Left = 112
    Top = 320
    Width = 193
    Height = 24
  end
  object close: TBitBtn
    Left = 624
    Top = 312
    Width = 129
    Height = 33
    TabOrder = 0
    Kind = bkClose
  end
  object ListBox1: TListBox
    Left = 17
    Top = 88
    Width = 736
    Height = 209
    Columns = 1
    ItemHeight = 24
    TabOrder = 1
  end
  object enterText: TEdit
    Left = 16
    Top = 40
    Width = 737
    Height = 32
    TabOrder = 2
    OnKeyDown = enterTextKeyDown
  end
end
