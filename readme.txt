/**********************************************************************
 *  readme template                                                   
 *  DNA Sequence Alignment
 **********************************************************************/

Name: Mandar Kapadia

Hours to complete assignment (optional): 5 hours 


/**********************************************************************
 *  Explain what you did to find the alignment itself.
 **********************************************************************/
    in the alignment we would go through the list and see which is the most effient 
    route by going from the end to begin and we get that by look at i-1 j-1 or i -1 j , i j-1 and see
    which one is more effient we add gaps in the a or b list depending or i-1 and j-1.


/**********************************************************************
 * You are required to create one additional test case by hand. 
 * It should be constructed in such a way that you know the correct 
 * output before running your program on it, and it should be a 
 * "corner case" that helps check if your program handles all special 
 * situations correctly. Please list:
 * - a copy of the test case input
 * - the expected test case output
 * - whether your program ran correctly on it or not
 * - optionally, any other remarks
 **********************************************************************/
Input: SDFAD 
TEW

Expected output:
                  S - 2
                  D - 2
                  F T 1
                  A E 1
                  D W 1
What happened:
                  S - 2
                  D - 2
                  F T 1
                  A E 1
                  D W 1

/**********************************************************************
 *  How much main memory does your computer have? Typical answers
 *  are 2GB and 4GB. If your machine has 512MB or less, use a cluster
 *  machine for this readme (see the checklist for instructions).
 **********************************************************************/
4gb in memory.


/**********************************************************************
 *  For this question assume M=N. Look at your code and determine
 *  approximately how much memory it uses in bytes, as a function of 
 *  N. Give an answer of the form a * N^b for some constants a 
 *  and b, where b is an integer. Note chars are 2 bytes long, and 
 *  ints are 4 bytes long.
 *
 *  Provide a brief explanation.
 *
 *  What is the largest N that your program can handle if it is
 *  limited to 1GB (billion bytes) of memory?
 **********************************************************************/
a = 4
b = 2
largest N = 15000

I think this because you want all the cells so its n^2 and then *4 to get all the ints and you olnt have 1 gig
so 15000
/**********************************************************************
 *  For each data file, fill in the edit distance computed by your
 *  program and the amount of time it takes to compute it.
 *  For help on how to do timing, see the checklist (e.g. -Xprof).
 *  If you get an OutOfMemoryError, see the checklist about -Xmx.
 *  If you get "Could not reserve enough space for object heap" or the timing
 *  of these tests takes too long for the last few test cases (N=20000 or higher), 
 *   note this, and skip filling out those rows of the table.
 **********************************************************************/

data file           distance       time (seconds)
-------------------------------------------------
ecoli2500.txt       118             0.339045seconds
ecoli5000.txt       160             1.31225seconds
ecoli10000.txt      223             5.42131seconds
ecoli20000.txt      3135            21.7494seconds
ecoli50000.txt      19485           142.941seconds
ecoli100000.txt     it kills itself becusae i ran out of memory.


/*************************************************************************
 *  Here are sample outputs from a run on a different machine for 
 *  comparison.
 ************************************************************************/

data file           distance       time (seconds)
-------------------------------------------------
ecoli2500.txt          118             0.171
ecoli5000.txt          160             0.529
ecoli7000.txt          194             0.990
ecoli10000.txt         223             1.972
ecoli20000.txt         3135            7.730

/**********************************************************************
 *  For this question assume M=N (which is true for the sample files 
 *  above). By applying the doubling method to the data points that you
 *  obtained, estimate the running time of your program in seconds as a 
 *  polynomial function a * N^b of N, where b is an integer.
 *  (If your data seems not to work, describe what went wrong and use 
 *  the sample data instead.)
 *
 *  Provide a brief justification/explanation of how you applied the
 *  doubling method.
 * 
 *  What is the largest N your program can handle if it is limited to 1
 *  day of computation? Assume you have as much main memory as you need.
 **********************************************************************/
a = 4
b = 2
largest N = 120000.
  I did the same thing as last time but i multiplied by 8 and got 120000 to get 
  my output cuz i have 8gb in ram.
/**********************************************************************
 *  If you worked with a partner, do you have any remarks on the pair
 *  programming method? E.g., how many times did you switch, what are
 *  the tradeoffs of driving vs. navigating, etc.
 **********************************************************************/
 I think the pair programming it a great think for me and my partner khadeer 
 becuase we could get breaks between programming and have a more relaxed time when debugging
 I think driving is more fun for me becuase I liked becuase I like to code and its 
 easier for me to code when I can't explain something we switched 10 times every 30 mins or so.


/**********************************************************************
 *  List whatever help (if any) you received from lab TAs, preceptors,
 *  classmates, past COS 126 students, or anyone else.
 **********************************************************************/
I worked khadeer. I used dr daily matrix for implenetaion and smart pointers.

I have a macos and m1 chip with 8gb ram 3.2ghz


/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/

we had some problems with out of bounds but we fixed it 

/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/



