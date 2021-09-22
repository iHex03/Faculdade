import 'dart:html';

void main() {
  var deck = Deck();
  // deck.shuffle();
  print(deck);

  // deck.removeCard('Ouros', 'Ás');
  // print(deck);

  // print(deck.cardsWithSuit('Ouros'));
  // print(deck.deal(2));

  iterator<Card> it = deck.cards.iterator;
  while (it.moveNext()) {
    print(it.current);
  }

  print('-----');
  for (var c in deck.cards) {
    print(c);
  }

  // print(deck.deal(2));
  // print(deck);
}

class Deck {
  List<Card> cards = [];

  Deck() {
    var ranks = [
      'Ás',
      'Dois',
      'Três',
      'Quatro',
      'Cinco',
      'Seis',
      'Sete',
      'Oito',
      'Nove',
      'Dez',
      'Valete',
      'Dama',
      'Rei'
    ];
    var suits = ['Ouros', 'Espadas', 'Copas', 'Paus'];

    for (var suit in suits)
      for (var rank in ranks) {
        var card = Card(rank, suit);
        cards.add(card);
      }
  }
}

void shuffle() {
  cards.shuffle();
}

@override
String toString() {
  return cards.toString();
}

Iterable<Card> cardsWithSuit(String suit) {
  // return cards.where((Card card) {
  //   return card.suit == suit;
  // });

  return cards.where((Card card) => card.suit == suit);
}

List<Card> deal(int handSize) {
  var hand = cards.sublist(0, handSize);
  cards = cards.sublist(handSize);
  return hand;
}

void removeCard(String suit, String rank) {
  cards.removeWhere((Card card) => (card.suit == suit && card.rank == rank));
}

class Card {
  String suit;
  String rank;

  Card(this.rank, this.suit);

  @override
  String toString() {
    return '[$rank de $suit]';
  }
}
