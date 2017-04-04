4.25
What is the value of ~'q' << 6 on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?
The final value in decimal representation is -7296.

The bitwise NOT operator (~) yields us the Ones' Complement(fan ma) of 0000 0000 0000 0000 0000 0000 0111 0001, which is 1111 1111 1111 1111 1111 1111 1000 1110. The value of 1111 1111 1111 1111 1111 1111 1000 1110 in decimal form is -114. This may come as a surprise to some as the unsigned value of said binary sequence is 4294967182. The most significant bit (the left-most bit, commonly referred to as the sign bit) is however "turned on", or 1, which signifies a negation operation on that particular bit. The value of that particular bit is then -2147483648.

We then shift the bits 6 digits to the left, which yields us 1111 1111 1111 1111 1110 0011 1000 0000. Overflowing bits were discarded. The decimal representation of the binary sequence is -7296.

在计算机系统中，数值一律用补码来表示和存储。原因在于，使用补码，可以将符号位和数值域统一处理；同时，加法和减法也可以统一处理。此外，补码与原码相互转换，其运算过程是相同的，不需要额外的硬件电路。


4.31
There is no difference between prefix and postfix.

4.32
ix and ptr have the same function. The loop just goes through the array.

4.33
Because of the most lowest precedence of the comma operator, the expression is same as:
	(someValue ? ++x, ++y : --x), --y

