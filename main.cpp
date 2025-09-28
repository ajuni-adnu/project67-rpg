#include <iostream>
#include <stdlib.h>
using namespace std;

int playerHP = 40;
int playerATK = 12;
int playerDEF = 5;

int bossHP = 400;
int bossATK = 21;
int bossDEF = 20;

bool hasRapier, hasNet, hasSunglasses, hasAmulet, hasRustbite = false;

string key;
int choices;

int main()
{
    // Scene 0: Title screen

//     cout << "\n              [Title Screen]" << endl;
// cout << R"(
// BLEACH: District 67 — A Text-Based Adventure
// Disclaimer: This is a fan-made educational project. Bleach is created by Tite Kubo.
// All rights belong to their respective owners. For classroom use only.

// You are Jun Arashi, a soul living in District 67 of Rukongai.
// One night, a terrible presence descends — a rogue Hollow stalks the district.
// You must prepare yourself for the coming battle.

// Press any key to continue…

// )";

//     cin >> key;

// cout << R"(
// District 67, outskirts of Rukongai.

// Jun stands in a dark alley as screams echo through the streets.
// The night sky trembles as a Hollow’s roar shakes the rooftops.
// Jun clenches his fists — there is no running now.

// Press any key to continue...

// )";

//     cin >> key;

// cout << R"(
// Hanae, the district’s wandering saint, approaches you.

// Hanae: “You look pale, Jun. The night is cruel… let me bless you with light.”
// Choose:
// 1. Safe — “Just a little strength will do.” (+4 ATK)
// 2. Mid — “I’ll take whatever you can give.” (+1 ATK, +1 DEF, +7 HP)
// 3. Risky — “Give me everything you have!” (+11 ATK, +3 DEF, −5 HP)

// )";
//     cout << "\nMy choice is ";
//     cin >> choices;

//     switch(choices) {
//         case 1:
//             playerATK += 4;
//             break;
//         case 2:
//             playerATK++;
//             playerDEF++;
//             playerHP += 7;
//             break;
//         case 3:
//             playerATK += 11;
//             playerDEF += 3;
//             playerHP -= 5;
//             break;
//     }

//     // Scene 3 — The Tinkerer (Riku)

// cout << R"(
// You find Riku, a tinkerer surrounded by scraps of strange metal.

// Riku: “You’ll need more than fists against a Hollow. I can forge something quick.”
// Choose:
// 1. Safe — “Just give me something simple.” (+4 ATK)
// 2. Mid — “Make me sturdier.” (+1 DEF, −2 HP)
// 3. Risky — “Push the limits!” (+5 ATK, +3 DEF, −5 HP, gain Rustbite: −6 Boss DEF)
// )";
//     cout << "\nMy choice is ";
//     cin >> choices;

//     switch(choices) {
//         case 1:
//             playerATK += 4;
//             break;
//         case 2:
//             playerDEF++;
//             playerHP -= 2;
//             break;
//         case 3:
//             playerATK += 5;
//             playerDEF += 3;
//             playerHP -= 5;
//             hasRustbite = true;
//             bossDEF -= 6;
//             break;
//     }

    // Scene 4 — Sister Midori (Shrine)

cout << R"(
You pass a ruined shrine. Sister Midori kneels in prayer.

Midori: “Child… I can offer a charm. But the gods ask for something in return.”
Choose:
1. Safe — “A small blessing, please.” (+4 ATK)
2. Mid — “I’ll take the charm.” (Gain Net, −2 HP)
3. Risky — “I want true power!” (+9 ATK, −4 HP)

)";
    cout << "My choice is ";
    cin >> choices;

    switch(choices) {
        case 1:
            playerATK += 4;
            break;
        case 2:
            hasNet = true;
            playerHP -= 2;
            break;
        case 3:
            playerATK += 9;
            playerHP -= 4;
            break;
    }

    // Scene 5 ? Yumi the Smuggler

cout << R"(
A shadow in the corner alley beckons you. Yumi, the smuggler, grins.

Yumi: “Dangerous times, dangerous goods. I can sell you power, if you’re willing to pay the price.”
Choose:
1. Safe — “Something reliable.” (+11 ATK)
2. Mid — “The Armlet of Mordiggan…” (+15 ATK, −1 DEF, −2 HP)
3. Risky — “What’s your strongest weapon?” (Gain Divine Rapier, −10 HP, −3 DEF, −3 ATK)

)";
    cout << "My choice is ";
    cin >> choices;

    switch(choices) {
        case 1:
            playerATK += 11;
            break;
        case 2:
            playerATK += 15;
            playerDEF--;
            playerHP -= 2;
            break;
        case 3:
            playerATK -= 3;
            playerDEF -= 3;
            playerHP -= 10;
            hasRapier = true;
            break;
    }
    
//     // Scene 6 — Kaji the Peddler

// cout << R"(
// An old peddler, Kaji, rattles his cart of bottles and charms.

// Kaji: “Spare change for power? Every blessing has a price.”
// Choose:
// 1. Safe — “A minor boost.” (+4 ATK)
// 2. Mid — “Something stronger.” (+8 ATK, −2 HP)
// 3. Risky — “Everything you’ve got!” (+15 ATK, −2 DEF, −5 HP)

// )";
//     cout << "My choice is ";
//     cin >> choices;

//     switch(choices) {
//         case 1:
//             playerATK += 4;
//             break;
//         case 2:
//             playerATK += 8;
//             playerHP -= 2;
//             break;
//         case 3:
//             playerATK += 15;
//             playerDEF -= 2;
//             playerHP -= 5;
//             break;
//     }
    
//     // Scene 7 — Aiko the Child
    
// cout << R"(
// Aiko, a small child, tugs at your sleeve with pleading eyes.

// Aiko: “Please… help us. You’re the only one who can stand against the Hollow.”
// Choose:
// 1. Safe — “I’ll do my best.” (+2 ATK)
// 2. Mid — “I’ll push myself harder.” (+1 ATK, +1 DEF, −1 HP)
// 3. Risky — “I’ll protect everyone at any cost!” (+8 ATK, +3 DEF, −5 HP)

// )";
//     cout << "My choice is ";
//     cin >> choices;
//     switch(choices) {
//         case 1:
//             playerATK += 2;
//             break;
//         case 2:
//             playerATK++;
//             playerDEF++;
//             playerHP--;
//             break;
//         case 3:
//             playerATK += 8;
//             playerDEF += 3;
//             playerHP -= 5;
//             break;
//     }
    
    // Scene 8 — Master Renga

cout << R"(
Your old mentor, Renga, leans on his cane and lowers his sunglasses.

Renga: “Jun… take these. You’ll need sharp eyes more than a sharp blade.”
Choose:
1. Safe — “A steady path will do.” (+5 ATK)
2. Mid — “I’ll endure the strain.” (+7 ATK, −2 HP)
3. Risky — “I’ll fight with your spirit!” (Gain Sunglasses, +2 DEF, −5 HP)

)";
    cout << "My choice is ";
    cin >> choices;
    switch(choices) {
        case 1:
            playerATK += 5;
            break;
        case 2:
            playerATK += 7;
            playerHP -= 2;
            break;
        case 3:
            hasSunglasses = true;
            playerDEF += 2;
            playerHP -= 5;
            break;
    }
    
    // Scene 9 — Mika the Charm-Seller

cout << R"(
Mika holds a tray of strange charms.

Mika: “These trinkets are cursed and blessed alike. What will you take?”
Choose:
1. Safe — “A small charm.” (+2 ATK)
2. Mid — “That one… it glows faintly.” (Gain Schala’s Amulet, −3 HP)
3. Risky — “I want the strongest one!” (+11 ATK, +2 DEF, −7 HP)

)";
    cout << "My choice is ";
    cin >> choices;

    switch(choices) {
        case 1:
            playerATK += 2;
            break;
        case 2:
            hasAmulet = true;
            playerHP -= 3;
            break;
        case 3:
            playerATK += 11;
            playerDEF += 2;
            playerHP -= 7;
            break;
    }
    
    // Scene 10 — Supply Cache

cout << R"(
You find a hidden cache of supplies — medicine, weapons, armor.

Choose:
1. Safe — “Patch me up completely.” (Set HP to 50)
2. Mid — “I’ll take the sharper blades.” (+12 ATK, −3 HP)
3. Risky — “Load me with everything!” (+23 ATK, +2 HP)

)";
    cout << "My choice is ";
    cin >> choices;
    switch(choices) {
        case 1:
            playerHP = 50;
            break;
        case 2:
            playerATK += 12;
            playerHP -= 3;
            break;
        case 3:
            playerATK += 23;
            playerHP += 2;
            break;
    }
    
    // Scene 11 — Boss Fight: Bjorne the Rogue Hollow
    
cout << R"(
The ground splits. Bjorne, a towering Hollow, rises from the shadows.

Bjorne: “Foolish soul… your resistance amuses me.”

)";

    int playerDamage = max(1, playerATK - bossDEF);
    int bossDamage = max(1, bossATK - playerDEF);
    int turn = 15; 
    
    // 15TH TURN.
    // Menu.
    
    cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
    cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
    cout << turn << " chances left." << endl;
    if (hasRapier != false || hasNet != false || hasSunglasses != false) {
    cout << "Choices: 0/1 " << endl;
    } else {
       cout << "Choices: 0" << endl; 
    }
    
    cout << "0 - Fight." << endl;
    if (hasRapier != false || hasNet != false || hasSunglasses != false) {
     cout << "1 - Use items.\n" << endl;
    }
    
    cout << "My choice is ";
    cin >> choices;
    switch(choices) {
        case 1:
            if (hasRapier != false || hasNet != false || hasSunglasses != false) {
            cout << "\nWhich item to choose? \nInventory:" << endl;
                if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                     cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the Divine Rapier." << endl;
                         bossHP -= 275;
                         hasRapier = false;
                         break;
                         case 2:
                         cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasNet = false;
                         break;
                         case 3:
                         cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasSunglasses = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }
                } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                     cout << "1. Net\n2. Sunglasses" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasNet = false;
                         break;
                         case 2:
                         cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasSunglasses = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }     
                } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                     cout << "1. Sunglasses" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasSunglasses = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }   
                } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                     cout << "1. Net" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasNet = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }   
                } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                     cout << "1. Divine Rapier\n2. Net" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the Divine Rapier." << endl;
                         bossHP -= 275;
                         hasRapier = false;
                         break;
                         case 2:
                         cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasNet = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }
                } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                     cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the Divine Rapier." << endl;
                         bossHP -= 275;
                         hasRapier = false;
                         break;
                         case 2:
                         cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                         bossHP -= playerDamage;
                         hasSunglasses = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }
                } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                     cout << "1. Divine Rapier" << endl;
                     cout << "\nMy choice is ";
                     cin >> choices;
                     switch(choices) {
                         case 1:
                         cout << "I used the Divine Rapier." << endl;
                         bossHP -= 275;
                         hasRapier = false;
                         break;
                         default:
                         cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                         bossHP -= playerDamage;
                         playerHP -= bossDamage;
                         break;
                     }
            } else {
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            }
            
        }
        break;
        default:
            bossHP -= playerDamage;
            playerHP -= bossDamage;
        break;
    }

    if (bossHP > 300) {
        cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
    } else if (bossHP >= 200) {
        cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
    } else if (bossHP >= 100) {
        cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
    } else if (bossHP <= 100) {
        cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
    }
    
    if (hasAmulet == true && playerHP <= 0) {
        cout << "The amulet broke, I'm badly injured.\n" << endl;
        playerHP = 1;
        hasAmulet = false;
    }
    
    // 14TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 13TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 12TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 11TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 10TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 9TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 8TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 7TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 6TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 5TH TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 3RD TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 2ND TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    // 1ST TURN
    turn--;
    if ((turn > 0 && playerHP > 0) && bossHP > 0) {
        cout << "JUN: ATK " << playerATK << ", DEF " << playerDEF << ", HP" << playerHP << endl;
        cout << "BJORNE: ATK " << bossATK << ", DEF " << bossDEF << ", HP" << bossHP << endl;
        cout << turn << " chances left." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
        cout << "Choices: 0/1 " << endl;
        } else {
           cout << "Choices: 0" << endl; 
        }
        
        cout << "0 - Fight." << endl;
        if (hasRapier != false || hasNet != false || hasSunglasses != false) {
         cout << "1 - Use items.\n" << endl;
        }
        
        cout << "My choice is ";
        cin >> choices;
        switch(choices) {
            case 1:
                if (hasRapier != false || hasNet != false || hasSunglasses != false) {
                cout << "\nWhich item to choose? \nInventory:" << endl;
                    if (hasRapier != false && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Net\n3. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 3:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the Bjorne." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != false)) {
                         cout << "1. Net\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }     
                    } else if (hasRapier != true && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != true && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }   
                    } else if (hasRapier != false && (hasNet != false && hasSunglasses != true)) {
                         cout << "1. Divine Rapier\n2. Net" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the 90-Caliber Net. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasNet = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != false)) {
                         cout << "1. Divine Rapier\n2. Sunglasses" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             case 2:
                             cout << "I used the sunglasses. I evaded the boss and managed to get a hit." << endl;
                             bossHP -= playerDamage;
                             hasSunglasses = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                    } else if (hasRapier != false && (hasNet != true && hasSunglasses != true)) {
                         cout << "1. Divine Rapier" << endl;
                         cout << "\nMy choice is ";
                         cin >> choices;
                         switch(choices) {
                             case 1:
                             cout << "I used the Divine Rapier." << endl;
                             bossHP -= 275;
                             hasRapier = false;
                             break;
                             default:
                             cout << "I didn't waste time deciding and immediately attacked the boss." << endl;
                             bossHP -= playerDamage;
                             playerHP -= bossDamage;
                             break;
                         }
                } else {
                    bossHP -= playerDamage;
                    playerHP -= bossDamage;
                }
                
            }
            break;
            default:
                bossHP -= playerDamage;
                playerHP -= bossDamage;
            break;
        }
    
        if (bossHP > 300) {
            cout << "\nBjorne: “Tiny spark. I will crush you slowly.”\n" << endl;
        } else if (bossHP >= 200) {
            cout << "\nBjorne: “You sting… nothing more.”\n" << endl;
        } else if (bossHP >= 100) {
            cout << "\nBjorne: “Impossible… you persist?!”\n" << endl;
        } else if (bossHP <= 100) {
            cout << "\nBjorne: “I will DEVOUR YOU!”\n" << endl;
        }
        
        if (hasAmulet == true && playerHP <= 0) {
            cout << "The amulet broke, I'm badly injured.\n" << endl;
            playerHP = 1;
            hasAmulet = false;
        }
    }
    
    // CONCLUSION

    if (bossHP <= 0) {
        cout << "Jun slays Bjorne...\n The shinigami arrive, \n Jun is invited to the Academy." << endl; 
    } else if (turn <= 0) {
        cout << "*Your vision fades to black.*\n*Jun collapses, the shinigami arrives too late.*\n*The district is saved, Jun dies a hero.*" << endl;
    } else if (playerHP <= 0) {
        cout << "*Your vision fades to black.*\n*Jun dies, but his stand delays Bjorne until the shinigami finishes it.*\n *Jun was then remembered as a hero.*" << endl;
    } 

    return 0;
}
