///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Justn Ward-Kizanis
// class: csc1 140
// Assignment: Lab 3
// Program Description: Tells user their horescope and if they are blue moon or not
// input: Month and day of users birthday   
// Processing: runs through if statements to find month and date corresponding to sign then for that sign it finds the blue moon dates
// Output: sign and a little description of signs horoscope and if they are blue moon 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int main ()
{
    //defining variables 
    int birthMonth = 0;
    int birthDay = 0;


//introducing user to program function
    cout << endl << endl;
    cout << "**************************************************" << endl;
    cout << " WELCOME TO BLUE MOON HOROSCOPE" << endl;
    cout << " We can give your horescope based on your birth month and date,"
         << " and a lucky few of you recieve" << endl << " a special horescope based on the position of the moon on the night you were born" << endl;
    cout << "**************************************************" << endl;
//asking for and inputing user data
    cout << "Please enter your birth month and birth followed by a space, then your birth date to find out your "                                             
         << "horoscope!" << endl;
    cin >> birthMonth >> birthDay;
// Checks if Aquarius 
    if ((birthMonth == 1 && birthDay >= 20 && birthDay <= 31) || (birthMonth == 2 && birthDay <= 18 && birthDay >0))
    {
        cout << endl << "You are Aquarius" << endl << endl;
        cout << "   Usually you are reserved, normally shy and quiet, but if challenged on your beliefs you do not waiver and are unafraid to fight. You are not a momma's boy or girl, you are independant and know exactly what you want now and ten years from now. You have a compatibly energy around you that allows for friendship and deep affection." << endl;
        cout << endl << "   Today you will face a moment where you will come out of your shyness, if you can you will be rewarded if you cannot, nothing will chage." << endl << endl; 
        if (birthDay >= 29 && birthDay <= 31)
            // check BLUE MOON
        {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
        }
        cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
    }
//checks if Pisces
    else if ((birthMonth == 2 && birthDay >= 19 && birthDay <=29) || (birthMonth == 3 && birthDay <= 20 && birthDay > 0))

    {
            cout << endl << "You are Pisces" << endl << endl;
        cout << "   Pisces are known to have an artistic quality be it music, art, or something else. You may find yourself in the company of people very diffrent people. You are trusting (even gullible) with a high emotional need, aswell as tollerance. Pisces are romantics and you love big mushy gestures and emotional connection over physical characteristics" << endl;
        cout << endl << "   Today you will face something deeply challanging, take comfort in those around you and be vunerable in order to overcome it" << endl << endl;
            if (birthDay >= 11 && birthDay <=13)
                //checks BLUE MOON
            {
                cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
         cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
    }
//checks if Aries (cannot be blue mooon)
    else if((birthMonth == 3 && birthDay >= 21 && birthDay <= 30) || (birthMonth == 4 && birthDay <= 19 && birthDay > 0))
    {
        cout << endl << "You are Aries" << endl << endl;
        cout << "   You like to go, to move, being extreemly competitive you like to come first at everything you do, making you a very hard worker. Often ablke to multi-task well you take on as much of the world as you can. Aries loves leadership, but are often impulsive and aggressive" << endl;
        cout << endl << "   Your inner masculinity and Femininity is confused, try to work on seeing the other side more in oder to lead a balaced life" << endl << endl;
        cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
        
            
    }    
//checks if Taurus
    else if ((birthMonth == 4 && birthDay >= 20 && birthDay <= 30) || (birthMonth == 5 && birthDay <= 20 && birthDay > 0))

    {
        cout << endl << "You are Taurus" << endl << endl;
        cout << "   Normally commited to everything they do, you are the oppisite of a quiter. You have a grounded sense of reality, aswell as an uncomprimising nature (some may call you stubborn). You value the aesthetics of life and try to surround yourself with nice things and beautiful people. You are a very loyal individual but do not enjoy change in fact change causes you great amounts of stress." << endl;
        cout << endl << "  You have been working on a project for a long time now, it is okay to come back to it...just dont forget. Remember that work isnt always the most important thing in life." << endl << endl;
            if (birthDay >= 2 && birthDay <= 5)
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
            cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
    }
//checks if Gemini (cannot be Blue Moon)
    else if ((birthMonth == 5 && birthDay >= 21 && birthDay <= 31) || (birthMonth == 6 && birthDay <= 21 && birthDay > 0))

    {
        cout << endl << "You are Gemini" << endl << endl;
        cout << "   Gemini represent duality, you are two personalities in one. The first often energetic, curious and wanting new adventure; the second is a sudden dive for a thoughtful and serious, yet restless individual. You find yourself fascinated with the world around you, everything is an adventure and you have to do it all. However you often feel like something is missing and you forever search for new friendships." << endl;
        cout << endl << "   Feeling in touch with your own self is important, you have a lot to say and give to the world so figure it out." << endl << endl;
        cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
           
    }    
//checks if Cancer
    else if ((birthMonth == 6 && birthDay >= 22 && birthDay <= 30) || (birthMonth == 7 && birthDay <= 22 && birthDay > 0))

    {
cout << endl << "You are Cancer" << endl << endl;
        cout << "   You are a sentimental crab (the sign of Cancer), you have a few close friends and stick to them. Cancer usually is deeply intuitive but also sentimental ofering an emotional connection to a few rather than many. If lacking in the love catagory Cancer may turn to manipulation and selfishnes, but if love is abundant you often pick fights for the things you love, even if you know you will lose." << endl;
        cout << endl << "   Take care of yourself. While you like to put others first, you cannot help them if you cannot help yourself." << endl << endl;
            if (birthDay >= 20 && birthDay <= 22)
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
         cout << "Thanky you for using BLUE MOON HOROSCOPE, be sure to visit again for your daily horescope" << endl;
    }
//checks if Leo
    else if ((birthMonth == 7 && birthDay >= 23 && birthDay <= 31) || (birthMonth == 8 && birthDay <= 22 && birthDay > 0))

    {
            cout << "You are Leo" << endl;
            if (birthDay >= 21 && birthDay <= 22 )
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
    }
//checks if Virgo
    else if ((birthMonth == 8 && birthDay >= 23 && birthDay <= 30) || (birthMonth == 9 && birthDay <= 22 && birthDay > 0))

    {
            cout << "You are Virgo" << endl;
            if (birthMonth == 8 && birthDay >= 21 && birthDay <=24 )
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
    }
//checks if Libra
    else if ((birthMonth == 9 && birthDay >= 23 && birthDay <= 31) || (birthMonth == 10 && birthDay <= 22 && birthDay > 0))

    {
            cout << "You are Libra" << endl;
            if (birthDay >= 10 && birthDay <= 13)
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
    }
//checks if Scorpio (blue mooon not possible)
    else if ((birthMonth == 10 && birthDay >= 23 && birthDay <= 30) || (birthMonth == 11 && birthDay <= 21 && birthDay > 0))

    {
            cout << "You are Scorpio" << endl;
           
    }    
//checks if Sagittarius
    else if ((birthMonth == 11 && birthDay >= 22 && birthDay <= 31) || (birthMonth == 12 && birthDay <= 21 && birthDay > 0))

    {
            cout << "You are Sagittarius" << endl;
            if (birthMonth == 12 && birthDay >= 20 && birthDay <= 24)
                //checks BLUE MOON
            {
           cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
    }
//checks if Capricorn
    else if ((birthMonth == 12 && birthDay >= 22 && birthDay <= 30) || (birthMonth == 1 && birthDay <=19 && birthDay > 0))

    {
            cout << "You are Capricorn" << endl;
            if (birthDay >= 20 && birthDay <= 24)
                //checks BLUE MOON
            {
            cout << "Your birthday falls on a special BLUE MOON" << endl;
            cout << "   Meaning that you may have unused abilities you havent tapped into, as supernatural activity is increased on any blue moon night. You are also as a baby born to the blue moon, believed to either be a sign for your parents that more babies are or were on their way; or, that you yourself will lead a fertile life and have children of your own. However you also may be prone to more problems of the psychological nature, ADHD, Autisim, and Schizophrenia are more common in Blue Moon Babies." << endl << endl;
            }
    }
    else if ((birthMonth <= 0) || (birthMonth >= 13) || (birthDay <= 0) || (birthDay >= 32))
        cout << "ERROR Invalid date, please restart program" << endl;
    else
        cout << "ERROR Invalid, please restart program" << endl;
return 0;
}