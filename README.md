
# Q-Learning Algorithm ⚙️💻

This repository contains a C++ implementation of the Q-Learning algorithm applied to a simple grid world problem. The grid world consists of states represented by rows and actions represented by columns. 
The goal is to reach a specific state denoted by **`F`** from any staring point.

![image](https://github.com/SarahAbuirmeileh/SarahAbuirmeileh/assets/127017088/b78da706-5ef0-470e-a25f-2e03947c3f47)


<br> <br>

**Here is the representation of the environment:**

![iamge](https://github.com/SarahAbuirmeileh/SarahAbuirmeileh/assets/127017088/dbc290dd-83b7-4da4-81aa-f6bca3e31aa8)


<br> <br>

**Here is the Reward Table:**

![image](https://github.com/SarahAbuirmeileh/SarahAbuirmeileh/assets/127017088/50f93028-63bf-4f1f-91c1-e08b0672ac20)

<br> <br>


## Description ⚡️📑
The q_learning.cpp file contains the main implementation of the Q-Learning algorithm. Here's an overview of the key components:

* **printArray:** Function to print a 2D array.
* **initializeRewardArray:** Function to initialize the reward matrix based on the problem description.
* **getRandomPossibleAction:** Function to select a random possible action from a given state.
* **QLearningAlgorithm:** Function implementing the Q-Learning algorithm. It updates the Q-table based on the rewards and learns the optimal policy.
* **main:** The entry point of the program. It initializes the reward matrix, sets up the Q-table, runs the Q-Learning algorithm, and prints the final Q-table.
<br> <br>

## Usage ⚙️👩🏻‍💻
You can modify the parameters such as the number of episodes (episode) and the learning rate (y) in the main function to experiment with different settings.

``` c++

// The # of trials for computer to learn, usually the # is big
int episode = 1000;

// Constant for learning rate
double y = 0.8;
```

<br><br>

**Here is the Q matrix after 1000 episodes:**

![image](https://github.com/SarahAbuirmeileh/SarahAbuirmeileh/assets/127017088/dacb1e28-0e72-4ab6-b534-972c54c19db1)
