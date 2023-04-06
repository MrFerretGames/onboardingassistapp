#include "CustomPlainTextEdit.h"
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QLineEdit>

CustomPlainTextEdit::CustomPlainTextEdit(QWidget* parent)
    : QPlainTextEdit(parent)
{
}

void CustomPlainTextEdit::focusInEvent(QFocusEvent* event)
{
    QPlainTextEdit::focusInEvent(event);
    if (event->reason() != Qt::MouseFocusReason)
    {
        selectAll();
        QWidget* parentWidgetInstance = parentWidget();
        if (parentWidgetInstance) {
            QLineEdit* extensionField = parentWidgetInstance->findChild<QLineEdit*>("extensionPaste");
            if (extensionField) {
                extensionField->setFocus();
                extensionField->selectAll();
            }
        }
    }
}


void CustomPlainTextEdit::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        event->ignore();
        return;
    }
    QPlainTextEdit::keyPressEvent(event);
}

void CustomPlainTextEdit::mousePressEvent(QMouseEvent* event)
{
    QPlainTextEdit::mousePressEvent(event);
    selectAll();
}