USTC-Software 2013
=================

We are USTC-Software, a team from University of Science and Technology of China. We will be competing in iGem 2013!

##Introduction##
Our application aims to simulate genetic networks. The application analyzes the stability and the change of genetic networks after introduction of exogenous genes. Meanwhile, given the original network and specific purposes, the application traces the regulative process back and gives possible regulative patterns.


##About Our Software##
### gNAP: Genetic Network Analyse and Predict ###
This software contains four parts, dealing with separate functions in forward and backward modeling of GRN(Genetic Regulatory Network) analyse.
* 1. Start
* 2. Monitor
* 3. Result
* 4. Display

####Start####

>**Start** is used to prepare for the later analysis and prediction. In this part, users could input their database downloaded on Internet and sequences of exogenous gene which is needed to analyse. Also, if not input sequence in **Start**, users could also use the "Predict" function in next part.

####Monitor####

>**Monitor** undertakes several functions of our software as the core methods of **gNAP**. First of them is **Analyse** function which figure out the network change when input an exogenous gene. In the same time a score presenting stablility of new GRN by statist stable time and value variation for lots of times. **Analyse** result could be saw intuitively in **Result** part next. Secondly, **Predict** function use target gene exprssion to figure out possible interaction whose result could also receive in **Result**.

####Result####

>**Result** is a output part which contains all results of operations used. It is easy to read each gene's information and changing consequence in this part. What's more, all gene information could be output in [SBOL](http://www.sbolstandard.org/).

####Display####

>**Display** is the data visualization part of our software. To reach a more vivid output data, this part had been written in JAVA. There are three parts in **Display**: ShowRegulation, ShowChange and ShowNetwork.

### gFinder: Gene Finder ###
This software helps the biologists choosing a specific gene satisfying the regulation which they needs.

### gRNA: Genetic Regulatory Network Analist ###
This is a small game about the analysis of genetic regulatory network. Through analyzing the change of each gene's expression strength, you should figure out the interactions between them.

##Floder Structure##
* Executable:
```
/Executable/gNAP/Windows/32-bit/
This floder contains the .exe file of **gNAP** on Windows 32-bit.
```
```
/Executable/gNAP/Windows/64-bit/
This floder contains the .exe file of **gNAP** on Windows 64-bit.
```
```
/Executable/gNAP/Linux/
This floder contains the executable program file of **gNAP** on Linux.
```
```
/Executable/gNAP/Mac OS/
This floder contains the executable program file of **gNAP** on Mac OS.
```
```
/Executable/gFinder/
This floder contains the executable program file of **gFinder** which could be ran on all those platforms.
```
```
/Executable/gRNA/
This floder contains the executable program file of **gFinder** which could be ran on all those platforms.
```
* Source Code:
```
/Source Code/gNAP/
This floder contains the source code files of **gNAP**. 
The command line source files were written in C++ language and its GUI were written in C++ language with Qt Creator.
```
```
/Source Code/gNAP/visualization/
This floder contains the source code files of **gNAP**'s visualization part. 
The command line source files were written in Java language.
```
```
/Source Code/gFinder/
This floder contains the source code files of **gFinder**. 
The command line source files were written in C++ language and its GUI were written in Python language.
```
```
/Source Code/gRNA/
This floder contains the source code files of **gRNA** which were written in Java language.
```
* Source Data:
```
/Source Data/
This floder contains the source data files of **gRNA**.
The example database can be downloaded from RegulonDB, which can be found [here](http://regulondb.ccg.unam.mx/menu/download/datasets/index.jsp). The data which used in **gNAP** is flexible. All database in those form could be read in our software.
```

## How to Compile ##
To compile our source code, you should have:
* Qt   (we use version 5.1.0, which can be found [here](http://qt-project.org/downloads))
* Java (you can get install jre [here](http://www.java.com/))
* ant  (the compile tool)
* jse  (include jdk and etc.)
####Compile **gNAP**####
The GUI source files are written in C++ language with Qt Creator and the operation source files are also included in **gNAP.pro**. So the main functions could be compiled across platforms using Qt 5.1.0.
What's more, for better visualization, this part was written in Java language. So it should be compiled like this:
```
	Linux:
	open a terminal:
		cd gNAP-view
		sudo apt-get update
		sudo apt-get ant
	and, compile source code:
		ant
	Mac OS X:
	open a terminal:
		cd gNAP-view
		sudo brew install ant(or get ant with source code)
	and, compile source code:
		ant
	Windows:
		INSTALL ant from http://ant.apache.org/ and DO configure JAVA_HOME
		cd path/to/gNAP-view
		ant
	and than the jar file will in the folder dist
```
####Compile **gFinder**####
Coming soon...

####Compile **gRNA**####
All softwares which could compile Java are usable to compile this small game. All source code are included in floder: /Source Code/gRNA/

**For more information, please refer to our [wiki page](http://2013.igem.org/Team:USTC-Software).**
##Contacts##

For any questions, feel free to contact:

Chenkun Wang(ustckun@gmail.com)

Jinyang Li(jinyangustc@gmail.com)
