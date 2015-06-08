#include "sendtoprinterthread.h"

SendToPrinterThread::SendToPrinterThread(QString Program,QStringList Args)
{
    program =Program;
    args = Args;
}

SendToPrinterThread::~SendToPrinterThread(){
    process.close();
}

void SendToPrinterThread::run(){
    process.start(program, args);

    if (!process.waitForStarted()) {
        emit NoProgramFound();
    }
    process.waitForFinished(-1);
}
