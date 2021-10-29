<!--
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

# ENSEA PLT Project 2021-2022: Royal War

<p align="center">
 
  <!-- logo of the project/game here -->
  <img height="300" src="https://perso-etis.ensea.fr/neurocyber/web/images/logo_ensea.png" alt="logo"/>  

  <div align="center">

  [![c++ version][cpp-ver-shield]][cpp-ver]
  [![software version][version-shield]][cpp-ver]
  [![build status][build-status-shield]][build-status]

  </div>
</p>

<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Game](#about-the-game)
  * [Presentation](#Presentation)
  * [Rules](#rules)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
  * [Basic Testing](#basic-testing)
* [Release History](#release-history)
* [Built With](#built-with)
* [Contributing](#contributing)
* [License](#license)

<!-- Introduction -->
## Introduction

The [*PLT*] **P**rojet **L**ogiciel **T**ransversal (Transversal Software Project) is the third year project in specialization [*IS*] **I**nformatique et **S**ystèmes (computer science and system) at [ENSEA](https://www.ensea.fr/fr). 

<!-- ABOUT THE PROJECT -->
# About the game

## Presentation

* Genre : Strategy Game
* Players : 1 to 2 players

Royal War is a strategy game that can be played solo against the AI or against an opponent. 

Your main objective is to destroy your opponent base.

You have a base and several buildings where you can spawn your troops.
To spawn your troops, you need the right buildings and enough gold. 
You get 100 gold / turn and you can get more by capturing a special building.
Each troops have their own strength and weakness, it falls to you to choose what kind of troops you want.

## Rules

### Starting

You start with 500 gold, you base, a farm and a garrison. 
It's just enough to get you started with a few low tier units or one high tier unit.
 
### Permitted moves
 
*There are ... moves possible ...*

#### move 1

*Players can make a "move 1" ...*
 
#### move 2

*Players can make a "move 2" ...*

<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

Resynchronize the package index files 
```sh
sudo apt-get update
```

Install with apt-get
```sh
sudo apt-get install build-essential \
dia \
libsfml-dev libxml2-dev libmicrohttpd-dev libboost-all-dev \
python3 python3-pip \
lcov gcovr
```

Install python package with pip (or pip3)
```sh
pip install gcovr
```

### Installation

1. Clone the repo
```sh
git clone https://github.com/davidkha44/projet-jeu
cd projet-jeu
```

2. Build it
```sh
plt$ make
```

3. Test it
```sh
plt$ make test
``` 

<!-- USAGE -->
## Usage

## Basic Testing

Print a hello world message
```sh
plt$ bin/client hello
```

Render demo
```sh
plt$ bin/client render
```

<!-- RELEASE HISTORY-->
## Release History

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/1.1">1.1</a>
    * Environnement de développement
    * Ressources
    * Rapport section 1 : Présentation générale
    * Code : affichage message `./bin/client hello`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/1.final">1.final</a>
    * Rapport section 2 : Description et Conception des états
    * Code : implantation et tests unitaires états `./bin/client state`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/2.1">2.1</a>
    * Rapport section 3 : Description et Conception du Rendu
    * Code : rendu d’un état `./bin/client render`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/2.2">2.2</a>
    * Rapport section 4 : Règles de changement d’états et moteur de jeu
    * Code : changement d’état `./bin/client engine`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/2.final">2.final</a>
    * Rapport section 5 : Intelligence Artificielle
    * Code : IA `./bin/client random_ai`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/3.1">3.1</a>
    * Rapport section 5 : Intelligence Artificielle
    * Code : IA `./bin/client heuristic_ai`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/3.final">3.final</a>
    * Rapport section 5 : Intelligence Artificielle
    * Code : IA `./bin/client rollback`
    * Code : IA `./bin/client deep_ai`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/4.1">4.1</a>
    * Rapport section 6 : Modularisation
    * Code : Threads `./bin/client thread`
    * Code : Enregistrer `./bin/server record`
    * Code : Rejouer `./bin/client play`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/4.2">4.2</a>
    * Rapport section 6 : Modularisation
    * Code : Serveur `./bin/server listen`
    * Code : Client réseau `./bin/client network`

* <a href="https://github.com/davidkha44/projet-jeu/releases/tag/4.final">4.final</a>
    * Rapport section 6 : Modularisation
    * Code : Serveur `./bin/server listen`
    * Code : Client réseau  `./bin/client network`

## Built With

* [SFML](https://github.com/SFML/SFML)
* [Dia Diagram Editor](http://dia-installer.de/index.html.en)
* [dia2code](http://dia2code.sourceforge.net/)
* [libxml2](http://www.xmlsoft.org/)
* [JsonCpp](https://github.com/open-source-parsers/jsoncpp)

<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, 
inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<!-- LICENSE -->
## License

Distributed under the *license* License. See [LICENSE](license-url) for more information.

<!-- MARKDOWN LINKS & IMAGES -->

[contributors-shield]: https://img.shields.io/github/contributors/davidkha44/projet-jeu.svg?style=flat-square
[contributors-url]: https://github.com/davidkha44/projet-jeu/graphs/contributors

[forks-shield]: https://img.shields.io/github/forks/davidkha44/projet-jeu.svg?style=flat-square
[forks-url]: https://github.com/davidkha44/projet-jeu/network/members

[stars-shield]: https://img.shields.io/github/stars/davidkha44/projet-jeu.svg?style=flat-square
[stars-url]: https://github.com/davidkha44/projet-jeu/stargazers

[issues-shield]: https://img.shields.io/github/issues/davidkha44/projet-jeu.svg?style=flat-square
[issues-url]: https://github.com/davidkha44/projet-jeu/issues

[license-shield]: https://img.shields.io/github/license/davidkha44/projet-jeu.svg?style=flat-square
[license-url]: https://github.com/davidkha44/projet-jeu/blob/[branch]/LICENSE

[cpp-ver-shield]: https://img.shields.io/badge/C%2B%2B-11-blue.svg
[cpp-ver]: https://en.wikipedia.org/wiki/C%2B%2B11

[build-status-shield]: https://github.com/davidkha44/projet-jeu/workflows/CI/badge.svg
[build-status]: https://github.com/davidkha44/projet-jeu/actions

[version-shield]: https://img.shields.io/badge/version-0.0-blue.svg?cacheSeconds=2592000