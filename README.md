# WRO 2026 Future Engineers - Team Alpha X (Benin) 🇧🇯

## 🎯 Aperçu (Overview)
Bienvenue sur le dépôt GitHub officiel de l'équipe **Alpha X**, représentant fièrement le **Bénin** pour la compétition mondiale **World Robot Olympiad (WRO) 2026** dans la catégorie d'élite **Future Engineers**. 

Notre ambition absolue est de concevoir un véhicule robotisé 100 % autonome, capable de naviguer de manière fluide et précise sur une piste complexe en combinant vision par ordinateur avancée et contrôle de trajectoire de haute précision, avec pour objectif de hisser haut les couleurs du Benin sur la scene Mondial de Robotique.

## 🏎️ Approche Technique & Architecture Logicielle
Suivant les meilleures pratiques d'ingénierie, le système d'**Alpha X** repose sur une architecture à deux cerveaux (Dual-MCU) :
*   **Traitement Haute Performance (Master) :** Un ordinateur monocarte (Raspberry Pi) gérant le pipeline de vision par ordinateur en **Python** avec **OpenCV** (filtrage dans l'espace colorimétrique HSV, détection de couloirs et contournement d'obstacles).
*   **Contrôle Bas Niveau (Slave) :** Un microcontrôleur (Arduino) programmé en **C++** chargé de l'exécution en temps réel des commandes moteurs, de l'asservissement de la direction géométrique de type **Ackermann**, et de la régulation de vitesse.

## 📂 Organisation du Dépôt
*   📁 `code/` : Code source autonome principal (Python) et scripts embarqués (C++).
*   📁 `electronics/` : Schémas électriques, routage et diagrammes d'alimentation.
*   📁 `mechanical-design/` : Fichiers CAO et modèles 3D pour la fabrication du châssis.
*   📁 `robot-photos/` : Documentation visuelle du prototype et des composants de notre robot.
*   📁 `track-photos/` : Images de test de la piste et de calibration de la vision.

## 🛠️ Matériel Utilisé (Hardware)
La liste complète et évolutive de nos composants est disponible dans notre document dédié : **[Benin_Parts_List.md](./Benin_Parts_List.md)**.

---
*Alpha X : Éveiller l'excellence technologique du Bénin sur la scène mondiale.*
