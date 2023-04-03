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
        QWidget* parentWidgetInstance = parentWidget(); // Change the variable name here
        if (parentWidgetInstance) {
            QLineEdit* extensionField = parentWidgetInstance->findChild<QLineEdit*>("extensionPaste");
            if (extensionField) {
                extensionField->setFocus();
                extensionField->selectAll();
            }
        }
    }
}


void CustomPlainTextEdit::keyPressEvent(QKeyEvent* event) // Remove the semicolon here
{
    if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        event->ignore();
        return;
    }
    QPlainTextEdit::keyPressEvent(event);
}

void CustomPlainTextEdit::mousePressEvent(QMouseEvent* event) // Remove the semicolon here
{
    QPlainTextEdit::mousePressEvent(event);
    selectAll();
}
