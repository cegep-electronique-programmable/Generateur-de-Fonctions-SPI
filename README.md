# Generateur de Fonctions SPI

L'objectif de ce laboratoire est de développer un circuit de générateur de fonctions à l'aide d'un potentiomètre numérique MCP42010 qui communique avec une interface SPI.

- Les réglages peuvent être changés sans arrêter les programmes
- On peut générer des formes d’ondes :
    - sinusoïdale (touche `[S]`), 
    - carrée (touche `[C]`),
    - triangulaire (touche `[T]`).
- Il y aura également un bouton physique pour changer la forme d'onde.
- On peut varier la fréquence de 20Hz à 100Hz (par incrément de 20Hz) à l’aide des touches `[+]` et `[-]`;
- Il y aura également deux boutons physiques pour augmenter ou diminuer la férquence.
- Dès qu’un paramètre est modifié par l’usager, afficher sur le terminal :
    - la forme de l'onde
    - la fréquence

## Séquence de développement

- [ ] Compiler le projet de départ et s'assurer qu'il n'y a aucune erreur.
- [ ] Indiquer avec un `[x]` l'avancement du projet et faire un `commit` et un `push`.
- [ ] Envoyer et recevoir des messages via l’interface série.
- [ ] Brancher le potentiomètre MCP42010 et le relier à la carte Nucléo. Rédiger un code puis s’assurer que vous êtes en mesure de contrôler le potentiomètre.
- [ ] Implémenter l’exemple du Ticker.
- [ ] Il est maintenant temps de commencer le programme principal ! À chaque intervalle de temps (commencez avec un intervalle constant de 200us par exemple), envoyez un nouveau point du tableau `sin[]` au potentiomètre SPI. Corrigez le code jusqu’à ce qu’un sinus de fréquence attendu soit mesuré à la sortie du potentiomètre numérique à l’aide de l’oscilloscope.
- [ ] Ajoutez un bouton entre `D4` et le `GND` de la carte Nucléo, ce bouton servira à changer la forme d'onde.
- [ ] Ajoutez un bouton entre le `GND` et `D5` de la carte Nucléo, ce bouton servira à augmenter la fréquence de sortie de 20Hz.
- [ ] Ajoutez un bouton entre le `GND` et `D6` de la carte Nucléo, ce bouton servira à abaisser la fréquence de sortie de 20Hz.
- [ ] Assurez-vous que les fréquences sont générées correctement et que les informations requises s’affichent quand un bouton est appuyé.


## Trucs et Astuces

### Changement de la fréquence

Utiliser une machine à états pour gérer la fréquence à générer.
- [ ] Combien d'état avez-vous besoin ?
- [ ] Quelles sont les conditions pour passer d'un état à l'autre ?
- [ ] **Dessiner** un graph d'états de cette machine.

### Changement de forme d'onde

Utiliser une (autre) machine à états pour gérer la forme d'onde à générer.
- [ ] Combien d'état avez-vous besoin ?
- [ ] Quelles sont les conditions pour passer d'un état à l'autre ?
- [ ] **Dessiner** un graph d'états de cette machine.

### Boutons physiques

- Pour éviter un possible problème de rebond, il est permis de mettre un délais allant jusqu’à 1 seconde après la détection du niveau bas.
- Pour activer les `pull-up interne`. Voir la fonction [pinMode()](https://reference.arduino.cc/reference/en/language/functions/digital-io/pinmode/). Vous pouvez également utiliser des `pull-up externes`
- Dans la boucle principale du `main()`, vérifier régulièrement l’état de la broche, changer la forme d’onde à afficher si le niveau bas est détecté. 

## Sources

Laboratoire basé sur le projet créé par Claude Barbaud en 2017 et modifié par Maxime Champagne en 2022.