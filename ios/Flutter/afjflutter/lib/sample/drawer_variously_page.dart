import 'package:flutter/material.dart';

///
/// 各种各样的侧滑
class DrawerVariouslyPage extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return _DrawerState();
  }
}

///
/// _DrawerState
class _DrawerState extends State<DrawerVariouslyPage> {
  String titleName = "DrawerVariously";

  List<String> _bottomSheetTitles = [
    "列表项",
    "列表项",
    "列表项",
    "列表项",
    "列表项",
    "列表项",
    "列表项",
    "列表项",
    "列表项",
  ];

  Widget createWidget() {
    return Scaffold(
      appBar: AppBar(
        title: Text("演示主页"),
        centerTitle: true,
      ),
      endDrawer: Drawer(
        child: SingleChildScrollView(
          scrollDirection: Axis.vertical,
          child: Column(
            children: <Widget>[
              Image.network(
                "https://images.pexels.com/photos/396547/pexels-photo-396547.jpeg?auto=compress&cs=tinysrgb&h=350",
                fit: BoxFit.cover,
                filterQuality: FilterQuality.low,
              ),
              Column(
                children: _bottomSheetTitles.map((String content) {
                  return Card(
                    color: Colors.blue,
                    margin: EdgeInsets.all(10),
                    elevation: 5,
                    child: ListTile(
                      onTap: () {},
                      contentPadding: EdgeInsets.all(10),
                      leading: Padding(
                        padding: EdgeInsets.all(20),
                        child: Text(
                          "$content",
                          style: TextStyle(color: Colors.white),
                        ),
                      ),
                      trailing: Image.network(
                        "https://images.pexels.com/photos/396547/pexels-photo-396547.jpeg?auto=compress&cs=tinysrgb&h=350",
                        fit: BoxFit.cover,
                        width: 100,
                        height: 100,
                      ),
                    ),
                  );
                }).toList(),
              )
            ],
          ),
        ),
      ),
      body: ListView(
        children: <Widget>[
          ElevatedButton(
            onPressed: () {
              showModalBottomSheet(
                context: context,
                builder: (BuildContext context) {
                  return SingleChildScrollView(
                    child: Column(children: <Widget>[
                      SizedBox(
                        height: 50,
                        child: Row(children: <Widget>[
                          Expanded(
                              flex: 1,
                              child: GestureDetector(
                                onTap: () {},
                                child: Align(
                                  child: Icon(Icons.close),
                                ),
                              )),
                          Expanded(
                              flex: 2,
                              child: Align(
                                child: Text(
                                  "选择",
                                  textAlign: TextAlign.center,
                                ),
                              )),
                          Expanded(
                            flex: 1,
                            child: Align(
                              child: Text(
                                "确定",
                                textAlign: TextAlign.center,
                                style: TextStyle(color: Colors.blue),
                              ),
                            ),
                          ),
                        ]),
                      ),
                      Column(
                        children: _bottomSheetTitles.map((String content) {
                          return Card(
                            color: Colors.blue,
                            margin: EdgeInsets.all(10),
                            elevation: 5,
                            child: ListTile(
                              onTap: () {},
                              contentPadding: EdgeInsets.all(10),
                              leading: Padding(
                                padding: EdgeInsets.all(20),
                                child: Text(
                                  "$content",
                                  style: TextStyle(color: Colors.white),
                                ),
                              ),
                              trailing: Image.network(
                                "https://images.pexels.com/photos/396547/pexels-photo-396547.jpeg?auto=compress&cs=tinysrgb&h=350",
                                fit: BoxFit.cover,
                                width: 100,
                                height: 100,
                              ),
                            ),
                          );
                        }).toList(),
                      ),
                    ]),
                  );
                },
              );
            },
            child: Text("Bottom Sheet"),
          ),
        ],
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return createWidget();
  }
}
