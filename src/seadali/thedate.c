/* static char *SccsId = "@(#)thedate.c 1.2 (Delft University of Technology) 11/05/92"; */
/**********************************************************

Name/Version      : trout/1.2

Language          : C
Operating system  : UNIX SYSTEM V
Host machine      : any

Author(s)         : Patrick Groeneveld and Paul Stravers
Creation date     : april 1992
Modified by       : 
Modification date : April 15, 1992


        Delft University of Technology
        Department of Electrical Engineering
        Mekelweg 4 - P.O.Box 5031
        2600 GA DELFT
        The Netherlands

        Phone : 015 - 786240

        COPYRIGHT (C) 1992 , All rights reserved
**********************************************************/

#ifndef THEDATE
#define THEDATE "<sometimes>"
#endif
#ifndef THEHOST
#define THEHOST "<somewhere>"
#endif
#ifndef THEMAN
#define THEMAN "<mr. X>"
#endif


char *thedate = THEDATE;
char *theman = THEMAN;
char *thehost = THEHOST;
