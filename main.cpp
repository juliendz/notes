#include "notewindow.h"
#include <QApplication>
#include <QList>


void createNoteWindow(QList<QWidget*> * NOTES){
    NoteWindow* w = new NoteWindow();
    NOTES->append(w);
}

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    QList<QWidget*> NOTES;

    //Load notes from settings

    if(NOTES.count() == 0){
        createNoteWindow(&NOTES);
    }

    for(int i=0; i!= NOTES.count(); i++){
        NOTES.at(i)->move(700, NOTES.at(i)->pos().y());
        NOTES.at(i)->show();
    }

    int ret = a.exec();

    //Clean up
    qDeleteAll(NOTES.begin(), NOTES.end());
    NOTES.clear();

    return ret;
}


