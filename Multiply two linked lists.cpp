class solution {
public:
    long long linkedListToInt(Node* head) {
        long long num = 0;
        while (head) {
            num = (num * 10 + head->data) % MOD;
            head = head->next;
        }
        return num;
    }

    long long multiplyTwoLists(Node* first, Node* second) {
        long long num1 = linkedListToInt(first);
        long long num2 = linkedListToInt(second);
        return (num1 * num2) % MOD;
    }
};
