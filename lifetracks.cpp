#include "lifetracks.h"

//Branches (pointers) are used to construct the flow of the game, which indicate different life stages.

lifetrack *makeTrack(){
	//the strings "decision" and "cont" are used to store the turning point choices  and the details of option results after passing each turning point.
    
    string decision = "";         
    string cont = "You are at the Gate of Uncertainty. Now there are two huge magic doors in front of you. Each gate leads to a vitural world of uncertainty Now, it's time for you to choose. The gate on the left side shows \"Digital World\" and the gate on the right side shows \"Ancient World\".";
    lifetrack *root = new lifetrack(decision, cont); 
    // 1st choice - Digital World / Ancient World
    
    // Branch 1: Digital World
    decision = "I am going to the Digital World.\n";
    cont = "This is a time of cyberpunk. The world is full of neon light and telecom devices. You can hear the sound of electromagnetic wave pasing through the big city. And now, you are an infant in this world. As time goes by, it's time to choose your education. The world does not have a systematic educational policy. You are required to choose one style of study\n";
    lifetrack *branch1 = new lifetrack(decision, cont);   
    //Extended plots
    decision = "";
    cont = "There are two tranding educational styles. One is to go to the multilingual school, so that you could learn multiple subjects within a period of time. However, there are also a branch of people not going to school. Instead, they choose to study in their family, which the nobility prefers.\n";
    lifetrack *branch1_1 = new lifetrack(decision, cont);
    branch1->lifetracks.push_back(branch1_1);
    // 2nd choice - multilingual school or family teaching
    
    // Branch 1-1: digital world/multilingual school
    decision = "I would like to go to multilingual school.\n";
    cont = "\n";
    lifetrack *branch11 = new lifetrack(decision, cont);   

    decision = "";
    cont = "I am going to the multilingual school. After four-year study, I am qualified to enter whatever industry I like. Now, in this era, there are two high-salary and elegant industries, Internet Industry and Financial Industry. Which one I prefer?\n";
    lifetrack *branch11_1 = new lifetrack(decision, cont);
    branch11->lifetracks.push_back(branch11_1);
    // 3rd choice - Internet Industry
    
    // Branch 1-1-1: digital world/multilingual school/Internet Industry
    decision = "Internet is power! I will join the army of Internet!\n";
    cont = "The Internet industry is a powerful industry and you have a promising future life-path. However, since there are too much work to do every day, you are required to work from 9 in the morning to at least 9 at night. This work gives you too much pressure that you are diagnosed with cancer. \n";
    lifetrack *branch111 = new lifetrack(decision, cont); 
    branch111->gameOver = true;
    // Branch ended, a short-life experience, game over
    
    //Branch 1-1-2: digital world/multilingual school/Financial Industry
    decision = "Finance is the best way to make money. I choose Finance!\n";
    cont = "Financial Industry is a competitive job, especially going to an investment banking division. However, since you are very hard-working, you are promoted as the youngest managing director in record. Nevertheless, the financial tsunami happens when you are at the 10th year in the industry. Your deal is affected by this crisis and you are forced to resign since you are the senior charger of this deal. Finally, you spend your rest life in the blue mood.\n";
    lifetrack *branch112 = new lifetrack(decision, cont);
    branch112->gameOver = true;
    // Branch ended, a short-life but good experience, game over

    // End of branch 1-1
    branch11_1->lifetracks.push_back(branch111);
    branch11_1->lifetracks.push_back(branch112);
    
    // Previously on the 2nd choice 
    // Branch 1-2 - digital world/family teaching
    decision = "I am in the nobility family, I don't want to go to school.\n";
    cont = "My family wants me to continue to study at home, since this gives me more freedom to choose whatever I want to learn and this is the most suitable way for a big family which I born in.\n";
    lifetrack *branch12 = new lifetrack(decision, cont);
 
    //Extended plots
    decision = "";
    cont = "After a four-year study under the family teacher. I get a full understanding of our family business. My parents want me to inherit the whole family business and run it as they are running now. However, I have a entrepreneurial plan and want to become a boss of my own, not inherit from the family. Should I start my own business or inherit from my family?\n";
    lifetrack *branch12_1 = new lifetrack(decision, cont);
    branch12->lifetracks.push_back(branch12_1);

    // 3rd choice - family business or entrepreneurship
    
    // Branch 1-2-1 digital world/family teaching/family business
    decision = "I give up my dream, inheriting from my family and run my family business.\n";
    cont = "Now it's time to think how to keep my family business steady and grow. This is a tough challenge to start to be an owner of this big fortune. Actually, your family business is facing a down-turn growth, if you do keep the current managing rule, it may not keep for long. But if you choose to aggresively change, things may be worse. It's up to your choice.\n";
    lifetrack *branch121 = new lifetrack(decision, cont);
    branch12->lifetracks.push_back(branch121);

    //4th choice - Expand business or not 
    
    // Branch 1-2-1-1 digital world/family teaching/family business/expand
    decision = "Expand the business aggresively.\n";
    cont = "Thanks for your brave decision! The business growth quickly since you expand your business into the technology industry which the government encourages to grow. The family business becomes even larger and you are listed as one of the Forbes 500.\n";
    lifetrack *branch1211 = new lifetrack(decision, cont);
    // Branch ended, great success
    
    // End of branch 1-2-1-1
    branch121->lifetracks.push_back(branch1211);

    // Previously on the 3rd choice
    // Branch 1-2-2 digital world/family teaching/entreprenuership
    decision = "Entrepreneurship.\n";
    cont = " I don't want to receive the big fortune without any effort. Life needs to be earned by myself. I have my own entrepreneurial team, why not to start my own business?\n";
    lifetrack *branch122 = new lifetrack(decision, cont);

    //Extended plots
    decision = "";
    cont = "You and your team starts your own business. At first, everyone in your team plays an important part in their area of study. So the business grows quickly and get a few rounds of investment. However, when thinking about applying for IPO, your team has a second opinion. Someone insists that the business should not be listed so soon since there are many financial indicators that are not steady. You are the CEO of this entity, it's time for you to decide.\n";
    lifetrack *branch122_1 = new lifetrack(decision, cont);
    branch122->lifetracks.push_back(branch122_1);
   
    // Branch 1-2-2-1 digital world/family teaching/entrepreneurship/IPO
    decision = "Applying for IPO.\n";
    cont = "I understand some of them are worried about the risk of public offering. But every entity needs to face some risk when it grows big. Unfortunatelly, the financial status is not steady during the listed period since there is an unknown virus affecting the world business. Your business faces a great loss and you have to leave since you made the wrong decision.\n";
    lifetrack *branch1221 = new lifetrack(decision, cont);
    branch1221->gameOver = true;
    // Branch ended, great loss

    // End of Branch 1-2-2-1
    branch122->lifetracks.push_back(branch1221);

    // Previously on the 4th choice
    // Branch 1-2-2-2 digital world/family teaching/entreprenuership/not IPO
    decision = "Not IPO.\n";
    cont = " The current market situation is not stable, and we need to reconstruct the financial model of the company and then start to think about listing. We cannot rush. Your patient earns a lot, the company becomes the world largest private firms and is acquired by a great entity.\n";
    lifetrack *branch1222 = new lifetrack(decision, cont);
    // Branch ended, great loss

    // End of Branch 1-2-2
    branch122->lifetracks.push_back(branch1222);

     // End of branch 1-2
    branch12->lifetracks.push_back(branch121);
    branch12->lifetracks.push_back(branch122);

    // End of branch 1
    branch1->lifetracks.push_back(branch11);
    branch1->lifetracks.push_back(branch12);


    // Previously on the 1st choice
    // Branch 2 - ancient world
    decision = "Ancient world is full of challenge, I would like to explore.\n";
    cont = "You are born in a big family. The family has a long history and the ancesters are all famous artists and generals along different dynasty. Now, you are at the age of 16. According to the customer, you should choose your own future: to go to the barrack or start your arts career?\n";
    lifetrack *branch2 = new lifetrack(decision, cont);
    // 2nd choice - barrack or school
    
    // Branch 2-1 - ancient world/barrack
    decision = "I am a brave and strong man. I would like to go to the battleground and become the most famous general in the country.";
    cont = "You start your general dream from the local barrack. After a long practice and practice, you are strong and brave full of power and energy. Now, the country needs you. In the peace era, your skill is to train the soilders and prepare for the uncertain attack. In the war era, you are the general leading the army. However, war is full of risk and you do not know the result before it. You can choose one of the era, which one would you like to choose?";
    lifetrack *branch21 = new lifetrack(decision, cont);

    // 3rd choice - peace era or war era
    // Branch 2-1-1 - ancient world/barrack/peace era
    decision = "War is bloody, although I am a soilder, I do not want to fight.";
    cont = "You are the general of the country. Although you are in the peaceful era, your army is the strongest around the world. Other states cannot attack the country even they plan to. As a spirit representative, your name is recorded in the history.";
    lifetrack *branch211 = new lifetrack(decision, cont);
    // End of Branch 2-1-1, great success

    //Previously on the 2nd choice
    //Branch 2-1-2 - ancient world/barrack/war era
    decision = "I am born to be on the battleground.";
    cont = "In the battleground, you lead your army to fight bravely. The enemy cannot attack your country any mile. However, you, as the key person in the army, was poisoned by the spy of the enemy. A great loss of the country.";
    lifetrack *branch212 = new lifetrack(decision, cont);
    //End of Branch 2-1-2, great loss

    //End of branch 2-1
    branch21->lifetracks.push_back(branch211);
    branch21->lifetracks.push_back(branch212);

    // Branch 2-2 - ancient world/school
    decision = "I want to follow my ancester's work, make the arts even greater.\n";
    cont = "To be an artist, you should start your education first. After 10-year study, you are full of fame and your masterpieces are everywhere. Unfortunatelly, the war starts. As a key objective leader, you are kidnapped by the enemy as the hostage. You cannot bear the disgrace, and you killed yourself in the prison.\n";
    lifetrack *branch22 = new lifetrack(decision, cont);
    // End of branch 2-2

    // End of branch 2
    branch2->lifetracks.push_back(branch21);
    branch2->lifetracks.push_back(branch22);

    // End of all branchs
    root->lifetracks.push_back(branch1);
    root->lifetracks.push_back(branch2);

    return root;
}
