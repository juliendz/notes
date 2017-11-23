#ifndef NOTEWINDOW_H
#define NOTEWINDOW_H

#include <QWidget>

namespace Ui {
class NoteWindow;
}

class NoteWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NoteWindow(QWidget *parent = 0);
    ~NoteWindow();

private:
    Ui::NoteWindow *ui;

private slots:
    void EmitCreateNote();

signals:
    void CreateNote();
};

#endif // NOTEWINDOW_H
