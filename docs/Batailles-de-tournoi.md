Il faut que les batailles soient extrêmement simples et à peu près automatiques pour les IA puissent se combattre entre elles très facilement.

L'idéal je pense serait un système à la Gnobot : les utilisateurs définissent à l'avance un ensemble de règles comme la composition et le déploiement de leur armée et à l'heure prévue du combat tout se déroule tout seul (et est ensuite visionnable).

Ce serait intéressant que le terrain soit variable (mais déterminé à l'avance pour les tournois) mais pas obligé. Ça peut être un désert tout plat. => Plus intéressant : le terrain serait déterminé par les peuples impliqués. Le peuple le attaqué le détermine par exemple ou alors chaque côté du terrain correspond à chaque faction.

## Capacités de base des unités
Mouvement : nombre de case parcourues par tour.
Attaque corps à corps : dégât au corps à corps
Attaque au tir : dégâts au tir
Points de vie : nombre de dégâts avant élimination

Humain de base avec un fusil : 
M 3 - CC 1 - CT 2 - PV5

## Règles de base
Il y a très peu d'actions possibles : 
 * se déplacer et attaquer au corps à corps (vers l'ennemi le plus proche)
 * reculer (s'éloigner de l'ennemi le plus proche)
 * tirer (plusieurs modes : sur le plus proche, le héros le plus proche à portée, l'unité volante etc...)
 * utiliser une capacité spéciale (sorts ou autres, spécifique aux unités en questions)

## Déroulement de la bataille
La programmation doit être effectuée avant l'exécution du combat (qui sera automatique et presque instantané) donc les armées et déploiements doivent être prédéterminés. Problème : j'aime bien le fait que les armées soient aléatoires donc comment programmer sans savoir l'armée qu'on aura ?

Concept : 
* Un tournoi commence chaque semaine. Les matchs sont programmés par poules et le programme des matchs chaque jour est tiré immédiatement. Le prochain match n'est pas avant 12h.
* Avant le premier match les joueurs peuvent programmer leur armée ce qui inclut
 - 1. déterminer l'ordre de déploiement (il s'agit juste d'ordonner les types d'unités de celle qui se met le plus à l'avant à celle qui se met le plus à l'arrière
 - 2. déterminer l'ordre d'action (même chose mais détermine l'ordre dans lequel les unités agiront)
 - 3. modifier la [programmation](Programmation-de-bataillle) de toutes les unités impliquées
* Après l'exécution du premier combat le joueur peut éventuellement modifier ses programmations. Si il a perdu le combat il peut aussi demander à ce que son armée soit retirée au hasard.