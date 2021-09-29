import 'package:flutter/material.dart';

class App extends StatefulWidget {
  @override
  AppState createState() {
    return AppState();
  }
}

class AppState extends State<App> {
  int counter = 0;

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        body: Text('$counter'),
        floatingActionButton: FloatingActionButton(
          child: Icon(Icons.add),
          onPressed: () {
            print('Olá!');

            setState(() {
              counter++;
            });
          },
        ),
        appBar: AppBar(
          title: Text('Vamos ver algumas imagens!'),
        ),
      ),
    );
  }
}
