int odd[10] = {1, 3, 5, 7, 9};
int even[10] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}
