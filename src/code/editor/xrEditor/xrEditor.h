#pragma once
#include "stdafx.h"
#include <QtWidgets/QMainWindow>
#include "ui_xrEditor.h"

#include "../../Li_Engine/xrEngine/x_ray.h"
#include "../../Li_Engine/xrEngine/XR_IOConsole.h"

class xrEditor : public QMainWindow
{
	Q_OBJECT

public:
	xrEditor(QWidget *parent = Q_NULLPTR);

	HWND GetRendererFrameWnd();

private:
	Ui::xrEditorWindow ui;
};
