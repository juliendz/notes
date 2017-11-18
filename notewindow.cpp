#include "notewindow.h"
#include "ui_notewindow.h"

NoteWindow::NoteWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NoteWindow)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

NoteWindow::~NoteWindow()
{
    delete ui;
}
