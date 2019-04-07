//Conversation Station CONVERSATION 4 ONLY
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userName;
	int choice = 0;
	
	cout << "*****************************\n";
	cout << "     Conversation Station    \n";
	cout << "*****************************\n";
	cout << endl;
	
	cout << "???: Hello, my name is Neil. What is your name?\n";
	cout << "Enter your name: "; getline(cin, userName); cout << endl;
	
	cout << "Neil: Hi " << userName << ".\n"; 
	cout << "	   The following conversations will test you on different parts of conversation.\n";
	cout << "	   Pay close attention to the context of the conversation, what the character is saying, and their tone to choose what you should say in return.\n";
	cout << "	   Each time you make a choice, you will be given an explanation of why you choice was correct or incorrect. Good luck!\n\n";
	
	//Conversation 4
	cout << "CONVERSATION 4: (MAKING FRIENDS)\n\n";
	
	cout << "Imagine it is your first day of class, and you are in your chemistry lab.\n";
	cout << "You sit next to your assigned lab partner, who you haven’t met before.\n"; 
	cout << "You are a few minutes early, so you decide to meet him before class.\n\n";
	
	while (choice != 1) 
	{
		cout << userName << ":\n"; 
		cout << "	1. Hello, my name is " << userName << ", nice to meet you.\n";
		cout << "	2. ***Wait for him to engage a conversation with you***\n";
		cout << "	3. Hi.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice) 
		{
			case 1:
				cout << string(10, '\n');
				cout << "(Correct) A simple, polite greeting in which introduce yourself is perfect for a situation like this to get the conversation started\n\n";
				break;
			case 2:
				cout << "(Incorrect) This isn’t necessarily a bad option, but if he doesn’t take the initiative to start a conversation with you, then you definitely need to be prepared to say something first.\n"; 
				cout << "Try a polite introduction to get the conversation started.\n\n";
				break;
			case 3:
				cout << "(Incorrect) You are starting a conversation with someone you’ve never met before.\n"; 
				cout << "While a simple introduction is helpful, you should tell him your name and provide some start for the conversation.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: Hey, my name is Neil.\n\n";
	
	while (choice != 2) 
	{
		cout << userName << ":\n"; 
		cout << "	1. Want to be my friend?\n";
		cout << "	2. Have you read the syllabus for this lab yet?\n";
		cout << "	3. What do you like to do for fun?\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice) 
		{
			case 1:
				cout << "(Incorrect) This could seem very desperate, and put them on the spot to make a judgement about you with no information other than your name.\n";
				cout << "Have a conversation with them first, and let your friendship start naturally by spending time together rather than asking them to be your friend.\n\n";
				break;
			case 2:
				cout << string(10, '\n');
				cout << "(Correct) You two are in chemistry lab together, that’s something that you have in common right off the bat.\n";
				cout << "This makes it a great starting discussion topic.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This isn’t the worst thing that you can say, but you are in lab, which is about to start.\n";
				cout << "Try talking in the topic of you lab, and save other topics of conversation for later when you don’t have a task to focus on.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}

	cout << "Neil: Yeah, it looks like a fun lab.\n\n";
	cout << "You go through the lab, and Neil seems like a nice guy.\n"; 
	cout << "You two work well together, and you can see him being a good candidate to be a friend.\n";
	cout << "You decide to ask him a few questions after lab to get to know him.\n\n";
	
	while (choice != 1) 
	{
		cout << userName << ":\n"; 
		cout << "	1. So what do you like to do for fun?\n";
		cout << "	2. Have you been following the recent politics?\n";
		cout << "	3. Which church do you go to?\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice) 
		{
			case 1:
				cout << string(10, '\n');
				cout << "(Correct) This is a nice, open-ended question that he shouldn’t get offended by, and it can really lead to you getting to know him.\n"; 
				cout << "If you find more things that you have in common this could be the start of a great friendship.\n\n";
				break;
			case 2:
				cout << "(Incorrect) One important topic to avoid, especially with people who you don’t know as well is controversial things such as religion and politics.\n";
				cout << "Try to avoid these topics and ask him other questions to get to know him better.\n\n";
				break;
			case 3:
				cout << "(Incorrect) One important topic to avoid, especially with people who you don’t know as well is controversial things such as religion and politics.\n";
				cout << "Try to avoid these topics and ask him other questions to get to know him better.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: I love playing camping and playing sports, and also singing what about you?\n";
	cout << "Imagine you also enjoy camping and playing sports, but you don’t like to sing that much. How should you respond?\n\n";

	while (choice != 2) 
	{
		cout << userName << ":\n"; 
		cout << "	1. I also enjoy camping, want to go camping at the lake this weekend\n";
		cout << "	2. I also enjoy sports, maybe we can play a game of soccer sometime.\n";
		cout << "	3. Ew, I hate singing.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice) 
		{
			case 1:
				cout << "(Incorrect) It’s great that you share this in common, and it is something that you should definitely express.\n";
				cout << "But trying to go on a camping trip within a week of knowing him could be intimidating, and he might feel uncomfortable with you asking this of him.\n";
				cout << "Try to suggest a smaller activity that you could do together in the near future that you both enjoy.\n\n";
				break;
			case 2:
				cout << string(10, '\n');
				cout << "(Correct) Great! You’ve found something else that you share in common.\n"; 
				cout << "Spending time together doing something that you both enjoy is a great way to build friendship.\n\n";
				break;
			case 3:
				cout << "(Incorrect) It’s ok for you to have some differences in interest.\n";
				cout << "But there is absolutely no need for you to talk bad about what he likes to do, even if you don’t personally like to do it.\n\n";
				cout << "Focus more on things that you both enjoy doing.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: Sounds good, I’m free Thursday if you want to play. I’ll text you tomorrow with more details.\n\n";
	
	cout << "Congrats, you made a new friend.\n";
	cout << "You asked questions to get to know your lab partner better, and you found things that you have in common with them.\n";
	cout << "You also avoided controversial topics, that could create tension between you two, while also avoiding to appear intimidating or creepy by being overbearing.\n";
	cout << "Lastly, you worked well in lab with them, which strengthens your relationship.\n";
	cout << "Remember to keep doing small activities together that you both enjoy, and as you get to know each other better you can make bigger plans.\n\n";

	
	return 0;
}
