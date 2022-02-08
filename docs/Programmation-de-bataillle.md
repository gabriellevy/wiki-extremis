Il s'agit du système permettant de programmer les unités déployées lors des batailles de tournoi.

A terme il pourrait s'agir d'une programmation relativement élaborée à la gnobot avec :
CONDITION - VERBE D'ACTION - COMPLEMENT

Mais dans un premier temps on se contentera d'afficher la liste des actions possibles de chaque unité et le joueur se contentera de les organiser par ordre de priorité. La première qu'il est en mesure d'exécuter est appliquée et les suivantes sont ignorées.

Les actions de base : 
 * se déplacer et attaquer au corps à corps (vers l'ennemi le plus proche)
 * se déplacer et attaquer au corps à corps SI UN ENNEMI EST A PORTEE (vers l'ennemi le plus proche)
 * reculer si un ennemi est au corps à corps (s'éloigner de l'ennemi le plus proche)
 * tirer (plusieurs modes : sur le plus proche, le héros le plus proche à portée, l'unité volante etc...)
 * utiliser une capacité spéciale (sorts ou autres, spécifique aux unités en questions). Ces capacités ont des conditions spécifiques en général. Par exemple un sort de soin n'est lançable que si un personnage allié est blessé.