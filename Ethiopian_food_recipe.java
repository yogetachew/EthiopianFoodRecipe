/* 
    Name: Ethiopian_food_recipe.java
    Author: Yonatan Getachew
    Date: 10/19/2023
    purpose: learning how to change python code to Java and C++S
*/

import java.util.Scanner;

public class Ethiopian_food_recipe {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n** Yonatan's Ethiopian Food Recipe **");
        System.out.println("** By Yonatan Getachew **\n");

        while (true) {
            // Display the menu options for the user
            displayMenu();
            System.out.print("Your choice: ");
            int option = scanner.nextInt();
            scanner.nextLine(); 

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

                case 0:
                    System.out.println("Thank you. Have a nice day.");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid input. Please choose a valid option.\n");
            }

            System.out.println("\nAnother dish? ([y] or [Enter] to quit): ");
            String answer = scanner.nextLine();

            if (!answer.equals("y") && !answer.equals("Y")) {
                System.out.println("Thank you. Have a nice day.");
                scanner.close();
                return;
            }
        }
    }

    public static void displayMenu() {
        System.out.println("[1] firfir - The most typical Ethiopian breakfast is fir-fir, shredded leftover injera that's stir-fried with berbere and kibbe. The spicy, carb-y morning meal might be mixed with leftover shiro or meat stews. And yes, even though the main ingredient in fir-fir is injera, it'll probably be served with more injera on the side\n");
        System.out.println("[2] enkulal_firfir (Scrambled Egg)\n");
        System.out.println("[3] chechebsa - Chechebsa (sometimes called Kita Fir Fir in Ethiopia) is a classic breakfast dish that starts with preparing a batter that's fried to make a large flatbread called Kita. The kita is then torn into small pieces and is mixed with berbere and Niter Kibbeh spiced butter until it's a moist and soft mixture. Chechebsa can be served warm or at room temperature. This version is for a warm Chechebsa. It's usually served with hot coffee or chai spiced tea.\n");
        System.out.println("[4] shiro - Shiro is a staple vegetarian dish (actually it's vegetarian AND gluten-free!) in Ethiopian cuisine. It's basically a stew or curry made from ground dried chickpeas and various spices.\n");
        System.out.println("[5] Dinich wot - is another popular Ethiopian wot which is very similar in ingredients and recipe as Misir wot or Shiro wot except the lentils and beans flour are replaced by sliced potatoes to thicken the stew.\n");
        System.out.println("[6] Kitfo - A traditional Ethiopian dish made with minced beef seasoned with mitmita (a spicy chili powder) and served with injera.\n");
        System.out.println("[0] Quit\n");
    }

    public static void firfir() {
        System.out.println("\nfirfir Ingredients\n");
        System.out.println("2 red onions, chopped");
        System.out.println("⅓ cup vegetable oil");
        System.out.println("1 tablespoon garlic paste");
        System.out.println("4 ripe tomatoes, chopped");
        System.out.println("3 cups water, divided");
        System.out.println("14 ounces dried beef");
        System.out.println("2 tablespoons Ethiopian berbere seasoning");
        System.out.println("½ cup Ethiopian kibbeh (spiced clarified butter)");
        System.out.println("2 teaspoons salt");
        System.out.println("2 pieces injera (Ethiopian bread)\n");
        System.out.println("For the kita, place the flours, salt, nigella seeds, and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough.");
        System.out.println("Place a nonstick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through.");
        System.out.println("Meanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste.");
        System.out.println("Add the eggs and stir continuously until cooked. Remove from the heat and stir in the green chili. Serve scattered with the coriander, with the kita on the side for scooping.");
    }

    public static void enkulalFirfir() {
        System.out.println("\nenkulal firfir Ingredients\n");
        System.out.println("1 tbsp vegetable oil");
        System.out.println("1 red onion, finely chopped");
        System.out.println("2 garlic cloves");
        System.out.println("1 tomato, chopped");
        System.out.println("1 tbsp tomato paste");
        System.out.println("4 eggs, lightly beaten");
        System.out.println("1 long green chili, chopped");
        System.out.println("coriander sprigs, to serveKita");
        System.out.println("150 g(1 cup) teff flour");
        System.out.println("75 g(½ cup) plain white flour");
        System.out.println("pinch of salt");
        System.out.println("pinch of tikur azmud (nigella seeds)");
        System.out.println("2 tbsp vegetable oil\n");
        System.out.println("For the kita, place the flours, salt, nigella seeds, and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough.");
        System.out.println("Place a non-stick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through.");
        System.out.println("Meanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste.");
        System.out.println("Add the eggs and stir continuously until cooked. Remove from the heat and stir in the green chili. Serve scattered with the coriander, with the kita on the side for scooping.");
    }

    public static void chechebsa() {
        System.out.println("\nchechebsa Ingredients\n");
        System.out.println("1 Tbsp oil, for frying");
        System.out.println("1 1/4 cups all-purpose flour (or 1 cup all-purpose flour and 1/4 cup teff flour)");
        System.out.println("1/2 tsp salt");
        System.out.println("3/4 cup water (more or less, as needed for consistency)");
        System.out.println("4 Tbsp niter kibbeh (Ethiopian spiced butter)");
        System.out.println("2 tsp berbere");
        System.out.println("Heat oil in a large skillet or griddle.");
        System.out.println("Whisk together the flour and salt. Add 1/2 cup water and keep whisking, adding 2 Tbsp more water at a time as needed, and whisking until smooth and the consistency is like a thin pancake batter. Pour the batter into the hot skillet over medium heat. Use the back of a wooden spoon to spread the batter into a single layer to form a large pancake. Cook 2 to 4 minutes or until the bottom is lightly browned. Flip the Kita, and cook the other side for another 1 to 2 minutes or until lightly browned and cooked through. Set the cooked Kita aside for a few minutes to cool.");
        System.out.println("Tear the Kita into small (about 1 inch) pieces.");
        System.out.println("Add niter kibbeh and berbere to a large skillet, and stir until melted. Add the torn Kita to the skillet and stir well with a wooden spoon until all the pieces are well coated with the spicy butter. Cook for several minutes, or until heated throughout. It should be moist but not mashed (more like the consistency of a savory bread pudding or a moist bread-based stuffing). Spoon into individual bowls and serve immediately with a spoon while still warm.");
        System.out.println("(Some like to top it with a spoonful of yogurt and a pinch of berbere sprinkled over the yogurt, but that's purely optional.)");
    }

    public static void shiro() {
        System.out.println("\nshiro Ingredients\n");
        System.out.println("1/2 cup oil");
        System.out.println("1/2 cup chickpea flour");
        System.out.println("2 medium onions pureed");
        System.out.println("1 roma tomato pureed");
        System.out.println("4 cloves of garlic chopped");
        System.out.println("2 tablespoons niter kibbeh Ethiopian spiced clarified butter");
        System.out.println("2 to 2 ½ cups of water");
        System.out.println("3 tablespoons berbere spice");
        System.out.println("1 teaspoon garlic powder");
        System.out.println("1/4 teaspoon sugar");
        System.out.println("Salt to taste");
        System.out.println("jalapeno chopped (optional)");
        System.out.println("Bring a heavy-bottom stockpot to medium heat. Add pureed onions to the dry pan, and sauté until they become dry and start to take on color- about 4-5 minutes. Add the oil and berbere spice. Sauté for 1-2 minutes until fragrant.");
        System.out.println("Next, add the tomato and chopped garlic. Sauté for 2-3 minutes more.");
        System.out.println("Now start whisking in about half of the chickpea flour. Gradually start to add about 1 cup of water. Whisk in the remaining chickpea flour and an additional 1 cup of water. Whisk until the mixture is very smooth. Add the remaining ½ cup of water if you prefer your shiro a little thinner.");
        System.out.println("Heat until the shiro begins to pop (simmer). Then add the niter kibbeh, garlic powder, sugar, and salt to taste, stirring until combined.");
        System.out.println("Simmer for about 5-10 minutes over low heat until the flavors combine and the oil separates slightly from the shiro.");
        System.out.println("Garnish with jalapeno, if desired.");
        System.out.println("Serve with fresh injera.");
    }

    public static void dinichWot() {
        System.out.println("\nDinich wot Ingredients\n");
        System.out.println("1 big red onion (chopped)");
        System.out.println("2 cloves of Garlic (chopped)");
        System.out.println("2 whole tomatoes (chopped) / Canned tomato (optional)");
        System.out.println("1/4 cup Cooking oil");
        System.out.println("3 tbsp. Berbere (spiced red pepper powder) / more or less as desired");
        System.out.println("3 big potatoes sliced in small pieces");
        System.out.println("2 cups Water");
        System.out.println("Salt (as needed)");
        System.out.println("1 teaspoon Black cardamom/ground (optional)");
        System.out.println("Chop one big red onion and pour it in a pan, cook it until it turns a little brownish, occasionally stirring.");
        System.out.println("Add a 1/4 cup cooking oil and stir occasionally.");
        System.out.println("Add the chopped garlic and chopped tomato, cook the mix for 10 minutes occasionally stirring.");
        System.out.println("Add 3 tablespoons Berbere (more or less as desired)/Replace by Turmeric if you prefer no spice.");
        System.out.println("Peel three large size potatoes, wash them, and slice them into pieces, then add them into the pot. Mix them with the cooking mix and cook for 10 minutes, occasionally stirring.");
        System.out.println("Pour 2 cups of water and make it boil, add salt as desired.");
        System.out.println("Cook the stew for 10-15 minutes, check if the potato is well-cooked to the desired softness.");
        System.out.println("Add 1 teaspoon of ground black cardamom (optional).");
        System.out.println("Remove the pot from heat, let it cool for a while, and it is ready for serving. It can be served with Injera (Ethiopian flatbread), pita bread, or tortilla. Some also serve it with rice.");
    }

    public static void kitfo() {
        System.out.println("\nKitfo Ingredients\n");
        System.out.println("500g fresh minced beef/beef tartare");
        System.out.println("1 tablespoon + 1 teaspoon of mekelesha (a blend of korerima, or 'false cardamom,' or 'black cardamom;' cloves, cinnamon, black peppercorn, and cumin)");
        System.out.println("2 tablespoons of mitmita (a blend of cayenne, or bird's eye chilies; cloves; cardamom seeds, and salt)");
        System.out.println("1 teaspoon of berbere");
        System.out.println("1 cup + 1 tablespoon + 1 teaspoon of niter kibbeh (clarified butter, infused with garlic, ginger, onion, black pepper, oregano, fenugreek, and turmeric)");
        System.out.println("1 tablespoon of cooked, finely-chopped gomen (collard greens)");
        System.out.println("1 tablespoon of ayib (Ethiopian, fresh cottage cheese)");
        System.out.println("2 pieces of kocho (fermented green leaf sheaths of the False Banana tree)");
        System.out.println("Salt to taste");
        System.out.println("Ensure that your minced beef is finely chopped.");
        System.out.println("On a flat, hot pan, heat the serving leaf and kocho, turning them over so they don't burn.");
        System.out.println("Now, in a pan, lightly fry/heat the gomen and season it with 1 teaspoon of berbere, 1 tablespoon of the kibbeh, and 1 teaspoon of mekelesha. After about two minutes on the pan, transfer it to your serving dish. Next to it, include the ayib.");
        System.out.println("In a small pot and on low heat, mix together a cup of kibbeh, 2 tablespoons of mitmita, and 1 tablespoon of mekelesha. Stir for about a minute before removing from the fire.");
        System.out.println("Thoroughly mix the tartar in with the mitmita, mekelesha, and kibbeh blend.");
        System.out.println("Once this is done, put it back on low heat, continuing to mix. Lightly cook for ±1 minute and add a little bit more kibbeh if necessary, to prevent the beef from sticking to the pot.");
        System.out.println("You can serve the kitfo at this point – warm but still a tartar – or you can cook it for a further ±5 minutes, so that the beef is lightly cooked. The cooked version of this dish is called “kitfo leb leb.”");
        System.out.println("Serve the kitfo on the False Banana leaf. Drizzle a teaspoon of kibbeh on the kitfo and side dishes of gomen and ayib. Plate with injera and kocho.");
    }
}
