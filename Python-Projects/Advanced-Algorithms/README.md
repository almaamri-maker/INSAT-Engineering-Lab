# Advanced Algorithms & Legacy Refactoring

Ce dossier rassemble un ensemble d'algorithmes fondamentaux initialement développés lors de mon parcours académique initial (niveau baccalauréat/pré-universitaire) et refactorisés pour répondre aux standards modernes du génie logiciel.

L'objectif de ce projet est de préserver la logique algorithmique d'origine tout en démontrant une maturité technique à travers l'application de principes de **Clean Code**.

---

## 🛠️ Standards de Refactoring Appliqués

* **Encapsulation & Modularité** : Suppression des variables globales au profit de paramètres de fonctions et de valeurs de retour explicites.
* **Point d'Entrée Standard** : Ajout du bloc de garde `if __name__ == "__main__":` sur chaque script pour permettre une réutilisation sous forme de modules.
* **Indépendance des Interfaces** : Découplage complet des algorithmes vis-à-vis des interfaces graphiques (ex: PyQt) au profit d'E/S console autonomes.
* **Conformité PEP 8** : Renommage des fichiers et variables en `snake_case`, gestion propre des espaces et typage NumPy explicite.

---

## 📚 Sommaire des Algorithmes

| Fichier | Description Algorithmique | Notions Clés |
| :--- | :--- | :--- |
| `suite_conway.py` | Génération de la suite *Look-and-Say* (Conway). | Traitement de chaînes, comptage contigu. |
| `divisibilite_horner.py` | Test de divisibilité par 7 via le schéma de Horner. | Algorithmique numérique, polynômes. |
| `crible_eratosthene.py` | Génération des nombres premiers jusqu'à N. | Optimisation de recherche, tableaux booléens. |
| `chiffrement_hill.py` | Chiffrement par blocs de taille 2 modulo 27 avec gestion de l'espace. | Arithmétique modulaire, matrices. |
| `kieme_plus_petit.py` | Recherche d'un élément selon sa fréquence d'apparition exacte $K$. | Analyse fréquentielle, parcours de tableaux. |
| `fusion_chaines_triees.py` | Fusion ordonnée de deux chaînes triées sans algorithme de tri natif. | Algorithme de fusion, manipulation de pointeurs. |
| `calculatrice_romaine.py` | Analyseur et convertisseur de numération romaine vers décimale. | Parsing de texte, règles de soustraction/addition. |
| `matrice_spirale.py` | Extraction de colonnes et génération d'une matrice par permutation circulaire. | Permutations de chaînes, matrices 2D. |

---

## 🚀 Exécution

Chaque script est autonome et peut être exécuté directement depuis la racine du dossier :

```bash
python3 name_of_script.py
