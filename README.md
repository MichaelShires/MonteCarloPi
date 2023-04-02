# MonteCarloPi
A method to generate pi using a Monte-Carlo method. 

Based off the theory that the probability of a randomly generated point within the ([0,1],[0,1]) square is pi/4. 
By generating two random numbers between zero and one, and treating them as the x and y coordinates of a randomly 
selected point, we use the pythagorean theorem to determine the radius from origin of this point. If it is less 
than one, it is considered a success. By taking the ratio of successes to total trials, and applying the factor of
four, we obtain a value that converges on pi.

The program is performed in two nested runs to prevent the incrementer from being a long int.