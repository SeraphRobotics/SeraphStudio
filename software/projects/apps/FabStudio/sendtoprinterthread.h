#ifndef SENDTOPRINTERTHREAD_H
#define SENDTOPRINTERTHREAD_H

#include <QThread>
#include <QProcess>

class SendToPrinterThread : public QThread{
    Q_OBJECT
public:
    SendToPrinterThread(QString Program,QStringList Args);
    ~SendToPrinterThread();

    virtual void run();
signals:
    void NoProgramFound();

private:
    QString program;
    QStringList args;
    QProcess process;
};



#endif // SENDTOPRINTERTHREAD_H
