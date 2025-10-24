# todolist

## Description

Petit projet C++ implémentant une todo-list en mémoire. Fournit une API minimale pour :
- créer une todo-list,
- ajouter et supprimer des tâches (identifiants auto-incrémentés),
- afficher la liste de tâches dans un flux.

## Exemple de déroulement du programme principal

```
Simple Todo List Application
Commands:
  a <task description> : Add a new task
  p                    : Print all tasks
  r <task id>          : Remove a task by id
  <empty line>         : Exit
> a demontrer P=NP
> a brosser la girafe
> p
[1] demontrer P=NP
[2] brosser la girafe
> r 1
> p
[2] brosser la girafe
> r 42
Task id not found
> r foobar
Invalid task id
> 
```

## Planning

- [ ] Task et TodoList (`operator==`, `createTodoList`)
- [ ] ajouter une tache dans une todo-list (`addTask`)
- [ ] formater une todo-list (`formatTodoList`)
- [ ] programme principal avec menu
- [ ] retirer une tache d'une todo-list (`removeTask` + menu)


