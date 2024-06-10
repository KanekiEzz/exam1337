size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        j = 0;
        int flag = 0;
        while(accept[j])
        {
            if(accept[j] == s[i])
            {
                flag = 1;
                break;
            }
            j++;
        }
        if(!flag)
            break;
        i++;
    }

    return i;
}