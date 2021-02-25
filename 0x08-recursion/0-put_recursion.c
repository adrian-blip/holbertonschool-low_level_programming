# incluye  " holberton.h "
/ * *
 * _puts_recursion: imprime una cadena
 * @s: cadena que viene
 * Retorno: 0 cuando termina la cadena
* * /
void  _puts_recursion ( char * s)
{
int r = 0 ;

si (s [r] == ' \ 0 ' )
{
_putchar ( 10 );
volver ;
}
_putchar (* s);
s ++;
_puts_recursion (s);
}
