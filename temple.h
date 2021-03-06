//temple.h

/* Copyright 2012 Douglas Gastonguay-Goddard  */
/* edwardhowl [at] gmail [dot] com */
/* If you find this program useful I would love to hear about it. */

#ifndef TEMPLE_H
#define TEMPLE_H

#include "graph.h"
#include "lang.h"
#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>
#include <QPushButton>
#include <QTextStream>
#include <QFile>
//#include <QList>
#include <QIcon>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>

/* \x41\x41\x41\x41\x41\x41\x41 */
class TempleWin : public QMainWindow {
	Q_OBJECT
	
public:
	TempleWin(QWidget *parent = 0);
	TempleLang *lang;
//public slots:
	//void zoomIn();
	//void zoomOut();
	
private:
	QLabel *label;
	
};

/* \x41\x41\x41\x41\x41\x41\x41 */
class TBar : public QWidget {
	Q_OBJECT
	
public:
	TBar(TempleWin *parent, TempleLang *lang);
	TempleLang *blang;
	QFile *file;
	QTextStream *out;
		
private slots:
    void onByte();
	void onWord();
	void onDoub();
	void onQuad();	
	void onTerminator();
};

class TDialog : public QDialog {
	Q_OBJECT

public:
	TDialog(QWidget *parent, Qt::WindowFlags flags, TempleLang *lang, int ctype);
	TempleLang *dlang;
	QLineEdit *nameIn;
	int type;

private slots:
	void onOk();
	void onCancel();
};

#endif
