main() {
    int x = 0, y = 2, z = 1025;
    float a = 0.0, b = 3.14159, c = -37.234;
    
    // Incrementing
    x = x + 1;			// This  increments x
    x++;				// This increments x
    ++x;				// This increments x
    z = y++;			// z = 2, y = 3
    z = ++y;			// z = 4, y = 4
    
    // Decrementing
    y = y - 1;			// This decrements y
    y--;				// This decrements y
    --y;				// This decrements y
    y = 3;
    z = y--;			// z = 3, y = 2
    z = --y;;			// z = 1, y = 1
    
    /* Arithmetic op */
    a = a + 12;			// This adds 12 to a
    a += 12;			// This adds 12 more to a
    a *= 3.2;			// This multiplies a by 3.2
    a -= b;				// This subtracts b from a
    a /= 10.0;			//This divides a by 10.0
    
    // conditional expression
    a = (b >= 3.0 ? 2.0 : 10.5 );		/* This expression */
    if (b >= 3.0)						// and this expression
    	a  = 2.0;						// are identical
    else								// both will cause
    	a = 10.5;						// the same result
    	
    c = (a > b?a:b);					// c will have the max of a or b
    c = (a > b?b:b);					// c will have the min of a or b
}
