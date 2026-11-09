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
  await for(final n in countdown(3)){
    print(n);
  }
  print('end');
}

