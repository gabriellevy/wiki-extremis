#include "compterendu.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>

using std::shared_ptr;

CompteRendu::CompteRendu()
{

}

void CompteRendu::SauvegarderJson(QString nomFichier)
{
    QJsonObject sortie;
    // données générales


    QJsonArray scenes;
    // sauvegarder les scènes une par une :
    for ( int i = 0 ; i< m_Scenes.size() ; ++i) {
        shared_ptr<Scene> scene = m_Scenes[i];
        QJsonObject sceneJson;
        sceneJson["num"] = i;
        scene->EcrireJson(sceneJson);
        scenes.append(sceneJson);
    }
    sortie["scenes"] = scenes;

    QFile saveFile(/*"D:/boulot/QtProjects/TLMContreTLMCoutume/" +*/ nomFichier);
    if (!saveFile.open(QIODevice::WriteOnly)) {
        qWarning("Couldn't open save file.");
    }
    QJsonDocument saveDoc(sortie);
    saveFile.write(saveDoc.toJson());
}
