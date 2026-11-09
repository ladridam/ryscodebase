/*
A Future delivers one value later. A Stream delivers many values over time. 
A chat connection is naturally a stream: each incoming message is another event.
 */

// countdown Function
/**
1. async* marks a function that produces a Stream.
2. yield is like return, but the function keeps running. 
    It emits one value into the stream and carries on to the next loop iteration.
 */
Stream<int> countdown(int from) async* {
  for (var i = from; i > 0; i--){
    await Future.delayed(const Duration(seconds: 1));
    yield i;
  }
}

void main() async {
  print('start');

  // --- Approach 1: await for (Sequential / Blocking) ---
  // Pauses main() until the entire stream finishes before moving to 'end'.
  /*  EXPLANATION
  1.  main() pauses at each event and waits for the entire stream to finish before proceeding.
  2.  'start' → 3 → 2 → 1 → 'end'
  3.  Return value:	None (it's a control flow loop).
  4.  Lifecycle events:	Handled with standard try/catch/finally.
   */
  
  /* === CODE ===
  await for (final n in countdown(3)) {
    print(n);
  }
  */

  /* 
  Use await for when processing events sequentially or when subsequent code must not run until the stream completes.
  */

  // --- Approach 2: .listen (Subscription / Non-blocking) ---
  // Registers a callback and returns immediately. 'end' will print BEFORE the countdown!
  /*  EXPLANATION
  1.  Registers callbacks and immediately continues execution without waiting.
  2.  'start' → 'end' → 3 → 2 → 1
  3.  Return value: Returns a StreamSubscription, allowing you to cancel(), pause(), or resume().
  4.  Lifecycle events: Handled with callback parameters (onError, onDone).
  */
  countdown(3).listen(
    (n) => print(n),
    onDone: () => print('stream completed!'),
  );

  print('end');

  /*
  Use .listen() when you want an ongoing subscription (e.g. listening to UI button clicks, WebSocket messages) while the rest of your app continues executing concurrently.
  */
}

