#include "stdafx.h"
#include "QDXWidget.h"

QDXWidget::QDXWidget(QWidget *parent) : QWidget(parent)
{
	setAttribute(Qt::WA_PaintOnScreen);
	setCursor(Qt::BlankCursor);
}

QDXWidget::~QDXWidget()
{
}

void QDXWidget::paintEvent(QPaintEvent *pEvent)
{
	Q_UNUSED(pEvent);
}

void QDXWidget::mouseMoveEvent(QMouseEvent *pEvent)
{
	Q_UNUSED(pEvent);

	if ((GetKeyState(VK_SCROLL) & 0x0001) != 0)
		QCursor::setPos(geometry().center());

}
