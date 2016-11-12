#ifndef QtBucketList_H
#define QtBucketList_H

#include <QObject>
#include <QPushButton> 
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QApplication>
#include <QLabel>
#include <QComboBox>
#include <QMessageBox>
#include <QSpinBox>
#include <QInputDialog>
#include <iostream> 

//Header Files

class QtBucketList_
{
Q_OBJECT 
	public slots:

public:
	QtBucketList_(QApplication *app);
	~QtBucketList_();

	//Getters 

	//Setters

private:
	//QT Private Data Members
	QApplication *app; 

	//Mainwindow 
	QWidget *introWindow;
	QVBoxLayout *introV;
	//Private Data Members
protected:
	
};