#include "stdafx.h"
#include "xrEditor.h"

xrEditor::xrEditor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

HWND xrEditor::GetRendererFrameWnd()
{
	return (HWND)ui.dxFrame->winId();
}
