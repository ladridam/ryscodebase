class Message {
  // blueprint of class Message
  final String sender;
  final String text;
  final DateTime timestamp;
  final String? replyTo;

  Message({
    required this.sender,
    required this.text,
    required this.timestamp,
    this.replyTo,
  }); //Message constructor
}

List<Message> messagesFrom(List<Message> all, String sender) {
  //final result = <Message>[];

  //for(final m in all){
  //  if (m.sender == sender) {
  //    result.add(m);
  //  } //if
  //}   //for
  //return result;
  //short hand logic
  return all.where((m) => m.sender == sender).toList();
  // .where calls the function
}

void main() {
  final messages = <Message>[
    // instances of Message
    Message(
      sender: 'Ridam', 
      text: 'hello', 
      timestamp: DateTime.now()
      ),
    Message(
      sender: 'Bryce',
      text: 'Hey!',
      timestamp: DateTime.now(),
      replyTo: 'Bryce',
    ),
    Message(
      sender: 'Joel',
      text: 'Hi',
      timestamp: DateTime.now(),
      replyTo: 'Joel',
    ),
  ]; 
  for (final m in messages) {
    print('${m.sender} said: ${m.text}');
    if (m.replyTo != null) {
      print('Reply to ${m.replyTo}');
    } //if
  } //for
} //main
