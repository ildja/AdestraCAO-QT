#ifndef CLASSIFICADOR_H
#define CLASSIFICADOR_H

#include <QObject>
#include <QVector>
#include <algorithm>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QStringList>
#include <QMessageBox>
#include <tuple>
#include "caes.h"

class Classificador
{

public:
    QVector <Caes> lista;

    explicit Classificador();

    bool NomeRepetido(Classificador a, Caes b);

    QVector<Caes> getLista() const;
    QVector <Caes> returnVector();

    void btn_inserirDados (const Caes c);
    void limparVetor();
    void setLista(const QVector<Caes> &value);
    void ordenarListaMedia ();
    void ordenarListaNome ();
    void ordenarListaRaca();
    void ordenarPodio();
    void ordenarListaIdade();
    void eraseNome(QString txt, Classificador b);
    void apagarNome(int i);
    void mudarObjeto(int l, int c, QString n);
    void mudarObjeto(int l, int c, int i);
    void setNota1(int index, int value);
    void setNota2(int index, int value);
    void setNome(int index, QString value);
    void clear();

    int size();
    int getMediaIdade();

    QString primeirolugar();
    QString Racaprimeirolugar();
    QString segundolugar();
    QString Racasegundolugar();
    QString terceirolugar();
    QString Racaterceirolugar();

    std::tuple <int, int>contadorGenero(Classificador g);

    Caes find(int index);
    Caes operator[](int i);


signals:

public slots:
};

#endif // CLASSIFICADOR_H
