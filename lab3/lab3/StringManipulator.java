package lab3;
import java.lang.String;
import java.util.Scanner;

public class StringManipulator {

	public static void main(String[] args)
	{
		String str = ""; // string that is being manipulated 
		String command = ""; //command used
		Scanner sc = new Scanner(System.in); //scanner to read input
		System.out.println("String manipulator.TM");
		System.out.println("Welcome enter the string to be manipulated");
		//Getting initial string
		str = sc.nextLine();
		//command menu quit will exit menu
		while (!command.equals("quit"))
		{
			System.out.println("Enter your command (quit, print reverse, replace all, replace single, remove)");
			//entering in command
			command = sc.nextLine();
				if (command.equals("print reverse"))
				{
					String reverse = "";
					for (int i = 0; i <= str.length()-1; i ++) //reads str from front to back 
					{
						reverse =  str.charAt(i) + reverse; //builds reverse string by adding backward
					}
					System.out.println(reverse);
				}
				else if (command.equals("replace all"))
				{
					System.out.println("Which character are we replacning all of?");
					String replace = sc.next(); // char we are replacing 
					String newStr = ""; // local variable to check if str does not have char user is trying to remove
					//Validating we are only removing one char 
					while (replace.length() != 1)
					{
						System.out.println("ERROR please only input one character");
						System.out.println("Which character are we replacing all of?");
						replace = sc.next();
						
					}
					System.out.println("What are we replacing all " + replace + " to?" );
					String replacement = sc.next(); // char we are inputing in place of original
					//Validating we are only replacing one char
					while (replacement.length() != 1)
					{
						System.out.println("ERROR please only input one character");
						System.out.println("What are we replacing all " + replace + " to?" );
						replacement = sc.next();
						
					}
					// created newStr to check if str actually has any chars to replace here 
					newStr = str.replaceAll(replace, replacement);
					if (str.equals(newStr))
					{
						System.out.println("ERROR String did not have a " + replace + " to replace");
					}
					else
					{
						str = newStr;
					}
					sc.nextLine();
					
				}
				else if(command.equals("replace single"))
				{
					System.out.println("Which character are we replacing?");
						String replace = sc.next(); // char we are replacing 
						//Validating we are only removing one char 
						while (replace.length() != 1)
						{
							System.out.println("ERROR please only input one character");
							System.out.println("Which character are we replacing?");
							replace = sc.next();
							
						}
						char replaceChar = replace.charAt(0); // changes replace to char so I can compare it char by char in my for loop later
						System.out.println("What are we replacing " + replace + " to?" );
						String replacement = sc.next(); // char we are inputing in place of original
						//Validating we are only replacing one char
						while (replacement.length() != 1)
						{
							System.out.println("ERROR please only input one character");
							System.out.println("What are we replacing " + replace + " to?" );
							replacement = sc.next();
							
						}
						System.out.println("Which "+ replace + " Are we replacing (enter one number)");
						int replaceInstance = sc.nextInt(); // replacing the nth instance of the character
						
						if (replaceInstance < 0) 
						{
							System.out.println("ERROR you cannot have negitive instance of " + replace);
						}
						int instance = 0;
						
						for (int i = 0; i <= str.length() - 1; i ++)
						{
							if (str.charAt(i) == replaceChar)
							{
								instance++;
								if (instance == replaceInstance)
								{
									String newStr = "";
									// builds new string copying each char until repacing character
									for(int j = 0; j < i; j++)
									{
										newStr =  newStr + str.charAt(j);
									}
									//replaces the character user chose
									newStr = newStr + replacement;
									//builds the rest of the string using the rest of chars from str
									for(int j = i + 1; j <= str.length()-1; j++)
									{
										newStr =  newStr + str.charAt(j);
									}
									str = newStr;
								}
								
							}
							// telling the user program could not find their character at all
							else if (instance != replaceInstance)
							{
								if (i == str.length()-1)
								{
									System.out.println("ERROR There was no " + replace + " to replace there");
								}
							}
						}
						//Telling user if they are looking for nth instance of the character they are replacing that doesn't exist
						if (replaceInstance > instance)
						{
							System.out.println("ERROR There is no " + replaceInstance + "(th) instance of " + replace);
						}
						sc.nextLine();
						
					}
				else if (command.equals("remove"))
				{
					System.out.println("Which character are we removing");
					String remove = sc.next();
					String newStr = "";  //local variable to hold new version temporarily to check for errors
					//Verify only one char is typed for the char we are removing
					while (remove.length() != 1)
					{
						System.out.println("ERROR please only input one character");
						remove = sc.next();
					}
					newStr = str.replaceAll(remove,""); //replacing those chars with empty data removes them
					//Had to create an if statement to check for no changes (which should be and error)
					if (str.equals(newStr))
					{
						System.out.println("ERROR String did not have a " + remove + " to remove");
					}
					else
					{
						str = newStr;
					}
					sc.nextLine();
				
				}
				else if (!command.equals("quit") )
				{
					System.out.println("ERROR command not recognized");
				}
			System.out.print("Your string: ");
			System.out.println(str);
			
		}
		System.out.println("You Quit. Thanks for using string manipulator");
		sc.close();
		
	}
	


}
