public class Bubble_Sort {
    public static void main(String args[]) {
        int arr[] = { 3, 5, -1, 2, 7, 1};
        int size = arr.length;
        int temp;
        int x = 1;
        while (size > x) {
            for (int i = 0; i < size - x; i++) {
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            }
            x++;
        }

        System.out.print("Sorted : ");
        for(int i=0; i<size; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }

}
