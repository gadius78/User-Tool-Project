// HelpDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Javis.h"
#include "HelpDialog.h"
#include "afxdialogex.h"


// HelpDialog dialog

IMPLEMENT_DYNAMIC(HelpDialog, CDialogEx)

HelpDialog::HelpDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(HelpDialog::IDD, pParent)
{
	char strings[256];
	FILE *p_file = fopen("C:/Users/minbyeon/Documents/Visual Studio 2010/Projects/Javis_test/Javis/Javis_Help.txt", "rt");
    if(p_file != NULL){
            while(fgets(strings, 256, p_file)){
                int size = strlen(strings) - 1;
                if(strings[size] == '\n') strings[size] = 0;
                mmm.InsertString(-1, (LPCTSTR)(strings));
            }
            mmm.SetCurSel(0);
            fclose(p_file);
        }


}

HelpDialog::~HelpDialog()
{
}

void HelpDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, m_help_contents, mmm);
}


BEGIN_MESSAGE_MAP(HelpDialog, CDialogEx)
END_MESSAGE_MAP()


// HelpDialog message handlers

