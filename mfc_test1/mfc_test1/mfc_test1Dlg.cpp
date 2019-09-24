
// mfc_test1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mfc_test1.h"
#include "mfc_test1Dlg.h"
#include "afxdialogex.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cmfc_test1Dlg �Ի���



Cmfc_test1Dlg::Cmfc_test1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmfc_test1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cmfc_test1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
	DDX_Text(pDX, IDC_EDIT1, m_str);
}

BEGIN_MESSAGE_MAP(Cmfc_test1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cmfc_test1Dlg::OnBnClickedButton1)	
	ON_BN_CLICKED(IDC_BUTTON2, &Cmfc_test1Dlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT1, &Cmfc_test1Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON3, &Cmfc_test1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Cmfc_test1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Cmfc_test1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Cmfc_test1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON10, &Cmfc_test1Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON14, &Cmfc_test1Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON7, &Cmfc_test1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON11, &Cmfc_test1Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON15, &Cmfc_test1Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON8, &Cmfc_test1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON12, &Cmfc_test1Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON16, &Cmfc_test1Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON9, &Cmfc_test1Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON13, &Cmfc_test1Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON17, &Cmfc_test1Dlg::OnBnClickedButton17)
END_MESSAGE_MAP()


// Cmfc_test1Dlg ��Ϣ�������

BOOL Cmfc_test1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������

	// barry add code 
	m_edit.SetWindowTextW(_T(""));
	//end

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cmfc_test1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cmfc_test1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cmfc_test1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void Cmfc_test1Dlg::SaveValue1()
{
	UpdateData(1);
	num_A = _wtof(m_str1.GetBuffer());// _wtof()��Ӧ���ֽ��ַ�����atof()
	num_B = _wtof(m_str2.GetBuffer());
	UpdateData(0);
}

void Cmfc_test1Dlg::Calculator()
{
	UpdateData(1);
	num_B = _wtof(m_str2.GetBuffer());
	double result = 0.0;
	switch (m_iSign)
	{
	case 0:
		result = num_A + num_B;
		break;
	case 1:
		result = num_A - num_B;
		break;
	case 2:
		result = num_A * num_B;
		break;
	case 3:
		if (num_B == 0.0)
		{
			MessageBox(_T("��������Ϊ0������")); //MessageBox("��������Ϊ0������")unicode���ԭ��
			result = num_A;
		} else
			result = num_A / num_B; 
		break;
	default:
		break;
	}
	if (result - int(result) <= 1e-5)
		m_str.Format(_T("%d"), (int)result);
	else
		m_str.Format(_T("%f"), result);
	UpdateData(0);
}

void Cmfc_test1Dlg::OnEnChangeEdit1()
{
	UpdateData(1);
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(0);
}

void Cmfc_test1Dlg::OnBnClickedButton2() //clear
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	m_str = ""; //���ַ���
	m_str1 = "";
	m_str2 = "";
	UpdateData(0);
	//-------------------
}

void Cmfc_test1Dlg::OnBnClickedButton1() // + 
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveValue1();
	m_iSign = 0;
	UpdateData(1);
	m_str = m_str + '+';
	m_str2 = "";
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton3() // -
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveValue1();
	m_iSign = 1;
	UpdateData(1);
	m_str = m_str + '-';
	m_str2 = "";
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton4() // *
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveValue1();
	m_iSign = 2;
	UpdateData(1);
	m_str = m_str + '*';
	m_str2 = "";
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton5() // /
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	SaveValue1();
	m_iSign = 3;
	UpdateData(1);
	m_str = m_str + '/';
	m_str2 = "";
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton6()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '1';
	else
		m_str1 = m_str1 + '1';
	m_str = m_str + '1';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton10()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '2';
	else
		m_str1 = m_str1 + '2';
	m_str = m_str + '2';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton14()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '3';
	else
		m_str1 = m_str1 + '3';
	m_str = m_str + '3';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton7()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '4';
	else
		m_str1 = m_str1 + '4';
	m_str = m_str + '4';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton11()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '5';
	else
		m_str1 = m_str1 + '5';
	m_str = m_str + '5';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton15()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '6';
	else
		m_str1 = m_str1 + '6';
	m_str = m_str + '6';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton8()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '7';
	else
		m_str1 = m_str1 + '7';
	m_str = m_str + '7';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton12()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '8';
	else
		m_str1 = m_str1 + '8';
	m_str = m_str + '8';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton16()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '9';
	else
		m_str1 = m_str1 + '9';
	m_str = m_str + '9';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
		m_str2 = m_str2 + '0';
	else
		m_str1 = m_str1 + '0';
	m_str = m_str + '0';
	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton13() //С���㰴ť
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign == 0 || m_iSign == 1 || m_iSign == 2 || m_iSign == 3)
	{
		if (m_str2.Find('.') == -1)
			m_str2 = m_str2 + '.';
	}
	else
	{
		if (m_str1.Find('.') == -1)
			m_str1 = m_str1 + '.';
	}	
	m_str = m_str + '.';

	UpdateData(0);
}


void Cmfc_test1Dlg::OnBnClickedButton17() // =
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(1);
	if (m_iSign != 0 && m_iSign != 1 && m_iSign != 2 && m_iSign != 3)
	{
		num_A = _wtof(m_str1.GetBuffer());
	}
	else 
	{
		Calculator();
	}
	m_iSign = -1;
	m_str1 = m_str;
	UpdateData(0);
}
