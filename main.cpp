#include <QApplication>
#include "notemanager.h"


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    NoteManager* nmgr = new NoteManager();
    nmgr->LoadNotes();

    int ret = a.exec();

    //Clean up
    delete nmgr;

    return ret;
}


