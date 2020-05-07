#pragma once
#include "afxwin.h"


// HelpDialog dialog

class HelpDialog : public CDialogEx
{
	DECLARE_DYNAMIC(HelpDialog)

public:
	HelpDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~HelpDialog();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	CListBox mmm;
};
