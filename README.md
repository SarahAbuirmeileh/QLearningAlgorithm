
# Q-Learning Algorithm ⚙️💻

This repository contains a C++ implementation of the Q-Learning algorithm applied to a simple grid world problem. The grid world consists of states represented by rows and actions represented by columns. 
The goal is to reach a specific state denoted by **`F`** from any staring point.

![image](https://github.com/SarahAbuirmeileh/QLearningAlgorithm/assets/127017088/122e742f-4a92-4ae9-8fdb-7c526a423338)

<br> <br>

**Here is the representation of the environment:**

![image](https://github.com/SarahAbuirmeileh/QLearningAlgorithm/assets/127017088/5bbb5abe-9c6c-47c9-aabc-00d2a858bcce)

<br> <br>

**Here is the Reward Table:**

![image](https://github.com/SarahAbuirmeileh/QLearningAlgorithm/assets/127017088/f04f109e-1c01-4278-9345-4195fd094867)
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

![image](https://github.com/SarahAbuirmeileh/QLearningAlgorithm/assets/127017088/4d826762-2d48-4336-b853-9eb5af0066f0)
