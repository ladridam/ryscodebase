/*
FUTURE: 
1.  Dart represents “a value that will exist later” with Future.
2.  A Future is a box that will be filled later. 
    await unwraps it: it pauses the current function until the box is filled, 
    then gives you the value inside.
3.  A Future delivers one value later.

 */




/*
Future<String> fetchGreeting() async {
  await Future.delayed(const Duration(seconds: 2));
  return 'hello from server';
}

void main() async{
  print('start');
  final greeting = fetchGreeting();
  print(greeting);
  print('after call');
  print('end');
}
*/

Future<String> slow(String name) async{
  await Future.delayed(const Duration(seconds: 2));
  //return name;
  throw Exception('server down');
}

void main() async{
  //final sw = Stopwatch()..start();

  /* === demonstrating time taken; a->b-> result === 
  final a = await slow('A');
  final b = await slow('B');
  print('$a $b: ${sw.elapsed.inSeconds}s');
  === OUTPUT: A B: 4s ===
  */

  /* === a & b -> result ===

  DEMONSTRATING CONCURRENCY
  slow('A') and slow('B') start together

  final fa = slow('A');
  final fb = slow('B');
  final a = await fa;
  final b = await fb;
  print('$a $b: ${sw.elapsed.inSeconds}s');
  === OUTPUT: A B: 2s
   */

  /*changed slow to try-catch*/
  try {
    final a = await slow('A');
    print(a);
  } catch (e) {
    print('caught: $e');
  }
}
