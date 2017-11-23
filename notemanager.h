#ifndef NOTEMANAGER_H
#define NOTEMANAGER_H

#include <QObject>
#include "notewindow.h"

class NoteManager : public QObject
{
    Q_OBJECT
public:
    explicit NoteManager(QObject *parent = nullptr);
    ~NoteManager();
    void LoadNotes();

signals:

public slots:
    void CreateNoteWindow();

private:
    QList<QWidget*>* mNOTES;
};

#endif // NOTEMANAGER_H
