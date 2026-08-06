struct termios    *setup(struct termios *old)
{
    struct termios raw;

    tcgetattr(STDIN_FILENO, &raw);//permet de recuperer les attributs du terminal
    tcgetattr(STDIN_FILENO, old);
    raw.c_lflag &= ~(ECHO | ICANON);//desactive le mode canonique
    raw.c_cc[VMIN] = 0;//nombre min de caractere a recevoir
    raw.c_cc[VTIME] = 0;//attente a 0
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);//defini les attributs terminal
    return (old);
}

int    get_key(char *buff, int length)
{
    int nb = read(0, buff, length);
    return (nb);
}

void    print_key(char    *buff, int size)
{
    printf("lettre : %d, %d, %d, %d\n", buff[0], buff[1], buff[2], size);
    fflush(stdout);//vide le tampon de sortie (merci google)
}

int    main()
{
    struct termios    old;
    char            c[3];

    old = *setup(&old);
    while (1)
    {
        int size = get_key(c, 3);
        if (size)
            print_key(c, size);
    }
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &old);
}
