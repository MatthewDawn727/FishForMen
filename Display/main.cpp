//Conversation Station
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userName;
	int choice = 0;
	int continueChoice = 0;
	
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
	
	cout << "CONVERSATION 1 (STAYING ON TOPIC):\n";
	cout << "For this lesson I will present you with different scenarios in which you will need to choose the best way of staying on topic during a conversation.\n";
	cout << "Remember to be polite while talking.\n";
	cout << "For the first scenario, imagine you are with one of your school friends, and you are on the bus home after school.\n";
	cout << "The ride home takes a while, so you and your friend start a conversation.\n\n";
	
	cout << "Neil: Hey, I went to the football game last Friday night\n";

	while (choice != 2)
	{
		cout << userName << ":\n"; 
		cout << "	1. Ok.\n";
		cout << "	2. How was it?\n";
		cout << "	3. I don’t like football.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This wasn’t the best answer choice because it shows a lack of interest in what your friend was saying.\n";
				cout << "Try to give a more detailed response to show that you are paying attention to what they are saying.\n\n";
				break;
			case 2:
				cout << "(Correct) This response is good because it shows that you are listening and are interested in what your friend is saying.\n";
				cout << "By asking them a question it allows the conversation to continue without an awkward lapse.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This wasn’t the best answer choice because it could be taken as rude if you tell them that you don’t like something that they are interested in.\n";
				cout << "Even if you don’t like the subject matter, try to find a more polite way to change the subject, if this isn’t what you are interested in.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: It was such a fun game. It was very close, and I was on the edge of my seat.\n";
	cout << "	   If you are free next Friday, would you want to go to the game with me?”\n\n";
	
	choice = 0;
	while (choice != 3)
	{
		cout << userName << ":\n"; 
		cout << "	1. No.\n";
		cout << "	2. I don't want to go.\n";
		cout << "	3. I would love to, but I have already made plans with my family.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This answer is not the best because it can be taken as rude.\n"; 
				cout << "If you cannot make it to the game, explain why so that they understand.\n"; 
				cout << "If you don’t want to go to the game, find a polite way to let them know.\n\n";
				break;
			case 2:
				cout << "(Incorrect) While this answer may be honest, the tone that it gives off makes it seem like you don’t want to go because you don’t like them.\n";
				cout << "You don’t want to make your friend feel like you don’t like them because they would feel bad.\n";
				cout << "If you don’t want to go because you don’t like football, tell them that and suggest another activity to do with them instead.\n\n";
				break;
			case 3:
				cout << "(Correct) This would be the best answer because it is polite, and gives an honest reason why you cannot go to the game with them.\n"; 
				cout << "It also lets them know that you do enjoy their company, so they don’t feel bad that you aren’t going with them.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: Oh alright, that’s fine...\n";

	choice = 0;
	while (choice != 1)
	{
		cout << userName << ":\n"; 
		cout << "	1. Maybe we can hang out on Saturday if you’re free.\n";
		cout << "	2. ***Don’t say anything. Wait for him to continue talking.***\n";
		cout << "	3. Did you enjoy the game last week?\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Correct) This is the correct option because it presents an opportunity for you and your friend to spend time together.\n";
				cout << "Also by asking a question it keeps the conversation going by prompting a response.\n\n";
				break;
			case 2:
				cout << "(Incorrect) While it is sometimes best to wait to see if your friend has something else to say.\n"; 
				cout << "In a lot of cases by saying nothing you are creating an awkward moment of silence in which you have nothing to talk about.\n\n";
				break;
			case 3:
				cout << "(Incorrect) While it is often a good idea to ask them about something that you are talking about.\n"; 
				cout << "You have already asked this question and you shouldn’t prompt him to repeat himself because this prevents the conversation from advancing.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: I’d love to hang out this Saturday, I’m free in the afternoon.\n\n";
	cout << "***The bus arrives at your stop, and it is time to get off***\n";
	
	choice = 0;
	while (choice != 1)
	{
		cout << userName << ":\n"; 
		cout << "	1. Cool. I have to go now, but I’ll text you and we can decide a time and place.\n";
		cout << "	2. I’m free in the afternoon, what should we do?\n";
		cout << "	3. ***Get off the bus, and walk home***\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Correct) In this situation, it is totally acceptable to leave during a conversation, and your friend will understand why you had to go.\n";
				cout << "As long as you suggest a way that you will finish your conversation, you and your friend can still discuss your plans for next weekend.\n\n";
				break;
			case 2:
				cout << "(Incorrect) Under most circumstances, it is a good idea to keep a conversation going and provide more to talk about.\n";
				cout << "However, if you keep this conversation going you will either hold up the bus while everyone waits for you to talk to your friend, or you will miss your stop.\n";
				cout << "This is a situation in which it is acceptable to politely leave your friend, but it is also important to arrange a method of finishing your conversation in the future.\n\n";
				break;
			case 3:
				cout << "(Incorrect) It is important for you to get off the bus in a timely manner to avoid missing your stop or making everyone wait for you.\n";
				cout << "However, you were in the middle of a conversation with a friend, so you should arrange a way of completing your conversation in the near future.\n";
				cout << "It is also rude to leave a friend who you have been talking to without saying anything as you depart.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: “Alright, we’ll keep in touch. I’ll see you later!\n\n";

	choice = 0;
	while (choice != 1)
	{
		cout << userName << ":\n"; 
		cout << "	1. Bye, have a good day!\n";
		cout << "	2. ***Get off the bus, and walk home***\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Correct) You just finished a conversation with a friend, and he just offered a farewell so it is very appropriate for you to say some sort of farewell in return.\n"; 
				cout << "Saying something like 'have a good day' is a perfectly acceptable thing to say as you leave your friend.\n";
				cout << "Just make sure to text him as soon as you have a chance!\n\n";

				break;
			case 2:
				cout << "(Incorrect) Your friend just said a farewell to you, so it is appropriate for you to say a farewell in return.\n"; 
				cout << "Saying a simple goodbye as you are leaving is a polite gesture to say to your friend.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}	
	
	cout << "Nice job making it through that conversation.\n";
	cout << "You stayed on the topic of conversation while also responding to questions asked and asking questions of your own to continue driving the conversation forward.\n";
	cout << "You also maintained a polite tone, and adapted based on situational context.\n\n";
	
	cout << "Would you like to continue?\n";
	cout << "	1. Yes\n";
	cout << "	2. No\n";
	while (continueChoice > 2 && continueChoice < 1)
	{
		cout << "Enter your choice: "; cin >> continueChoice;
		switch(continueChoice)
		{
			case 1:
				cout << endl;
				break;
			case 2:
				cout << endl;
				cout << "Goodbye!\n";
				return 0;
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	

	

	//Conversation 2 Starting a convo
	
	cout << "CONVERSATION 2 (Starting a conversation):\n";
	cout << "Imagine you are at school, walking around the cafeteria looking for someone to talk too.\n";
	cout << "You see Neil sitting alone, and they appear to be doing nothing.\n";
	cout << "This person is in your mathematics class, a very difficult class that you struggle with.\n";
	cout << "There is a test coming up at the end of the week and you want to ask them for help.\n\n";
	
while (choice != 2)
	{
		cout << userName << ":\n"; 
		cout << "	1. Hello.\n";
		cout << "	2. Hello, have you prepared for the mathmatics test this Friday?\n";
		cout << "	3. I need your help for this upcoming test.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This is a ok opener, however it is basic and can lead to awkward openers.\n";
				cout << "Try to connect with the person on common ground.\n\n";
				break;
			case 2:
				cout << "(Correct) This is the best opener as, for the most part, people will be more likely to respond to the question \n";
				cout << "and it help lead the conversation to the topic.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This does accomplish the goal of trying to ask the person for help, however this approach can be seen as hostile or a bit too forward.\n";
				cout << "Try to establish a more empathetic approach. \n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Neil: I haven’t done anything with it yet. It seems to be pretty easy stuff.\n";
	cout << "	   I might look over it the night before.”\n\n";
	
while (choice != 3)
	{
		cout << userName << ":\n"; 
		cout << "	1. WHAT? How can you find it so easy! I always struggle with that class!\n";
		cout << "	2. Then teach me. If you you find it so easy then help me study for it.\n";
		cout << "	3. Would you mind helping me study then? I am struggling with the class and need some help.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) The character was mild mannered and calm.\n";
				cout << "You want to try and keep the same tone as them.\n";
				cout << "YThis sentence gives off a tone of anger/jealousy. \n\n";
				break;
			case 2:
				cout << "(Incorrect) This sentence is very similar to the correct response, but the tone is too aggressive. \n";
				cout << "This sentence is more demanding and doesn’t invite the pearson to keep helping you.\n\n";
				break;
			case 3:
				cout << "(Correct) This sentence is appropriate tone as it is polite and ask the character to help. \n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}

cout << "Neil:  I don’t think I have the time this week to help until Thursday night. \n\n";

while (choice != 3)
	{
		cout << userName << ":\n"; 
		cout << "	1. But I need you to help me sooner. Studying on the final day won’t help me do well on the test.\n";
		cout << "	2. Ok. *walk away*\n";
		cout << "	3. That would be great, if your week opens sooner please let me know so that we have more time to study.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This does show that you need to the help, but the tone conveys a too aggressive attitude \n";
				cout << "and will make the other person feel threatened. \n\n";
				break;
			case 2:
				cout << "(Incorrect) TWalking away isn’t always a bad option, but it does leave the other person feeling sad \n";
				cout << "as you left in an awkward fashion.\n\n";
				break;
			case 3:
				cout << "(Correct) This accepts their offer of help, and shows that you would like to study some more. \n";
				cout << "Again this tone is polite and doesn’t hurt your reputation.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}

cout << "Neil:   I will, but right now I need to head to class. Bye. \n\n";

while (choice != 1)
	{
		cout << userName << ":\n"; 
		cout << "	1. Ok, I hope you have a great day. *walk away*\n";
		cout << "	2. But wait, I want to ask more questions.\n";
		cout << "	3. Bye. *walk away*\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Correct) The person is trying to leave, so the best thing you can say goodbye and leave a good impression. \n";
				cout << "This way you can let them go and they will feel better about this conversation. \n\n";
				break;
			case 2:
				cout << "(Incorrect) TWalking away isn’t always a bad option, but it does leave the other person feeling sad \n";
				cout << "as you left in an awkward fashion.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This accepts their offer of help, and shows that you would like to study some more. \n";
				cout << "Again this tone is polite and doesn’t hurt your reputation.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
//what chris is writing right now
	
	cout << "Would you like to continue?\n";
	cout << "	1. Yes\n";
	cout << "	2. No\n";
	while (continueChoice > 2 && continueChoice < 1)
	{
		cout << "Enter your choice: "; cin >> continueChoice;
		switch(continueChoice)
		{
			case 1:
				cout << endl;
				break;
			case 2:
				cout << endl;
				cout << "Goodbye!\n";
				return 0;
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	//Conversation 3
	
cout << "CONVERSATION 3 (Discussing an Appropriate Topic):\n";
	cout << "For this exercise, you will have to read the context of the situation of your conversation and\n";
	cout << "judge accordingly to ensure that you are talking about an appropriate topic.\n";
	cout << "Observe the feelings, tone, and subject matter of what your friend is talking about to make smart decisions about what to say.\n";
	cout << "For this scenario, imagine that you enter a room and see your friend crying.\n";
	cout << " You approach him to talk to him. What should you say?\n\n";

while (choice != 2)
	{
		cout << userName << ":\n"; 
		cout << "	1. How are you doing?\n";
		cout << "	2. Hey, what’s what’s going on, is everything ok?\n";
		cout << "	3. Hello!\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) If you can tell that a person isn’t doing well, don’t make them tell you that.\n";
				cout << "Because this friend is crying, something is obviously wrong, so it is your job as their friend to comfort them.\n\n";
				break;
			case 2:
				cout << "(Correct) This response shows that you can tell that they are unwell, and it shows concern for them. \n";
				cout << "It is also important for you to figure out the cause of their sadness so that you can know the situation to figure out how to keep the conversation going.\n\n";
				break;
			case 3:
				cout << "(Incorrect) It is clear that your friend isn’t doing well based on the fact that he is crying. If you approach him with a chirpy mood he may find this annoying.\n";
				cout << "Try to use a soft, gentle tone and say something to him that will cheer him up.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}

cout << "Oh, hey " << userName << " I just found out that my grandfather passed away.\n\n";

while (choice != 1)
	{
		cout << userName << ":\n"; 
		cout << "	1. I’m sorry to hear that. I hope you’re doing well. Let me know if you want to talk about it.\n";
		cout << "	2. My grandpa died a few years ago.\n";
		cout << "	3. Dang, that sucks.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Correct) This response is great because it shows your condolences for them in this situation.\n";
				cout << "It shows that you are there for them if they would like to talk, but you aren’t pressuring them to do so.\n\n";
				break;
			case 2:
				cout << "(Incorrect) This situation may seem like a good choice, but it makes them feel like you want to talk about your problems rather than supporting them through their problems. \n";
				cout << "It would be more empathetic to focus on their problems, granted they feel comfortable doing so.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This answer could appear rude, as if you don’t really care about what they are saying and just want to get on with the conversation.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Thanks, I’d rather talk about something else, if you don’t mind.\n\n";
	
	while (choice != 3)
	{
		cout << userName << ":\n"; 
		cout << "	1. How did he pass away, if you don’t mind me asking?\n";
		cout << "	2. Sure.\n";
		cout << "	3. That’s fine. Did you want to hang out sometime this weekend?\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This answer is not correct because he just told you that he doesn’t want to talk about his grandpa, so you should respect that and bring up another topic.\n";
				cout << "If he feels comfortable sharing information like this then he will tell you when he’s ready. Otherwise, let him choose how much information to share.\n\n";
				break;
			case 2:
				cout << "(Incorrect) This option is decent, as you are respecting his request to not talk about his grandpa.\n";
				cout << "However, if you have such a short response like this then you are causing an awkward lapse in which he might feel uncomfortable.\n";
				cout << "It would be best if you bring up something else to change the subject and get his mind off things.\n\n";
				break;
			case 3:
				cout << "(Correct) This response works well because it respects his request to talk about another topic.\n";
				cout << "It also changes the subject so that he has something to think about and you can keep the conversation going..\n\n";
				
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Actually, my grandpa’s funeral is this weekend, so I’ll be out of town.\n\n";
	
	while (choice != 2)
	{
		cout << userName << ":\n"; 
		cout << "	1. Oh, can I come?\n";
		cout << "	2. That’s fine, family comes first. Maybe we can hang out sometime next week.\n";
		cout << "	3. If your friend wants you to go to their grandpa’s funeral, then they will tell you.\n";
		cout << " What do you say: "; cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "(Incorrect) This is a respectful answer. It shows that you understand their commitment to their grandfather’s funeral, but you are minding your own business about it.\n";
				cout << "If your friend wants you to go to their grandpa’s funeral, then they will tell you.\n\n";
				break;
			case 2:
				cout << "(Correct) This is a respectful answer. It shows that you understand their commitment to their grandfather’s funeral, but you are minding your own business about it.\n";
				cout << "It is also presenting an opportunity for you and your friend to still hang out in the future.\n\n";
				break;
			case 3:
				cout << "(Incorrect) This answer can come off as very rude, and seem like you think that you are more important than their grandpa.\n";
				cout << "Let them make their own decisions about what they want to do, but make it obvious that you are still there to support them.\n\n";
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
	
	cout << "Congrats on making it through this conversation.\n";
	cout << "You were able to read the tone of your friend to tell what to say to them.\n";
	cout << "You also listened to what your friend told you so that you knew what direction he wanted the conversation to go.\n";
	cout << "Keep in mind that if your friend is having a bad day, that you should let them direct the conversation.\n";
	cout << "It’s also important to mind your own business, if your friend wants you to know something they will tell you.\n";
	cout << "If you aren’t sure whether or not you should ask a personal question, it is better to err on the side of caution.\n\n";
	
	cout << "Would you like to continue?\n";
	cout << "	1. Yes\n";
	cout << "	2. No\n";
	while (continueChoice > 2 && continueChoice < 1)
	{
		cout << "Enter your choice: "; cin >> continueChoice;
		switch(continueChoice)
		{
			case 1:
				cout << endl;
				break;
			case 2:
				cout << endl;
				cout << "Goodbye!\n";
				return 0;
				break;
			default:
				cout << "Invalid choice. Please select one of the options.\n\n";
		}
	}
//*****************************************************************************************************************************************************	
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
