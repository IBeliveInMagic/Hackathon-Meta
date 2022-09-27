# Hackathon-Meta
Códigos realizados 


# **Rollercoasters**

**Problem**
You are planning a visit to an amusement park with three friends and need to decide which rollercoasters you want to go on. The park is a big crowded place, so they insist you visit the rollercoasters in the order laid out on the map.
Each of your friends has their own special way of picking which amusements they would like to visit, it's your job to help them figure out how much fun they are going to have at the amusement park, based on their respective strategies.
Your friend, Bob wants each rollercoaster he goes on to be strictly scarier than the previous he went on and he doesn't want to travel far between rollercoasters he goes on.
In particular, Bob must visit rollercoasters in the same relative order that they appear on the map, and if he chooses to go on a certain rollercoaster, then the next one he goes on (if any) must be the immediately following one. For example, he may choose to go on the 3rd and 4th rollercoasters, or on the 3rd, 4th, and 5th rollercoasters, but not on just the 3rd and 5th rollercoasters.
Like Alice, Bob has 10 units of fun for each rollercoaster he goes on, and he wants to maximize the amount of fun he has.
Your input is a file with K lines. The ith line contains a single integer representing the scariness of the ith rollercoaster. The rollercoasters are given in the order in which they appear on the amusement park map.
Output a single integer, the maximum amount of fun which Bob can have on the trip.

**Constraints**
1 ≤ K ≤ 10,000

# **ZigZag**

**Problem**
We have updated the inputs and outputs of the first coding challenge (ZigZag). Please download the full input file again to have the updated version.
ZigZag is a logic-based, combinatorial number-placement puzzle, similar to Sudoku. The objective is to fill a 9x9 grid so that each zig, zag and square contain all the digits from 0 to 8, inclusive, exactly once.
Zigs are diagonals, running from top left to bottom-right and wrapping around. Zags are diagonals, running from top-right to bottom-left (orthogonal to the zigs) and squares are 3x3 sub-grids, similar to Sudoku.
The following diagrams indicate which Zigs, Zags and Squares each cell in a ZigZag belongs to. In the Zigs diagram (left), all the cells in a Zig share a color and are connected by lines to a cell with the Zig's numeric label. The Zags and Squares diagrams are organised similarly:

![Captura de Tela (254)](https://user-images.githubusercontent.com/52073658/192650876-1287ad0d-b694-4b49-82e6-e4758d078850.png)

Note that Zigs and Zags wrap around the grid, so each label appears twice in these diagrams.
Given a list of unfinished ZigZags, provide the sum of the values of their top-left cells. Note that for every ZigZag grid in the input, it's guaranteed that the value of its top-left cell can be deduced by looking at just the cells in Zig 0, Zag 0, and Square 0.

**Input**
The input file format is as follows:
The first line contains a single integer N, indicating the number of grids to follow.
Each grid is printed with each of its rows on its own line.
The "." character indicates an empty cell.
Grids are separated from each other with an empty line.

**Output**
Your output should be a file containing a single line with a number that's the sum of the values of the top-left cells of all grids, after the puzzles have been solved.

**Constraints**
1 ≤ N ≤ 10,000

# Data Centers

**Problem**
We have updated an output of the this coding challenge (Data Centers). Please download the sample output again to have the updated version.
The Factory Builder of Hilarious Allocations and Calculated Kingdoms (FB HACK) has decided to build their Data Centers on a particular piece of land with a special property; only Data Centers within a region defined by an axis-aligned right-angle isosceles triangle have network outages.
FB HACK is convinced this special property will ensure that their Data Centers are safe since they will be able to easily predict how many of them will be affected when a particular network outage happens. Your task is to write a program that outputs the number of Data Centers that will be affected by each network outage given the position of Data Centers and a list of triangular regions that will have network outages.

**Input**
The input will contain two integers N, Q representing the number of Data Centers owned by FB HACK and the number of possible network outages that can happen.
N lines will follow with two integers X, Y representing the lattice points of the Data Centers.
Q lines will follow with three integers x, y, d representing the affected area by the network outage as the triangle ABC with vertices at A(x+d,y),B(x,y),C(x,y+d)
Turns out all of the network outages in the world follow this unique behaviour! FB HACK is now getting hundreds of thousands of requests to calculate the amount of sites that will be impacted by the triangular network outages.
Input format and output format remain the same. We now have larger constraints.

**Input Format**
The input will contain two integers (N, Q).
N represents the number of Data Centers owned by FB HACK.
Q represents the number of possible network outages that can happen.

**Constraints**
1 ≤ N ≤ 4 * 10^5
1 ≤ Q ≤ 4 * 10^5
1 ≤ X, Y ≤ 3 * 10^5
1 ≤ x, y, d ≤ 3 * 10^5

**Output Format**
For each of Q queries, output one integer on a new line which denotes the number of Data Centers that will be affected by the network outage happening in the triage with vertices A(x+d,y),B(x,y),C(x,y+d)
