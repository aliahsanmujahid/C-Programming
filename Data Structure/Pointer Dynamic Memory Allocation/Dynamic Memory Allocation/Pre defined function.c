Pre defined function of dynamic memory allocation

1.malloc();
ptr = (type*)malloc(n*sizeof(datatype)); By Default it is void pointer.
p = (int*)malloc(n*sizeof(int));


2.calloc();
ptr = (type*)calloc(n*sizeof(datatype)); By Default it is void pointer.
p = (int*)calloc(n*sizeof(int));

3.free();
free(ptr);

4.realloc();
ptr = realloc(ptr,newsize);



