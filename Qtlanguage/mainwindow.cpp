#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QSettings>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTranslator *m_Translator=new QTranslator;
    QSettings settings("LYL","Language");
    QString lang=settings.value("Language","simplify").toString();
    QString path="../Qtlanguage/"+lang+".qm";
    m_Translator->load(path);
    qApp->installTranslator(m_Translator);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEnglish_triggered()
{
    QSettings settings("LYL","Language");
    settings.setValue("Language", "english");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Qtlanguage/english.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionChinese_Simplify_triggered()
{
    QSettings settings("LYL","Language");
    settings.setValue("Language", "simplify");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Qtlanguage/simplify.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QSettings settings("LYL","Language");
    settings.setValue("Language", "traditional");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Qtlanguage/traditional.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionJapanese_triggered()
{
    QSettings settings("LYL","Language");
    settings.setValue("Language", "japanese");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Qtlanguage/japanese.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionGerman_triggered()
{
    QSettings settings("LYL","Language");
    settings.setValue("Language", "german");
    QTranslator *m_Translator=new QTranslator;
    m_Translator->load("../Qtlanguage/german.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}
