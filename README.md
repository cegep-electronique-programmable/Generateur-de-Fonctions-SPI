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
- [ ] Indiquer avec un `[x]` dans le fichier `README.md` l'avancement du projet et faire un `commit` et un `push`.
- [ ] Envoyer et recevoir des messages via l’interface série.
- [ ] Brancher le potentiomètre MCP42010 et le relier à la carte Nucléo. Rédiger un code puis s’assurer que vous êtes en mesure de contrôler le potentiomètre.
- [ ] Prendre des captures de l'analyseur logique qui démontre le bon fonctionnement de l'interface SPI. Sauvegarder les captures dans le répertoire `mesures`.
- [ ] Implémenter un timer afin d'envoyer des messages SPI au potentiomètre à une fréquence fixe.
- [ ] Modifier le code afin d'envoyer des messages SPI au potentiomètre à une fréquence dictée par la machine à états. 
- [ ] Il est maintenant temps de commencer le programme principal ! À chaque intervalle de temps (commencez avec un intervalle constant de 200us par exemple), envoyez un nouveau point du tableau `sin[]` au potentiomètre SPI. Corrigez le code jusqu’à ce qu’un sinus de fréquence attendu soit mesuré à la sortie du potentiomètre numérique à l’aide de l’oscilloscope.
- [ ] Ajoutez un bouton entre `D4` et le `GND` de la carte Nucléo, ce bouton servira à changer la forme d'onde.
- [ ] Vérifier que la machine à états qui modifie la forme d'onde fonctionne correctement avec le bouton et avec le terminal.
- [ ] Ajoutez un bouton entre `D5` et le `GND` de la carte Nucléo, ce bouton servira à augmenter la fréquence de sortie de 20Hz.
- [ ] Ajoutez un bouton entre `D6` et le `GND` de la carte Nucléo, ce bouton servira à abaisser la fréquence de sortie de 20Hz.
- [ ] Vérifier que la machine à états qui modifie la fréquence fonctionne correctement avec les boutons et avec le terminal.
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

## Potentiomètre SPI

- Commencer par un code très simple pour s'assurer que la communication fonctionne correctement. Ne pas aller plus loin tant que cette étape ne fonctionne pas parfaitement.
- Note : Si la fréquence doit être de 100Hz, la période est de 10ms. Si on génère l’onde avec 256 points, on doit modifier la valeur du potentiomètre chaque 10ms/256.

## Sources

Laboratoire basé sur le projet créé par Claude Barbaud en 2017 et modifié par Maxime Champagne en 2022.