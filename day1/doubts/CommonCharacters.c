#include <stdio.h>
#define MAX_STR_LENGTH 100

int main()
{
    int numTestCases;
   printf("No. of test cases: ");
   scanf("%d", &numTestCases);

   // Process each test case
   for (int t = 0; t < numTestCases; t++) 
   {
       int numStrings;
       printf("No. of strings: ");
       scanf("%d", &numStrings); 
       char strings[numStrings][MAX_STR_LENGTH];
       // Read the strings
       for (int i = 0; i < numStrings; i++) {
           printf("Enter string: ");
           scanf("%s", strings[i]);
       }

        int countOfCommonChar = 0; // to count the number of common characters
         // Iterate over the characters in the first string
        for (int i = 0; strings[0][i] != '\0'; i++) 
        {
        char c = strings[0][i];
            int isCommon = 1;
            for(int j=1;j<numStrings;j++)
            {
                int found  = 0;
                for(int k=0;strings[j][k]!='\0';k++)
                {
                    if(strings[j][k]==c)
                    {
                        found = 1;
                        break;
                    }   
                }
                if(!found)
                {
                    isCommon = 0;
                    break;
                }
            }
                if (isCommon)
                {
                    countOfCommonChar++;
                }    
        }
        printf("Common Characters Count: %d",countOfCommonChar); 
    }
}

//#include <stdio.h>
//#include <stdbool.h>
//
//#define MAX_STR_LENGTH 100
//
//void findCommonCharacters(int numStrings, char strings[][MAX_STR_LENGTH]) {
//    // Initialize an array to store character frequencies
//    int charFreq[26] = {0};
//
//    // Iterate over the characters in the first string
//    for (int i = 0; strings[0][i] != '\0'; i++) {
//        char c = strings[0][i];
//        bool isCommon = true;
//
//        // Check if the character exists in all other strings
//        for (int j = 1; j < numStrings; j++) {
//            bool found = false;
//
//            // Iterate over the characters in the current string
//            for (int k = 0; strings[j][k] != '\0'; k++) {
//                if (strings[j][k] == c) {
//                    found = true;
//                    break;
//                }
//            }
//
//            if (!found) {
//                isCommon = false;
//                break;
//            }
//        }
//
//        if (isCommon) {
//            // Increment character frequency
//            charFreq[c - 'a']++;
//        }
//    }
//
//    // Print the common characters and count
//    printf("Common characters: ");
//    int count = 0;
//    for (int i = 0; i < 26; i++) {
//        if (charFreq[i] == 1) {
//            printf("%c ", 'a' + i);
//            count++;
//        }
//    }
//    printf("\n%d character(s) is common among all the strings.\n\n", count);
//}
//
//int main() {
//    int numTestCases;
//    printf("No. of test cases: ");
//    scanf("%d", &numTestCases);
//
//    // Process each test case
//    for (int t = 0; t < numTestCases; t++) {
//        int numStrings;
//        printf("No. of strings: ");
//        scanf("%d", &numStrings);
//        fflush(stdin); // Clear input buffer
//
//        char strings[numStrings][MAX_STR_LENGTH];
//
//        // Read the strings
//        for (int i = 0; i < numStrings; i++) {
//            printf("Enter string: ");
//            scanf("%s", strings[i]);
//            fflush(stdin); // Clear input buffer
//        }
//
//        // Find common characters
//        findCommonCharacters(numStrings, strings);
//    }
//
//    return 0;
//}
