#pragma once

#include <list>
#include <string>
#include <ostream>

// Fichier d'en-tête pour la gestion d'une todo list simple

// Représente une tâche avec un identifiant et une description
struct Task {
    int _id;               // identifiant unique de la tâche
    std::string _desc;     // description textuelle de la tâche
};

// TODO bool operator==(const Task& lhs, const Task& rhs);

// Représente la todo list : prochain id à assigner et liste des tâches
struct TodoList {
    int _nextId;           // prochain identifiant disponible
    std::list<Task> _tasks;// conteneur de tâches
};

// TODO bool operator==(const TodoList& lhs, const TodoList& rhs);

// Crée et initialise une TodoList vide (nextId démarré à 1)
// TODO TodoList createTodoList();

// Ajoute une tâche avec la description fournie ; assigne un id automatique
// TODO void addTask(TodoList& todo, const std::string& desc);

// Écrit une représentation textuelle de la todo list dans le flux os
// TODO void formatTodoList(const TodoList& todo, std::ostream& os);

// Supprime la tâche correspondant à l'id donné.
// Retourne true si une tâche a été trouvée et supprimée, false sinon.
// TODO bool removeTask(TodoList& todo, int id);

