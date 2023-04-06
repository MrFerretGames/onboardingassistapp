#pragma once

#include <QPlainTextEdit>

class CustomPlainTextEdit : public QPlainTextEdit
{
    Q_OBJECT

public:
    explicit CustomPlainTextEdit(QWidget* parent = nullptr);

protected:
    void focusInEvent(QFocusEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
};