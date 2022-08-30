
// selection sort
void selectionSort(std::vector<int> &arr) {
    
    for (int currentIndex = 0; currentIndex < arr.size() - 1; currentIndex++) {
      
        int minIndex = currentIndex;
        
        for (int i = currentIndex + 1; i < arr.size(); i++) {
          
            if (arr[i] < arr[minIndex]) {
                
                minIndex = i;
            }
        }
       
        if (minIndex != currentIndex) {
            int temp = arr[currentIndex];
            arr[currentIndex] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
