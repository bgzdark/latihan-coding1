#include <iostream>
#include <deque>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    deque<int> deck;
    unordered_map<int, int> position;

    // Read initial deck
    for (int i = 0; i < N; ++i) {
        int card;
        cin >> card;
        deck.push_back(card);
        position[card] = i;
    }

    // Process operations
    for (int i = 0; i < K; ++i) {
        char operation;
        int value;
        cin >> operation >> value;

        if (operation == 'A') {
            // Astik adds card X to the top of the deck
            deck.push_front(value);
            position[value] = 0;
            // Update positions for existing cards
            for (auto& [card, pos] : position) {
                if (pos < N) ++pos;
            }
        } else if (operation == 'G') {
            // Gema moves card Y and all cards below it to the top
            int posY = position[value];
            if (posY < N) {
                // Collect cards from posY to end
                deque<int> moveDeck;
                for (int j = posY; j < N; ++j) {
                    moveDeck.push_back(deck[j]);
                }

                // Remove those cards from the original deck
                deck.erase(deck.begin() + posY, deck.end());

                // Place the collected cards on top
                deck.insert(deck.begin(), moveDeck.begin(), moveDeck.end());
                
                // Update positions
                for (int j = 0; j < N; ++j) {
                    position[deck[j]] = j;
                }
            }
        }
    }

    // Output the final deck
    cout << deck.size() << '\n';
    for (int card : deck) {
        cout << card << ' ';
    }
    cout << '\n';

    return 0;
}
