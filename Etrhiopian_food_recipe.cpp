/* 
*   Name: Ethiopian_food_recipe.cpp
*   Author: Yonatan Getachew
*   Date: 10/19/2023
*   purpose: learning how to change python code to Java and C++S
*/


#include <iostream>
#include <string>

using namespace std;

void displayMenu() {
    cout << "[1] firfir - The most typical Ethiopian breakfast is fir-fir, shredded leftover injera that's stir-fried with berbere and kibbe. The spicy, carb-y morning meal might be mixed with leftover shiro or meat stews. And yes, even though the main ingredient in fir-fir is injera, it'll probably be served with more injera on the side\n" << endl;
    cout << "[2] enkulal_firfir (Scrambled Egg)\n" << endl;
    cout << "[3] chechebsa - Chechebsa (sometimes called Kita Fir Fir in Ethiopia) is a classic breakfast dish that starts with preparing a batter that's fried to make a large flatbread called Kita. The kita is then torn into small pieces and is mixed with berbere and Niter Kibbeh spiced butter until it's a moist and soft mixture. Chechebsa can be served warm or at room temperature. This version is for a warm Chechebsa. It's usually served with hot coffee or chai spiced tea.\n" << endl;
    cout << "[4] shiro - Shiro is a staple vegetarian dish (actually it's vegetarian AND gluten-free!) in Ethiopian cuisine. It's basically a stew or curry made from ground dried chickpeas and various spices.\n" << endl;
    cout << "[5] Dinich wot - is another popular Ethiopian wot which is very similar in ingredients and recipe as Misir wot or Shiro wot except the lentils and beans flour are replaced by sliced potatoes to thicken the stew.\n" << endl;
    cout << "[6] Kitfo - A traditional Ethiopian dish made with minced beef seasoned with mitmita (a spicy chili powder) and served with injera.\n" << endl;
    cout << "[0] Quit\n" << endl;
}

void firfir() {
    cout << "\nfirfir Ingredients\n" << endl;
    cout << "2 red onions, chopped" << endl;
    cout << "⅓ cup vegetable oil" << endl;
    cout << "1 tablespoon garlic paste" << endl;
    cout << "4 ripe tomatoes, chopped" << endl;
    cout << "3 cups water, divided" << endl;
    cout << "14 ounces dried beef" << endl;
    cout << "2 tablespoons Ethiopian berbere seasoning" << endl;
    cout << "½ cup Ethiopian kibbeh (spiced clarified butter)" << endl;
    cout << "2 teaspoons salt" << endl;
    cout << "2 pieces injera (Ethiopian bread)\n" << endl;
    cout << "For the kita, place the flours, salt, nigella seeds, and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough." << endl;
    cout << "Place a nonstick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through." << endl;
    cout << "Meanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste." << endl;
    cout << "Add the eggs and stir continuously until cooked. Remove from the heat and stir in the green chili. Serve scattered with the coriander, with the kita on the side for scooping." << endl;
}

void enkulalFirfir() {
    cout << "enkulal firfir Ingredients\n" << endl;
    cout << "1 tbsp vegetable oil" << endl;
    cout << "1 red onion, finely chopped" << endl;
    cout << "2 garlic cloves" << endl;
    cout << "1 tomato, chopped" << endl;
    cout << "1 tbsp tomato paste" << endl;
    cout << "4 eggs, lightly beaten" << endl;
    cout << "1 long green chili, chopped" << endl;
    cout << "coriander sprigs, to serveKita" << endl;
    cout << "150 g(1 cup) teff flour" << endl;
    cout << "75 g(½ cup) plain white flour" << endl;
    cout << "pinch of salt" << endl;
    cout << "pinch of tikur azmud (nigella seeds)" << endl;
    cout << "2 tbsp vegetable oil\n" << endl;
    cout << "For the kita, place the flours, salt, nigella seeds, and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough.\n" << endl;
    cout << "Place a non-stick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through.\n" << endl;
    cout << "Meanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste.\n" << endl;
    cout << "Add the eggs and stir continuously until cooked. Remove from the heat and stir in the green chili. Serve scattered with the coriander, with the kita on the side for scooping.\n" << endl;
}

void chechebsa() {
    cout << "\nchechebsa Ingredients\n" << endl;
    cout << "1 Tbsp oil, for frying" << endl;
    cout << "1 1/4 cups all-purpose flour (or 1 cup all-purpose flour and 1/4 cup teff flour)\n" << endl;
    cout << "1/2 tsp salt" << endl;
    cout << "3/4 cup water (more or less, as needed for consistency)\n" << endl;
    cout << "4 Tbsp niter kibbeh (Ethiopian spiced butter)" << endl;
    cout << "2 tsp berbere" << endl;
    cout << "Heat oil in a large skillet or griddle." << endl;
    cout << "Whisk together the flour and salt. Add 1/2 cup water and keep whisking, adding 2 Tbsp more water at a time as needed, and whisking until smooth and the consistency is like a thin pancake batter. Pour the batter into the hot skillet over medium heat. Use the back of a wooden spoon to spread the batter into a single layer to form a large pancake. Cook 2 to 4 minutes or until the bottom is lightly browned. Flip the Kita, and cook the other side for another 1 to 2 minutes or until lightly browned and cooked through. Set the cooked Kita aside for a few minutes to cool.\n" << endl;
    cout << "Tear the Kita into small (about 1 inch) pieces." << endl;
    cout << "Add niter kibbeh and berbere to a large skillet, and stir until melted. Add the torn Kita to the skillet and stir well with a wooden spoon until all the pieces are well coated with the spicy butter. Cook for several minutes, or until heated throughout. It should be moist but not mashed (more like the consistency of a savory bread pudding or a moist bread-based stuffing). Spoon into individual bowls and serve immediately with a spoon while still warm.\n" << endl;
    cout << "(Some like to top it with a spoonful of yogurt and a pinch of berbere sprinkled over the yogurt, but that's purely optional.)\n" << endl;
}

void shiro() {
    cout << "\nshiro  Ingredients\n" << endl;
    cout << "½ cup oil" << endl;
    cout << "½ cup chickpea flour" << endl;
    cout << "2 medium onions pureed" << endl;
    cout << "1 roma tomato pureed" << endl;
    cout << "4 cloves of garlic chopped" << endl;
    cout << "2 tablespoons niter kibbeh Ethiopian spiced clarified butter" << endl;
    cout << "2 to 2 ½ cups of water" << endl;
    cout << "2 to 2 ½ cups of water\n\n3 tablespoons berbere spice" << endl;
    cout << "2 to 2 ½ cups of water" << endl;
    cout << "3 tablespoons berbere spice" << endl;
    cout << "1 teaspoon garlic powder" << endl;
    cout << "¼ teaspoon sugar\n\nSalt to taste\n\njalepeno chopped (optional)" << endl;
    cout << "Bring a heavy bottom stockpot to medium heat" << endl;
    cout << "Add pureed onions to the dry pan, and saute until they become dry and start to take on color- about 4-5 minutes\n" << endl;
    cout << " Add the oil and berbere spice" << endl;
    cout << "Saute for 1-2 minutes until fragrant" << endl;
    cout << "Bring a heavy bottom stockpot to medium heat" << endl;
    cout << "Add pureed onions to the dry pan, and saute until they become dry and start to take on color- about 4-5 minutes\n" << endl;
    cout << "Add the oil and berbere spice" << endl;
    cout << "Saute for 1-2 minutes until fragrant" << endl;
    cout << "Next add tomato and chopped garlic" << endl;
    cout << "Saute for 2-3 minutes more" << endl;
    cout << "Now start whisking in about half of the chickpea flour" << endl;
    cout << "Gradually start to add about 1 cup of water" << endl;
    cout << "Whisk in the remaining chickpea flour and an additional 1 cup of water" << endl;
    cout << "Whisk until mixture is very smooth" << endl;
    cout << "Add remaining ½ cup of water if you prefer your shiro a little thinner" << endl;
    cout << "Heat until the shiro begins to pop (simmer). Then add the niter kibbeh, garlic powder, sugar, and salt to taste, stirring until combined.\n" << endl;
    cout << "Simmer for about 5-10 minutes over low heat until the flavors combine and the oil separates slightly from the shiro.\n" << endl;
    cout << "Garnish with jalepeno, if desired.\n\nServe with fresh injera." << endl;
}

void dinichWot() {
    cout << "Dinich wot Ingredients" << endl;
    cout << "1 big red onion (chopped)" << endl;
    cout << "2 cloves of Garlic (chopped)" << endl;
    cout << "2 whole tomato (chopped)/Canned tomato (optional)" << endl;
    cout << "1/4 cup Cooking oil. 3 tbsp. Berbere (spiced red pepper powder)/more or less as desired\n" << endl;
    cout << "3 big potatoes sliced in small pieces 2 cups Water Salt ( as needed)" << endl;
    cout << "1 tea spoon Black cardamom/ground (optional" << endl;
    cout << "Chop one big red onion and pour it in a pan, cook it until it turns a little brownish, occasionally stirring.\n" << endl;
    cout << "Add a 1/4 cup cooking oil and, stir occasionally" << endl;
    cout << "Add the chopped garlic, and chopped tomato, cook the mix for 10 minutes occasionally stirring\n" << endl;
    cout << "Add 3 table spoon Berbere (more or less as desired)/Replace by Turmeric if prefer no spice\n" << endl;
    cout << "Peal three large size potato, wash it, and slice it into pieces, then add it into the pot.\n" << endl;
    cout << "Mix it with the cooking mix and cook it for 10 minutes occasionally stirring" << endl;
    cout << "Pour 2 cups of water and make it boil, add salt as desired" << endl;
    cout << "Cook the stew for 10-15 minutes, check if the potato is well-cooked to the desired softness\n" << endl;
    cout << "Add 1tsp of ground black cardamom (optional)" << endl;
    cout << "Remove the pot from heat, cool it for a while, and it is ready for serving. It can be served with Injera (Ethiopian flat bread), pita bread or tortilla. Some also serve it with rice.\n" << endl;

}
void kitfo() {
    cout << "Kitfo Ingredients" << endl;
    cout << "500g fresh minced beef/beef tartare" << endl;
    cout << "1 tablespoon + 1 teaspoon of mekelesha (a blend of korerima, or “false cardamom,” or “black cardamom;” cloves, cinnamon, black peppercorn, and cumin)\n" << endl;
    cout << "2 tablespoons of mitmita (a blend of cayenne, or birds eye chillies; cloves; cardamom seeds and salt)" << endl;
    cout << "1 teaspoon of berbere 1 cup + 1 tablespoon + 1 teaspoon of niter kibbeh (clarified butter, infused with garlic, ginger, onion, black pepper, oregano, fenugreek, and tumeric)\n" << endl;
    cout << "1 tablespoon of cooked, finely-chopped gomen (collard greens)" << endl;
    cout << "1 tablespoon of ayib (Ethiopian, fresh cottage cheese). 2 pieces of kocho (fermented green leaf sheaths of the False Banana tree)\n" << endl;
    cout << "salt to taste. Ensure that your minced beef is finely chopped.On a flat, hot pan, heat the serving leaf and kocho, turning them over so they don't burn.\n" << endl;
    cout << "Now, in a pan, lightly fry/heat the gomen and season it with 1 teaspoon of berbere, 1 tablespoon of the kibbeh and 1 teaspoon of mekelesha. After about two minutes on the pan, transfer it to your serving dish. Next to it, include the ayib.\n" << endl;
    cout << "In a small pot and on low heat, mix together a cup of kibbeh, 2 tablespoons of mitmita, and 1 tablespoon of mekelesha. Stir for about a minute before removing from the fire.\n" << endl;
    cout << "Thoroughly mix the tartar in with the mitmita, mekelesha and kibbeh blend." << endl;
    cout << "Once this is done, put it back on low heat, continuing to mix. Lightly cook for ±1 minute and add a little bit more kibbeh if necessary, to prevent the beef from sticking to the pot." << endl;
    cout << "You can serve the kitfo at this point - warm but still a tartar - or you can cook it fora further ±5 minutes, so that the beef is lightly cooked. The cooked version of this dish is called “kitfo leb leb.\n”" << endl;
    cout << "Serve the kitfo on the False Banana leaf. Drizzle a teaspoon of kibbeh on the kitfo and side dishes of gomen and ayib. Plate with injera and kocho." << endl;

}

int main() {
    cout << "\n** Yonatan's Ethiopian Food Recipe **" << endl;
    cout << "** By Yonatan Getachew **\n" << endl;

    while (true) {
        displayMenu();
        cout << "Your choice: ";
        int option;
        cin >> option;
        cin.ignore();  

        switch (option) {
            case 1:
                firfir();
                break;

            case 2:
                enkulalFirfir();
                break;                                  

            case 3:
                chechebsa();
                break;

            case 4:
                shiro();
                break;

            case 5:
                dinichWot();
                break;                                  

            case 6:
                kitfo();
                break;

            default:
                cout << "Invalid input. Please choose a valid option.\n" << endl;
        }
        cout << "\nAnother dish? ([y] or [Enter] to quit): ";
        string answer;
        getline(cin, answer);

        if (answer != "y" && answer != "Y") {
            cout << "Thank you. Have a nice day." << endl;
            return 0;
        }
    }

    return 0;
}
