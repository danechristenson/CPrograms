/* returns characters as lowercase */
void lower(char s[]) 
{
    int i;
    
    for ( i = 0; s[i] != '\0'; i++)
    {
        (s[i] >= 'A' && s[i] <= 'Z') ? s[i] += 'a' - 'A'  : s[i];
    }
}