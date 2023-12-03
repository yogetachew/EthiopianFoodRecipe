"""
    Name: Ethiopian_food_recipe.py
    Author: Yonatan Getachew
    Date: 12/03/2023
    purpose: 
"""

from rich.console import Console
from rich.panel import Panel

# Initialize ricn console
console = Console()

# TODO: print a nice title for our program
console.print (
    Panel.fit(
       " Yonatan's Ethiopian Food Recipe", 
        style = "bold yellow",
        subtitle = "By Yonatan Getachew")
)


def menu():
    print("[1] firfir - The most typical Ethiopian breakfast is fir-fir, shredded leftover injera that's stir-fried with berbere and kibbe. The spicy, carb-y morning meal might be mixed with leftover shiro or meat stews. And yes, even though the main ingredient in fir-fir is injera, it'll probably be served with more injera on the side\n\n")
    print("[2] enkulal_firfir (Scrambled Egg)\n\n")
    print("[3] chechebsa - Chechebsa (sometimes called Kita Fir Fir in Ethiopia) is a classic breakfast dish that starts with preparing a batter thats fried to make a large flatbread called Kita. The kita is then torn into small pieces and is mixed with berbere and Niter Kibbeh spiced butter until its a moist and soft mixture. Chechebsa can be served warm or at room temperature. This version is for a warm Chechebsa. Its usually serve with hot coffee or chai spiced tea.\n\n")
    print("[4] shiro - Shiro is a staple vegetarian dish (actually its vegetarian AND gluten free!) in Ethiopian cuisine. Its basically a stew or curry made from ground dried chickpeas and various spices.\n\n")
    print("[5] Dinich wot - is another popular Ethiopian wot which is very similar in ingredients and recipe as Misir wot or Shiro wot except the lentils and beans flour is replaced by sliced potatoes to thicken the stew.\n\n")
    print("[6] Kitfo - A traditional Ethiopian dish made with minced beef seasoned with mitmita (a spicy chili powder) and served with injera.\n\n")

def firfir():
    console.print("[bold yellow]\nfirfir Ingredients\n\n2 red onions, chopped\n\n⅓ cup vegetable oil\n\n1 tablespoon garlic paste\n\n4 ripe tomatoes, chopped\n\n3 cups water, divided\n\n14 ounces dried beef\n\n2 tablespoons Ethiopian berbere seasoning\n\n½ cup Ethiopian kibbeh (spiced clarified butter)\n\n2 teaspoons salt\n\n2 pieces injera (Ethiopian bread)\n\nFor the kita, place the flours, salt, nigella seeds and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough.\n\nPlace a nonstick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through.\n\nMeanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste.\n\nAdd the eggs and stir continuously until cooked. Remove from the heat and stir in the green chilli. Serve scattered with the coriander, with the kita on the side for scooping.\n\n[/bold yellow]")

def enkulal_firfir():
    console.print("[bold yellow]\nenkulal firfir Ingredients\n\n1 tbsp vegetable oil\n\n1 red onion, finely chopped\n\n2 garlic cloves\n\n1 tomato, chopped\n\n1 tbsp tomato paste\n\n4 eggs, lightly beaten\n\n1 long green chilli, chopped\n\ncoriander sprigs, to serveKita\n\n150 g(1 cup) teff flour\n\n75 g(½ cup) plain white flour\n\npinch of salt\n\npinch of tikur azmud (nigella seeds)\n\n2 tbsp vegetable oil\n\n\nFor the kita, place the flours, salt, nigella seeds and 1 tablespoon of oil in a mixing bowl. Add 125 ml (½ cup) water and stir until a dough comes together. Gradually add enough extra water to make a dough that has the consistency of cookie dough.\n\nPlace a non–stick frying pan over medium heat and add the remaining oil. Flatten the dough into the frying pan, using your fingers to create ridges in the top of the dough. Cover the pan with a lid and cook for 4 minutes, then turn and cook for another 3 minutes or until cooked through.\n\nMeanwhile, heat the oil in a large frying pan over medium heat. Add the onion and cook for 3 minutes or until starting to soften. Add the garlic and tomato and cook for another 3 minutes or until softened. Stir in the tomato paste.\n\nAdd the eggs and stir continuously until cooked. Remove from the heat and stir in the green chilli. Serve scattered with the coriander, with the kita on the side for scooping.[/bold yellow]")

def Chechebsa():
    console.print("[bold yellow]\nchechebsa Ingredients\n\n1 Tbsp oil, for frying\n\n1 1/4 cups all-purpose flour (or 1 cup all-purpose flour and 1/4 cup teff flour)\n\n1/2 tsp salt\n\n3/4 cupwater (more or less, as needed for consistency)\n\n4 Tbsp niter kibbeh (ethiopian spiced butter)\n\n2 tsp berbere\n\nHeat oil in a large skillet or griddle.\n\nWhisk together the flour and salt. Add 1/2 cup water and keep whisking, adding 2 Tbsp more water at a time as needed, and whisking until smooth and the consistency is like a thin pancake batter. Pour the batter into the hot skillet over medium heat. Use the back of a wooden spoon to spread the batter into a single layer to form a large pancake. Cook 2 to 4 minutes or until bottom is lightly browned. Flip the Kita, and cook other side another 1 to 2 minutes or until lightly browned and cooked through. Set the cooked Kita aside for a few minutes, to cool.\nTear the Kita into small (about 1 inch) pieces.\n\nAdd niter kibbeh and berbere to a large skillet, and stir until melted. Add the torn Kita to the skillet and stir well with a wooden spoon until all the pieces are well coated with the spicy butter. Cook for several minutes, or until heated throughout. It should be moist but not mashed (more like the consistency of a savory bread pudding or a moist bread-based stuffing). Spoon into individual bowls and serve immediately with a spoon while still warm.\n(Some like to top it with a spoonful of yogurt and a pinch of berbere sprinkled over the yogurt, but that's purely optional.)\n\n[/bold yellow]")

def shiro():
    console.print("[bold yellow]\nshiro Ingredients\n\n½ cup oil\n\n½ cup chickpea flour\n\n2 medium onions pureed\n\n1 roma tomato pureed\n\n4 cloves of garlic chopped\n\n2 tablespoons niter kibbeh Ethiopian spiced clarified butter\n\n2 to 2 ½ cups of water\n\n3 tablespoons berbere spice\n\n1 teaspoon garlic powder\n\n¼ teaspoon sugar\n\nSalt to taste\n\njalepeno chopped (optional)\n\n\nBring a heavy bottom stockpot to medium heat. Add pureed onions to the dry pan, and saute until they become dry and start to take on color- about 4-5 minutes. Add the oil and berbere spice. Saute for 1-2 minutes until fragrant.\n\nNext add tomato and chopped garlic. Saute for 2-3 minutes more.\n\nNow start whisking in about half of the chickpea flour. Gradually start to add about 1 cup of water. Whisk in the remaining chickpea flour and an additional 1 cup of water. Whisk until mixture is very smooth. Add remaining ½ cup of water if you prefer your shiro a little thinner.\n\nHeat until the shiro begins to pop (simmer). Then add the niter kibbeh, garlic powder, sugar, and salt to taste, stirring until combined.\n\nSimmer for about 5-10 minutes over low heat until the flavors combine and the oil separates slightly from the shiro.\n\nGarnish with jalepeno, if desired.\n\nServe with fresh injera.\n\n[/bold yellow]")

def dinich_wot():
    console.print("[bold yellow]\nDinich wot Ingredients\n\n1 big red onion (chopped)\n\n2 cloves of Garlic (chopped)\n\n2 whole tomato (chopped)/Canned tomato (optional)\n\n1/4 cup Cooking oil\n\n3 tbsp. Berbere (spiced red pepper powder)/more or less as desired\n\n3 big potatoes sliced in small pieces\n\n2 cups Water\n\nSalt ( as needed)\n\n1 tea spoon Black cardamom/ground (optional\n\n\nChop one big red onion and pour it in a pan, cook it until it turns a little brownish, occasionally stirring.\n\nAdd a 1/4 cup cooking oil and, stir occasionally\n\nAdd the chopped garlic, and chopped tomato, cook the mix for 10 minutes occasionally stirring\n\nAdd 3 table spoon Berbere (more or less as desired)/Replace by Turmeric if prefer no spice\n\nPeal three large size potato, wash it, and slice it into pieces, then add it into the pot. Mix it with the cooking mix and cook it for 10 minutes occasionally stirring\n\nPour 2 cups of water and make it boil, add salt as desired\n\nCook the stew for 10-15 minutes, check if the potato is well-cooked to the desired softness\n\nAdd 1tsp of ground black cardamom (optional)\n\nRemove the pot from heat, cool it for a while, and it is ready for serving. It can be served with Injera (Ethiopian flat bread), pita bread or tortilla. Some also serve it with rice.\n\n[/bold yellow]")

def kitfo():
    console.print("[bold yellow]\nKitfo Ingredients\n\n500g fresh minced beef/beef tartare\n\n1 tablespoon + 1 teaspoon of mekelesha (a blend of korerima, or “false cardamom,” or “black cardamom;” cloves, cinnamon, black peppercorn, and cumin)\n\n2 tablespoons of mitmita (a blend of cayenne, or birds eye chillies; cloves; cardamom seeds and salt)\n\n1 teaspoon of berbere\n\n1 cup + 1 tablespoon + 1 teaspoon of niter kibbeh (clarified butter, infused with garlic, ginger, onion, black pepper, oregano, fenugreek, and tumeric)\n\n1 tablespoon of cooked, finely-chopped gomen (collard greens)\n\n1 tablespoon of ayib (Ethiopian, fresh cottage cheese)\n\n2 pieces of kocho (fermented green leaf sheaths of the False Banana tree)\n\nsalt to taste\n\n\nEnsure that your minced beef is finely chopped.\n\nOn a flat, hot pan, heat the serving leaf and kocho, turning them over so they don’t burn.\n\nNow, in a pan, lightly fry/heat the gomen and season it with 1 teaspoon of berbere, 1 tablespoon of the kibbeh and 1 teaspoon of mekelesha. After about two minutes on the pan, transfer it to your serving dish. Next to it, include the ayib.\n\nIn a small pot and on low heat, mix together a cup of kibbeh, 2 tablespoons of mitmita, and 1 tablespoon of mekelesha. Stir for about a minute before removing from the fire.\n\nThoroughly mix the tartar in with the mitmita, mekelesha and kibbeh blend.\n\nOnce this is done, put it back on low heat, continuing to mix. Lightly cook for ±1 minute and add a little bit more kibbeh if necessary, to prevent the beef from sticking to the pot.\n\nYou can serve the kitfo at this point – warm but still a tartar – or you can cook it fora further ±5 minutes, so that the beef is lightly cooked. The cooked version of this dish is called “kitfo leb leb.”\n\nServe the kitfo on the False Banana leaf. Drizzle a teaspoon of kibbeh on the kitfo and side dishes of gomen and ayib. Plate with injera and kocho.\n\n[/bold yellow]")


menu()

option = int(input("Enter your option: "))

while option != 0:
    if option == 1:
        firfir()
    elif option == 2:
        enkulal_firfir()
    elif option == 3:
        Chechebsa()
    elif option == 4:
        shiro()
    elif option == 5:
        dinich_wot()
    elif option == 6:
        kitfo()
    else:
        print('Invalid option')

    print()
    answer = input(
        "\nAnother dictum? ([y] or [Enter] to quit)? ")
    # Exit program
    if answer == "":
        break
    menu()
    option = int(input("Enter your option: "))

print("Thank you. Have a nice day.")