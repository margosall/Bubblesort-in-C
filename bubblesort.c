void BubbleSort(int *inputArray, int lengthOfRow)
{	
	
    int swapsMade = 1, loop,
    temporaryInteger; 
	while(swapsMade != 0)  
	{
		swapsMade = 0;
		for(loop = 0; loop < lengthOfRow - 1; loop++)
		{
			if(inputArray[row][loop] > inputArray[row][loop + 1])
			{
				temporaryInteger = inputArray[loop + 1];
				inputArray[loop + 1] = inputArray[loop];
				inputArray[loop] = temporaryInteger;
				swapsMade += 1;
				
				if(loop == lengthOfRow - 2)
				{
					lengthOfRow -= 1;
				}
			}
		}
	}
		
}
