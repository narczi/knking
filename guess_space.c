    void read_guesses(int secret_number)
    {
    	int guess, num_guesses = 0;
    		
    	for(;;){
    		num_guesses++;
    		printf("Enter guess: ");
    		scanf("%d", &guess);
    		if (guess == secret_number){
    			printf("You won in %d guesses!\n\n", num_guesses);
    			return;
    		}else if (guess < secret_number){
    			printf("Too low, try again.\n");
    		}else{
    			printf("Too high, Try again.\n");
    		}
    	}
    }
