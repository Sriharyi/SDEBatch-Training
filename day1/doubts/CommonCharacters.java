


//brute force solution:
// import java.util.*;

// public class CommonCharacters {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Read the number of test cases
//         System.out.print("No. of test cases: ");
//         int numTestCases = scanner.nextInt();

//         // Process each test case
//         for (int t = 0; t < numTestCases; t++) {
//             // Read the number of strings
//             System.out.print("No. of strings: ");
//             int numStrings = scanner.nextInt();
//             scanner.nextLine(); // Consume the newline character

//             // Initialize an array of strings
//             String[] strings = new String[numStrings];

//             // Read the strings
//             for (int i = 0; i < numStrings; i++) {
//                 System.out.print("Enter string: ");
//                 strings[i] = scanner.nextLine();
//             }

//             // Find common characters
//             List<Character> commonChars = new ArrayList<>();

//             // Iterate over the characters in the first string
//             for (char c : strings[0].toCharArray()) {
//                 boolean isCommon = true;
//                 // Check if the character exists in all other strings
//                 for (int i = 1; i < numStrings; i++) {
//                     if (strings[i].indexOf(c) == -1) {
//                         isCommon = false;
//                         break;
//                     }
//                 }
//                 if (isCommon && !commonChars.contains(c)) {
//                     commonChars.add(c);
//                 }
//             }

//             // Print the common characters and count
//             System.out.println("Common characters: " + commonChars);
//             System.out.println(commonChars.size() + " character(s) is common among all the strings.");
//             System.out.println();
//         }
//     }
// }


// //find using intersection solution:

// import java.util.*;

// public class CommonCharacters {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Read the number of test cases
//         System.out.print("No. of test cases: ");
//         int numTestCases = scanner.nextInt();

//         // Process each test case
//         for (int t = 0; t < numTestCases; t++) {
//             // Read the number of strings
//             System.out.print("No. of strings: ");
//             int numStrings = scanner.nextInt();
//             scanner.nextLine(); // Consume the newline character

//             // Initialize the intersection set
//             Set<Character> intersection = new HashSet<>();

//             // Read the strings
//             for (int i = 0; i < numStrings; i++) {
//                 System.out.print("Enter string: ");
//                 String string = scanner.nextLine();
//                 Set<Character> charSet = new HashSet<>();
//                 // Convert the string characters into a set
//                 for (char c : string.toCharArray()) {
//                     charSet.add(c);
//                 }
//                 // Find the intersection with the intersection set
//                 if (i == 0) {
//                     intersection.addAll(charSet);
//                 } else {
//                     intersection.retainAll(charSet);
//                 }
//             }

//             // Print the common characters and count
//             List<Character> commonChars = new ArrayList<>(intersection);
//             System.out.println("Common characters: " + commonChars);
//             System.out.println(commonChars.size() + " character(s) is common among all the strings.");
//             System.out.println();
//         }
//     }
// }



//hashmap solution:


// import java.util.*;

// public class CommonCharacters {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Read the number of test cases
//         System.out.print("No. of test cases: ");
//         int numTestCases = scanner.nextInt();

//         // Process each test case
//         for (int t = 0; t < numTestCases; t++) {
//             // Read the number of strings
//             System.out.print("No. of strings: ");
//             int numStrings = scanner.nextInt();
//             scanner.nextLine(); // Consume the newline character

//             // Initialize a map to store the character frequencies
//             Map<Character, Integer> charFreq = new HashMap<>();

//             // Process each string
//             for (int i = 0; i < numStrings; i++) {
//                 System.out.print("Enter string: ");
//                 String string = scanner.nextLine();
//                 // Update character frequencies
//                 Set<Character> uniqueChars = new HashSet<>();
//                 for (char c : string.toCharArray()) {
//                     uniqueChars.add(c);
//                 }
//                 // Increment character frequencies
//                 for (char c : uniqueChars) {
//                     charFreq.put(c, charFreq.getOrDefault(c, 0) + 1);
//                 }
//             }

//             // Find common characters
//             List<Character> commonChars = new ArrayList<>();
//             for (Map.Entry<Character, Integer> entry : charFreq.entrySet()) {
//                 if (entry.getValue() == numStrings) {
//                     commonChars.add(entry.getKey());
//                 }
//             }

//             // Print the common characters and count
//             System.out.println("Common characters: " + commonChars);
//             System.out.println(commonChars.size() + " character(s) is common among all the strings.");
//             System.out.println();
//         }
//     }
// }

