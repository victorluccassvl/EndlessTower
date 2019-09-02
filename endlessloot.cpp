#include <cstdio>

// Tier 1
int dragon_fly = -1;		   // DF
int eclipse = -1;			   // EC
int ghostring = -1;			   // GH
int rotar_zairo = -1;          // RZ
int smokie = -1;               // SM
int toad = -1;                 // TO
int vocal = -1;                // VO

// Tier 2
int anubis = -1;               // AN
int gryphon = -1;              // GR
int hyegun = -1;               // HY
int mastering = -1;            // MA
int mutant_dragon = -1;        // MD
int orc_baby = -1;             // OB
int wood_goblin = -1;          // WG
int vagabond_wolf = -1;        // VW

// Tier 3
int alice = -1;                // AL
int chepet = -1;               // CH
int clock = -1;                // CL
int clock_tower_manager = -1;  // CT
int dark_illusion = -1;        // DI
int jakk = -1;                 // JA
int mysteltainn = -1;          // MY
int owl_duke = -1;             // OD
int rafflesia = -1;            // RA
int zherlthsh = -1;            // ZH

int solveInitials( char initials[] )
{
	if ( initials[0] == 'D' && initials[1] == 'F' )
	{
		if ( dragon_fly == -1 )
		{
			printf( "   Enter Dragon Fly value: " );
			scanf( "%d", &dragon_fly );
		}
		return dragon_fly;
	}
	if ( initials[0] == 'E' && initials[1] == 'C' )
	{
		if ( eclipse == -1 )
		{
			printf( "   Enter Eclipse value: " );
			scanf( "%d", &eclipse );
		}
		return eclipse;
	}
	if ( initials[0] == 'G' && initials[1] == 'H' )
	{
		if ( ghostring == -1 )
		{
			printf( "   Enter Ghostring value: " );
			scanf( "%d", &ghostring );
		}
		return ghostring;
	}
	if ( initials[0] == 'R' && initials[1] == 'Z' )
	{
		if ( rotar_zairo == -1 )
		{
			printf( "   Enter Rotar Zairo value: " );
			scanf( "%d", &rotar_zairo );
		}
		return rotar_zairo;
	}
	if ( initials[0] == 'S' && initials[1] == 'M' )
	{
		if ( smokie == -1 )
		{
			printf( "   Enter Smokie value: " );
			scanf( "%d", &smokie );
		}
		return smokie;
	}
	if ( initials[0] == 'T' && initials[1] == 'O' )
	{
		if ( toad == -1 )
		{
			printf( "   Enter Toad value: " );
			scanf( "%d", &toad );
		}
		return toad;
	}
	if ( initials[0] == 'V' && initials[1] == 'O' )
	{
		if ( vocal == -1 )
		{
			printf( "   Enter Vocal value: " );
			scanf( "%d", &vocal );
		}
		return vocal;
	}
	if ( initials[0] == 'A' && initials[1] == 'N' )
	{
		if ( anubis == -1 )
		{
			printf( "   Enter Anubis value: " );
			scanf( "%d", &anubis );
		}
		return anubis;
	}
	if ( initials[0] == 'G' && initials[1] == 'R' )
	{
		if ( gryphon == -1 )
		{
			printf( "   Enter Gryphon value: " );
			scanf( "%d", &gryphon );
		}
		return gryphon;
	}
	if ( initials[0] == 'H' && initials[1] == 'Y' )
	{
		if ( hyegun == -1 )
		{
			printf( "   Enter Hyegun value: " );
			scanf( "%d", &hyegun );
		}
		return hyegun;
	}
	if ( initials[0] == 'M' && initials[1] == 'A' )
	{
		if ( mastering == -1 )
		{
			printf( "   Enter Mastering value: " );
			scanf( "%d", &mastering );
		}
		return mastering;
	}
	if ( initials[0] == 'M' && initials[1] == 'D' )
	{
		if ( mutant_dragon == -1 )
		{
			printf( "   Enter Mutant Dragon value: " );
			scanf( "%d", &mutant_dragon );
		}
		return mutant_dragon;
	}
	if ( initials[0] == 'O' && initials[1] == 'B' )
	{
		if ( orc_baby == -1 )
		{
			printf( "   Enter Orc Baby value: " );
			scanf( "%d", &orc_baby );
		}
		return orc_baby;
	}
	if ( initials[0] == 'W' && initials[1] == 'G' )
	{
		if ( wood_goblin == -1 )
		{
			printf( "   Enter Wood Goblin value: " );
			scanf( "%d", &wood_goblin );
		}
		return wood_goblin;
	}
	if ( initials[0] == 'V' && initials[1] == 'W' )
	{
		if ( vagabond_wolf == -1 )
		{
			printf( "   Enter Vagabond Wolf value: " );
			scanf( "%d", &vagabond_wolf );
		}
		return vagabond_wolf;
	}

	printf( "WARNING: %s is not a valid initial, try again.\n", initials );
	scanf( "%s", initials );

	return solveInitials( initials );
}


int main()
{

	int maximum_floor;
	printf( "Select Maximum Floor: " );
	scanf( "%d", &maximum_floor );

	if ( maximum_floor <= 0 )
	{
		return 0;
	}
/*

	if ( maximum_floor < 113 )
	{
		printf( "   Enter Alice value: " );
		scanf( "%d", &alice );
		printf( "   Enter Chepet value: " );
		scanf( "%d", &chepet );
		printf( "   Enter Clock value: " );
		scanf( "%d", &clock );
		printf( "   Enter Clock Tower Manager value: " );
		scanf( "%d", &clock_tower_manager );
		printf( "   Enter Dark Illusion value: " );
		scanf( "%d", &dark_illusion );
		printf( "   Enter Jakk value: " );
		scanf( "%d", &jakk );
		printf( "   Enter Mysteltainn value: " );
		scanf( "%d", &mysteltainn );
		printf( "   Enter Owl Duke value: " );
		scanf( "%d", &owl_duke );
		printf( "   Enter Rafflesia value: " );
		scanf( "%d", &rafflesia );
		printf( "   Enter Zherlthsh value: " );
		scanf( "%d", &zherlthsh );
	}
*/
	int channel_value[11];
	for( int i = 0 ; i < 10 ; i++ )
	{
		channel_value[i] = 0;
	}

	char initials[3];

	for( int c = 1 ; c <= 10 ; c++ )
	{
		printf( "\n\n----- CHANNEL %d -----\n", c % 10 );
		for( int i = 0 ; i <= maximum_floor ; i++ )
		{
			if ( i % 10 == 6 || i % 10 == 3 )
			{
				printf( "Floor %3d: ", i );
				if ( i >= 3 )
				{
					scanf( "%s", initials );
					channel_value[c % 10] += solveInitials( initials );
				}
				if ( i >= 43 )
				{
					scanf( "%s", initials );
					channel_value[c % 10] += solveInitials( initials );
				}
				if ( i >= 73 )
				{
					scanf( "%s", initials );
					channel_value[c % 10] += solveInitials( initials );
				}
			}
		}
	}

	printf( "\n\n-----Results-----\n" );
	for( int c = 1 ; c <= 10 ; c++ )
	{
		printf(" Channel %d: %d k\n", c % 10, channel_value[c % 10] );
	}

	return 0;
}