/*val is the number proposed by computer*/
//Function to guess a number
void guess(int val)
{
	int guessed_val;
	cout<<"Guess a value"<<endl;
	cin>>guessed_val;
	while(guessed_val!=val)
	{
		if(guessed_val>val)
		{
			cout<<"Guess a smaller value"<<endl;
			cin>>guessed_val;
		}
		else
		{
			cout<<"Guess a larger value"<<endl;
			cin>>guessed_val;
		}
	}
	cout<<"Value guessed correctly"<<endl;
	return;
}

//By Pratiksha
