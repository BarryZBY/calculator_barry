
// mfc_test1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// Cmfc_test1Dlg �Ի���
class Cmfc_test1Dlg : public CDialogEx
{
// ����
public:
	Cmfc_test1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFC_TEST1_DIALOG };

    double num_A = 0.0;
	double num_B = 0.0;
	int m_iSign = -1;

	CString m_str1;
	CString m_str2;

	void SaveValue1();
	void Calculator();

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	CEdit m_edit;
	CString m_str;
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton17();
};
