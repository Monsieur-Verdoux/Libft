{
	char    string1[] = "gree";
    char    string2[] = "greet";
	size_t number = 39;
    int result;
	int check;
    
  result = ft_strncmp(string1, string2, number);
  check = strncmp(string1, string2, number);
  
  printf("result is: %d\ncheck is: %d\n", result, check);
  
  return 0;
}