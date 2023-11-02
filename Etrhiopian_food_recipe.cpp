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
    cout << "For the kita, place the flours, salt, nigella seeds, and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough." << endl;
    cout << "Place a non-stick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through." << endl;
    cout << "Meanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste." << endl;
    cout << "Add the eggs and stir continuously until cooked. Remove from the heat and stir in the green chili. Serve scattered with the coriander, with the kita on the side for scooping." << endl;
}

void chechebsa() {
    cout << "\nchechebsa Ingredients\n" << endl;
    cout << "1 Tbsp oil, for frying" << endl;
    cout << "1 1/4 cups all-purpose flour (or 1 cup all-purpose flour and 1/4 cup teff flour)" << endl;
    cout << "1/2 tsp salt" << endl;
    cout << "3/4 cup water (more or less, as needed for consistency)" << endl;
    cout << "4 Tbsp niter kibbeh (Ethiopian spiced butter)" << endl;
    cout << "2 tsp berbere" << endl;
    cout << "Heat oil in a large skillet or griddle." << endl;
    cout << "Whisk together the flour and salt. Add 1/2 cup water and keep whisking, adding 2 Tbsp more water at a time as needed, and whisking until smooth and the consistency is like a thin pancake batter. Pour the batter into the hot skillet over medium heat. Use the back of a wooden spoon to spread the batter into a single layer to form a large pancake. Cook 2 to 4 minutes or until the bottom is lightly browned. Flip the Kita, and cook the other side for another 1 to 2 minutes or until lightly browned and cooked through. Set the cooked Kita aside for a few minutes to cool." << endl;
    cout << "Tear the Kita into small (about 1 inch) pieces." << endl;
    cout << "Add niter kibbeh and berbere to a large skillet, and stir until melted. Add the torn Kita to the skillet and stir well with a wooden spoon until all the pieces are well coated with the spicy butter. Cook for several minutes, or until heated throughout. It should be moist but not mashed (more like the consistency of a savory bread pudding or a moist bread-based stuffing). Spoon into individual bowls and serve immediately with a spoon while still warm." << endl;
    cout << "(Some like to top it with a spoonful of yogurt and a pinch of berbere sprinkled over the yogurt, but that's purely optional.)" << endl;
}

// chechebsa, shiro, dinichWot, and kitfo

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
