#pragma once
#include "stdafx.h"
#include <d3d9.h>
#include <atlbase.h>

class QDXWidget : public QWidget
{
	Q_OBJECT

public:
	QDXWidget(QWidget *parent = 0);
	~QDXWidget();
private:
	void paintEvent(QPaintEvent *pEvent);
	void mouseMoveEvent(QMouseEvent *pEvent);
};