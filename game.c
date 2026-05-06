//Contributors
//GP+
//LS
//Ryan Rodriguez
//Charles Parker
//Kristopher Willett
//
//
//

void ANFUN(void);


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


//place function prototypes here

//dcortez function prototypes 
void dcFunc(void);
void dcFuncEnding(int rep[], char *factions[]);

void cparkerFun(void);
void rgarcia_fun(void);
void ls(void);
void mnFun(void);
void JMfun(void);
void RRlab(void);
void jwFunc(void);
void jsl();
void dcFun(void);
void abFun(void);
void function13AG(void);
void theSigmaMethod(void);
void jbInit(void);
void ip21(void);
void folksamEV(void);
void sonionRH(void);
void ip21(void);
void rtFun(void);
void JLeyva(void);
void fish(void);
void printStudent30(void);
void printInitialsAjewett(void);
void jgFun(void);
void printInitialsSMarkos(void);
void brooklynstitt(void);
void PogoAM(void);
void aaGM(void);
void room49game(void);
void dleyva14(void);
void stanPush(void);
void printdAfeworkIntials(void);
void kwillett48(void);
void ncInitial(void);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to THE RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 75 doors, each labeled with a number.");
		puts("The room starts filling with water and a loud voice tells you that you must choose a door to open and enter or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				cparkerFun();
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				jwFunc();
				puts("room7");
				break;
			}
			case 8:
			{
				folksamEV();
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				printInitialsAjewett();
				break;
			}
			case 10:
			{
				fish();
				puts("room10");
				break;
			}
			case 11:
			{
				dleyva14();
				puts("room11");
				break;
			}
			case 12:
			{
				ANFUN();
				puts("room12");
				break;
			}
			case 13:
			{
				function13AG();
				puts("room13");
				break;
			}
			case 14:
			{
				dcFun();
				puts("room14");
				break;
			}
			case 15:
			{
				ncInitial();
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				jbInit();
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				dcFunc();
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				ip21();
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				printdAfeworkIntials();
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				JMfun();
				puts("room24");
				break;
			}
			case 25:
			{

				mnFun(); 
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
     				theSigmaMethod();
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}
			case 29:
			{	
				abFun();
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				printStudent30();
				break;
			}
			case 31:
			{
				PogoAM();

				puts("room31");
				break;
			}
			case 32:
			{
				aaGM();
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room34");
				break;
			}
			case 35:
			{
				sonionRH();
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{      
                                ls();
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				jgFun();
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				stanPush();
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				brooklynstitt();
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				rgarcia_fun();
				puts("room47");
				break;
			}
			case 48:
			{
				kwillett48();
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				room49game();
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 56:
			{
                                JLeyva();
				puts("room56");
                                break;
			}
			case 57:
			{
				rtFun();
                                puts("room57");
                                break;
			}
			case 58:
			{
				printInitialsSMarkos();
                                puts("room58");
                                break;
			}
			case 59:
			{
				jsl();
                                puts("room59");
                                break;
			}
			case 60:
			{
				puts("room60");
                                break;
			}
			case 61:
			{
				RRlab();
                                puts("room61");
                                break;
			}
			case 62:
			{
                                puts("room62");
                                break;
			}
			case 63:
			{
                                puts("room63");
                                break;
			}
			case 64:
			{
                                puts("room64");
                                break;
			}
			case 65:
			{
                                puts("room65");
                                break;
			}
			case 66:
			{
                                puts("room66");
                                break;
			}
			case 67:
			{
                                puts("room67");
                                break;
			}
			case 68:
			{
                                puts("room68");
                                break;
			}
			case 69:
                        {
                                puts("room69");
                                break;
                        }
			case 70:
                        {
                                puts("room70");
                                break;
                        }
			case 71:
                        {
                                puts("room71");
                                break;
                        }
			case 72:
                        {
                                puts("room72");
                                break;
                        }
			case 73:
                        {
                                puts("room73");
                                break;
                        }
			case 74:
                        {
                                puts("room74");
                                break;
                        }
			case 75:
                        {
                                puts("room75");
                                break;
                        }
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place function definitions below this comment

//dcortez function definintion
typedef struct
{
	int health;
}  DCJPlayer;

//dcortez RPG Game
void dcFunc(void)
{
	//struct usage
	DCJPlayer player;
	player.health = 100;

	int choice;
	int i = 0;

	//array: (faction names and reputation scores)
	char *factions[4];
	factions[0] = "The Ordained (Theocratic Moral Authority)";
	factions[1] = "The New Meridian (Sacrificial Utopian Civilization)";
	factions[2] = "The Hollow Feast (Brotherhood of Endurance)";
	factions[3] = "The Cartographers of the Unnamed (Keepers of Old Questions)";

	int rep[4] = {0, 0, 0, 0};

	printf("\n=== ROOM 19: THE LAST BROADCAST ===\n");
	printf("You wake up at the crossroads of four territories.\n");
	printf("A pre-war broadcast tower looms above you, still humming.\n");
	printf("You don't remember who you are. But four factions do.\n");
	printf("Health: %d\n", player.health);

	//loop: (displaying factions)
	printf("\nThe four factions vying for this tower:\n");

	for(i = 0; i < 4; i++)
	{
		printf("  %d. %s\n", i+1, factions[i]);
	}

	//CHOICE 1
	printf("\n--- CHOICE 1 ---\n");
	printf("A robed figure from the Ordained approaches. \n");
	printf("They utter a creed:\n");
	printf("\"We are the law that God forgot to write, every soul we've\n");
	printf("ended was already damned, we simply made it official.\"\n");
	printf("They demand you hand over a wounded stranger hiding behind you.\n");
	printf("Do you comply? (1=yes, 0=no): ");
	scanf("%d", &choice);
	printf("\n");
	//loop (input validation)
	while(choice != 0 && choice != 1)
	{
		printf("Invalid, Enter 1 or 0: ");
		scanf("%d", &choice);
	}
	if(choice == 1)
	{
		rep[0] += 2;
		rep[2] -= 1;
		printf("The stranger is taken. The Ordained nod approvingly. \n");
		printf("The Hollow Feast witnessed this. They are disappointed.\n");
	}
	else
	{
		rep[0] -= 1;
		rep[2] += 1;
		rep[3] += 1;
		player.health -= 5;
		printf("You refuse. The robed figure leaves with a warning.\n");
		printf("Somewhere, a Cartographer wrote that down.\n");
		printf("Health: %d\n", player.health);
	}

    //CHOICE 2
    printf("\n--- CHOICE 2 ---\n");
    printf("You find a pre-war document in the rubble.\n");
    printf("It proves The New Meridian's first sacrifice could have been an innocent man.\n");
    printf("You question if their sacrificial ritual was built on a lie.\n");
    printf("What do you do?\n");
    printf("  1. Give it to The Ordained (weaponize it)\n");
    printf("  2. Give it to The Cartographers (let truth decide)\n");
    printf("  3. Burn it (protect stability)\n");
    printf("Choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 3)
    {
        printf("Invalid. Enter 1, 2, or 3: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[0] += 2;
        rep[1] -= 2;
        printf("The Ordained use it as propaganda immediately.\n");
        printf("New Meridian citizens riot. People die.\n");
    }
    else if(choice == 2)
    {
        rep[3] += 3;
        rep[1] -= 1;
        printf("The Cartographers publish it as a question, not an accusation.\n");
        printf("New Meridian is shaken but survives. Truth costs something.\n");
    }
    else
    {
        rep[1] += 1;
        rep[3] -= 2;
        printf("You burn it. Stability preserved.\n");
        printf("The Cartographers lose interest in you.\n");
        printf("Some lies hold civilizations together.\n");
    }

    //random number: chance encounter between choices
    printf("\n--- A CHANCE ENCOUNTER ---\n");
    int event = rand() % 3;

    if(event == 0)
    {
        printf("A Hollow Feast initiate collapses near you, starving.\n");
        printf("You share your rations. -10 health, +1 Hollow Feast rep.\n");
        player.health -= 10;
        rep[2] += 1;
    }
    else if(event == 1)
    {
        printf("A New Meridian scout patches your wounds unprompted.\n");
        printf("\"We help first. We ask questions at the altar.\" +15 health.\n");
        player.health += 15;
        rep[1] += 1;
    }
    else
    {
        printf("You find a cache of pre-war rations. +20 health.\n");
        player.health += 20;
    }
    printf("Health: %d\n", player.health);

    //CHOICE 3
    printf("\n--- CHOICE 3 ---\n");
    printf("The Hollow Feast and The New Meridian clash at the tower base.\n");
    printf("\"The Hollow Feast yells:\n");
    printf("\"Pain is the only honest teacher left in this world, we just\n");
    printf("can't always remember where the lesson ends and the hunger begins!\"\n");
    printf("The Hollow Feast are losing. Intervene for them? (1=yes, 0=no): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice != 0 && choice != 1)
    {
        printf("Invalid. Enter 1 or 0: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[2] += 3;
        rep[1] -= 2;
        player.health -= 20;
        printf("You pull The Hollow Feast back from the brink.\n");
        printf("You take damage doing it. Health: %d\n", player.health);
    }
    else
    {
        rep[1] += 1;
        printf("You watch. New Meridian wins. Order is maintained.\n");
        printf("The Hollow Feast remember your face.\n");
    }

    //CHOICE 4
    printf("\n--- CHOICE 4 ---\n");
    printf("The Cartographers find you alone.\n");
    printf("\"We don't follow leaders, we follow questions, ask us something\n");
    printf("we've never heard before and we'll die for you,\n");
    printf("ask us nothing and we'll forget you exist.\"\n");
    printf("They ask: do you believe any faction deserves the tower?\n");
    printf("  1. Yes, one of them does\n");
    printf("  2. No, none of them do\n");
    printf("  3. Stay silent\n");
    printf("Choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 3)
    {
        printf("Invalid. Enter 1, 2, or 3: ");
        scanf("%d", &choice);
    }
    if(choice == 1)
    {
        rep[3] -= 1;
        printf("They are disappointed.\n");
        printf("\"Certainty is the beginning of every atrocity.\"\n");
    }
    else if(choice == 2)
    {
        rep[3] += 3;
        player.health += 10;
        printf("They are silent for a long moment.\n");
        printf("\"Then you might be worth following.\"\n");
        printf("Health: %d\n", player.health);
    }
    else
    {
        rep[3] += 2;
        printf("You say nothing. They smile.\n");
        printf("\"Good. Questions live longer than answers.\"\n");
    }

    //CHOICE 5
    printf("\n--- CHOICE 5: THE TOWER ---\n");
    printf("The broadcast tower was yours to give based off your actions.\n");
    printf("Who do you think should control the voice of this wasteland.\n");
    printf("  1. The Ordained\n");
    printf("  2. The New Meridian\n");
    printf("  3. The Hollow Feast\n");
    printf("  4. The Cartographers of the Unnamed\n");
    printf("  5. Destroy the tower. No one gets it.\n");
    printf("Choice (1-5): ");
    scanf("%d", &choice);
    printf("\n");

    while(choice < 1 || choice > 5)
    {
        printf("Invalid. Enter 1-5: ");
        scanf("%d", &choice);
    }
    if(choice <= 4)
    {
        rep[choice - 1] += 5;
    }
    else
{
    rep[0] = 0;
    rep[1] = 0;
    rep[2] = 0;
    rep[3] = 0;
}

    //call to separate function
    dcFuncEnding(rep, factions);

    //returns to menu loop naturally when function ends
    printf("You step back through the door, the tower humming behind you.\n\n");
}

//dcortez Second Funtion(for ending)
void dcFuncEnding(int rep[], char *factions[])
{
    int i = 0;
    int best = 0;
    int bestIdx = 0;

    for(i = 0; i < 4; i++)
    {
        if(rep[i] > best)
        {
            best = rep[i];
            bestIdx = i;
        }
    }

    printf("\n=== THE BROADCAST GOES LIVE ===\n");

    if(best == 0)
    {
	printf("\n");
	printf("#%%@!#%%@!\n");
	printf("%%@!#%%@!#\n");
	printf("@!#%%@!#%%\n");
	printf("\n");
        printf("No faction trusts you. The tower broadcasts static.\n");
        printf("In the wasteland, silence is its own kind of answer.\n");
        return;
    }

    printf("Based on your actions: The tower now speaks for %s\n\n", factions[bestIdx]);

    if(bestIdx == 0)
    {
	printf("\n");
	printf("    +\n");
    	printf(" +++++++\n");
    	printf("    +\n");
    	printf(" +++++++\n");
    	printf("    +\n");
	printf("\n");
        printf("The Ordained's voice fills the wasteland.\n");
        printf("People obey. People fear. The body count does not stop.\n");
        printf("Order is maintained. Whether it is good is another question.\n");
    }
    else if(bestIdx == 1)
    {
	printf("\n");
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf("    |\n");
	printf("    |\n");
	printf("\n");
        printf("New Meridian broadcasts science, medicine, education.\n");
        printf("The harvest moon comes. The altar runs red as promised.\n");
        printf("Progress and ritual, holding hands over a grave.\n");
    }
    else if(bestIdx == 2)
    {
	printf("\n");
	printf("  o o\n");
	printf(" o   o\n");
	printf("  o o\n");
	printf("    o o\n");
	printf("   o   o\n");
	printf("    o o\n");
	printf("\n");
	printf("The Hollow Feast broadcasts silence, then screaming, then philosophy.\n");
        printf("Nobody knows what to make of it. Some find it freeing.\n");
        printf("Pain is still the teacher. Class is always in session.\n");
    }
    else
    {
	printf("\n");
	printf("    N\n");
	printf("  W + E\n");
	printf("    S\n");
	printf("\n");
        printf("The Cartographers broadcast only questions. No answers.\n");
        printf("People argue, think, doubt, and occasionally change their minds.\n");
        printf("It is the most dangerous broadcast in wasteland history.\n");
    }
}

void room49game(void)
{
	printf("G.C\n");
}

void mnFun(void)
{
	puts("MNroom25");
}



//place functions here
//
void cparkerFun(void)
{
	printf("C P\n");
}
void rgarcia_fun(void)
{
	printf("RJG");
}



void ls(void)
{
	printf("LS\n");
       
}
void JMfun(void)
{
	printf("JM");
}


void RRlab(void)
{
	printf("RRroom61\n");
}


void jwFunc(void)
{
	printf("JW\n");
}



void jsl(void)
{
	printf("JSL\n");
}




void PogoAM(void)
{
	printf("AM\n");
}
void dcFun(void)
{
	printf("DC\n");
}




void function13AG(void)
{
	printf("AG\n");
}
void abFun(void)
{
	printf("AB");
}



void theSigmaMethod(void)
{
  printf("J.Q.\n");

}


void folksamEV(void) 
{
	printf("EV\n");
}

void sonionRH(void) 
{
	printf("RAOOL-HIG\n");
}

void jbInit()
{
	puts("jbRoom17");
}

// Case 45:
void brooklynstitt(void)
{
	printf("Initials: BAS\n\n");
}

void ip21(void)
{
	printf("IP\n");
}

void rtFun(void)
{
	printf("RT");
}

void JLeyva(void)
{
	printf("JL");
}

void fish(void) 
{
	printf("JF");

}

void printStudent30(void)
{
	printf("Student initials CP\n");
}

void printInitialsAjewett(void)
{
	printf("AJ\n");
}

void jgFun(void)
{
	printf("JGB");	

}

void printInitialsSMarkos(void) 
{
	printf("SM\n");
}

void aaGM(void)
{
	printf("AA\n");
}

void ANFUN(void)
{
    printf("AN");
}
void dleyva14(void)
{
	printf("DL\n");
}

void printdAfeworkIntials(void)
{
	puts("DA");
}


void kwillett48(void)
{
	printf("KDW");
}

void ncInitial(void)
{
	printf("NC");
}



void stanPush(void)
{
	puts(" S J \n");
}

