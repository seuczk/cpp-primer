Excercise 5_22:
The last example in this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto.
// backward jump over an initialized variable definition is okay  
begin:
    int sz = get_size();
	if (sz <= 0) {
		goto begin;
	}
use for to replace goto:

for (int sz = get_size(); sz <=0; sz = get_size())
    ; // should not remove.
