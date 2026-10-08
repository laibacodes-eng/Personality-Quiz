#include <iostream>
using namespace std;
int main() {
  cout << "Personality Quiz"<< endl;
int LH=0; //The loyal heart
 int FE=0; //The free explorer
int FS=0; //The firestarter
char answer;

//Question 1
cout<<"Question 1: When someone breaks your trust, you:" << endl <<"A)Cut them off completely, no second chance" <<endl << "B)Get hurt quietly but forgive if they try" <<endl << "C)Get angry and move on. Life is too short"<< endl;
cout<< "Type your answer:";
cin>> answer;
if (answer == 'A' || answer == 'a'){ LH++;
}
else if (answer== 'B' || answer == 'b'){FE++;
}
else {FS++;
}

//Question 2
cout<<"Question 2: On a weekend with no plans, you would:" <<endl <<"A) Work on your own big goal alone" <<endl <<"B) Spend time with your close friends / family" <<endl <<"C) Go out and explore somewhere new"<< endl;
cout<< "Type your answer:";
cin>> answer;
if (answer == 'A' || answer == 'a'){ LH++;
}
else if (answer== 'B' || answer == 'b'){FE++;
}
else {FS++;
}

//Question 3
cout<< "Question 3: How do people describe you?" <<endl<<"A) Intense and hard to read"<< endl<< "B)Kind and easy to talk to" <<endl<<"C) Funny and carefree"<<endl <<"Type your answer:";
cin>>answer;
if (answer== 'A'|| answer== 'a'){LH++;
}
else if (answer== 'B' || answer == 'b'){FE++;
}
else {FS++;
}
//Question 4
cout<< "Question 4: When you get into an argument, you:" <<endl<<"A) Don't back down. You have to win"
<< "B) Try to understand the other person and fix it peacefully" <<endl <<"C) Say whatever and walk away, you don't have energy for drama"<< endl <<"Type your answer:";
cin>>answer;
if (answer == 'A' || answer == 'a'){ LH++;
}
else if (answer== 'B' || answer == 'b'){FE++;
}
else {FS++;
}

//Question 5
cout<<"Question 5: If you had to choose a life, you'd choose:" <<endl <<"A) A life where you are powerful and remembered" <<endl <<"B) A life where you are loved by a few true people" <<endl << "C) A life where you are free to go anywhere and do anything" <<endl << "type your answer:";
cin>> answer;
if (answer == 'A' || answer == 'a'){ LH++;
}
else if (answer== 'B' || answer == 'b'){FE++;
}
else {FS++;
}

//Output
if (LH > FE && LH > FS) {
        cout << "\nThe Loyal Heart\nYou care deeply about the people and things that matter to you.Your loyalty, empathy, and sincerity make people feel valued and understood. You may take time to open up, but when you do, you bring genuine trust and warmth into your relationships. Your strength is the heart you put into everything you truly care about.";
}
else if (FE > LH && FE > FS) {
        cout << "\nThe Free Explorer\nYou have a curious and adventurous spirit, and you enjoy discovering new ideas, experiences, and possibilities. You value freedom and aren't afraid to follow your own path. Your open-mindedness allows you to see opportunities where others might not. Your strength is your curiosity, independence, and ability to keep moving forward.";
}
else if (FS > LH && FS > FE) {
        cout << "\nThe Firestarter\nYou bring energy, courage, and determination wherever you go. You're willing to speak up, take initiative, and turn ideas into action. Challenges can motivate you rather than stop you, and your enthusiasm can inspire the people around you. Your strength is the spark that pushes you to make things happen.";
}
else {
        cout << "\nThe Versatile Spirit\nYou are not defined by just one type and that is something special. You can be loyal when someone needs you, adventurous when life calls for exploration, and determined when something matters to you. Your personality combines different strengths, giving you the flexibility to approach life in your own unique way. There isn't just one way to shine—and you have more than one.";
}

  return 0;
}