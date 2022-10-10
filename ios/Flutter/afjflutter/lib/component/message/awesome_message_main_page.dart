import 'package:flutter/material.dart';
import 'package:afjflutter/component/message/popup_page.dart';

///
/// AwesomeMessageMainPage
class AwesomeMessageMainPage extends StatefulWidget {
  @override
  _AwesomeMessageMainPageState createState() => _AwesomeMessageMainPageState();
}

class _AwesomeMessageMainPageState extends State<AwesomeMessageMainPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: PopupPage(),
    );
  }
}
