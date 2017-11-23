#include "notewindow.h"
#include "ui_notewindow.h"

NoteWindow::NoteWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NoteWindow)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->btn_NewNote, SIGNAL(clicked()), this, SLOT(EmitCreateNote()));
}

NoteWindow::~NoteWindow() {
    delete ui;
}

void NoteWindow::EmitCreateNote() {
    emit this->CreateNote();
}
