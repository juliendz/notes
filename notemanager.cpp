#include "notemanager.h"
#include <QDebug>

NoteManager::NoteManager(QObject *parent) : QObject(parent) {
    mNOTES = new QList<QWidget*>();
}

NoteManager::~NoteManager(){
    qDeleteAll(mNOTES->begin(), mNOTES->end());
    mNOTES->clear();
    delete mNOTES;
}

void NoteManager::LoadNotes() {

    //Load notes from settings

    if(mNOTES->count() == 0){
        this->CreateNoteWindow();
    }

    for(int i=0; i!= mNOTES->count(); i++){
        mNOTES->at(i)->show();
    }

}

void NoteManager::CreateNoteWindow(){
    qDebug() << "Create new note";
    NoteWindow* w = new NoteWindow();
    w->move(700, w->pos().y());
    w->show();
    //Save the window to database
    connect(w, SIGNAL(CreateNote()), this, SLOT(CreateNoteWindow()));
    mNOTES->append(w);
}
