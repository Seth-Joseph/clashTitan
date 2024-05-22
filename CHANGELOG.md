# Changelog

All notable changes to this project from the initial project plan is documented in this file.

## Changed
- Replaced GameManager class to Battle Class
- Battle Class represents the battle system between the player titan and the oppopenents's titan. It also determines turn of play.
- Gaia Class is derived class of Titan
- Oceania Class is derived class of Titan
- Atlas Class is derived class of Titan
- Prometheus Class is derived class of Titan

## Removed
### Titan Class
- damage attribute
- getters and setters for damage attribute

### Atlas Class
- damage attribute
- getters and setters for damage attribute
- getter for hp attribute

### Gaia Class
- damage attribute
- getters and setters for damage attribute
- getter for hp attribute


### Oceania Class
- damage attribute
- getters and setters for damage attribute
- getter for hp attribute


### Prometheus Class
- damage attribute
- getters and setters for damage attribute
- getter for hp attribute


## Added
### Titan Class
- isDefending attribute
- doAttack(): handles attack to titan
- takeDamage(): handles the damage taken by the titan
- defend(): sets the titan in defence state
- endTurn(): resets the state of titan
- is_alive(): checks whether titan is alive or not

### Player Class
- lvl attribute 
- getters and setters for lvl attribute

### Battle Class
- startBattle(): handles the battle system
- playerTurn():  handles player's turn
- opponentTurn(): handles opponent's turn

