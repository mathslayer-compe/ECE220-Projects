





//using the algorithm from lab 8
	//first - moved all values up one.... 
	//second - add two cells if target row and row above has the same value, replace target row cell with -1
	//third - slide again to make sure in between spaces after the addition gets pushed

	//algorithm followed based on lab 8
	for (int i = 0; i<(cur_game->rows)	; i++) {
		for (int j = 0; j<cur_game -> cols; j++) {
			if (cur_game->cells[j*(cur_game->cols)+i] != -1) {
				//using k as a target row, sliding values up when detected an empty cell 
				for (int k = 0; k<=i; k++) {
					if(cur_game -> cells[k*(cur_game->cols) + j] == -1){										//finds an empty space in target row
						cur_game -> cells[k*(cur_game->cols) + j] = cur_game->cells[i*(cur_game->cols)+j);		//swaps empty space in target row with selected current row
						cur_game->cells[i*(cur_game->cols)+j] = -1;											//sets space in current row with -1
					}
					//checking for values above target row and at target row, add if cell above target row has the same value, add the two cells
					if (cur_game -> cells[k*(cur_game->cols) + j] == cur_game->cells[(k-1)*(cur_game->cols)+j]) {
						cur_game -> cells[(k-1)*(cur_game->cols) + j] = cur_game -> cells[k*(cur_game->cols)+j] + cur_game->cells[(k-1)*(cur_game->cols)+j])
						cur_game -> cells[k*(cur_game->cols)+j] == -1;

					//need code to slide everything upwards after addition of two same cells
					}
				}
			}
		}
	}

	
    return 1;
}








  //Dynamically allocate memory for game and cells (DO NOT modify this)
    game * mygame = malloc(sizeof(game));
    mygame->cells = malloc(rows*cols*sizeof(cell));

    //YOUR CODE STARTS HERE:  Initialize all other variables in game struct
	for (int i = 0; i<rows; i++) {
		for (int j = 0; j<cols; j++) {
			//access cells individually... using 1D Array notation at the dereferencing pointer mygame
			mygame -> cells[(i*cols)+j];
			mygame == -1;
		}
	}
	mygame -> score == 0; 			//initializing score to 0
    return mygame;
