import 'package:airoute/airoute.dart';
import 'package:flutter/material.dart';

///
/// MainSortListPage
class MainSortListPage extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return _MainSortState();
  }
}

///
/// _MainSortState
class _MainSortState extends State<MainSortListPage> {
  String titleName = "主页";

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
  var _showModalBottomSheet;

  Widget createWidget() {
    return Scaffold(
      appBar: AppBar(
        title: Text("演示主页"),
        centerTitle: true,
        leading: GestureDetector(
          onTap: () {
            Airoute.pop();
          },
          child: Icon(
            Icons.arrow_back,
            color: Colors.white,
          ),
        ),
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
              Airoute.pushNamedWithAnimation(
                routeName: "ViewPagerFragmentPage",
                routePageAnimation: AirouteTransition.Slide,
              );
            },
            child: Text("Toolbar+ViewPager+Fragment",style: TextStyle(color:Colors.white )),
          ),
          ElevatedButton(
            onPressed: () {
              Airoute.pushNamedWithAnimation(
                routeName: "CollapsingToolbarPage",
                routePageAnimation: AirouteTransition.Slide,
              );
            },
            child: Text("Collapsing+Toolbar+Fragment",style: TextStyle(color:Colors.white )),
          ),
          ElevatedButton(
            onPressed: () {
              Airoute.pushNamedWithAnimation(
                routeName: "/MainAnimSortPage",
                routePageAnimation: AirouteTransition.Slide,
              );
            },
            child: Text("Animation"),
          ),
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
          ElevatedButton(
            onPressed: () {
              Airoute.pushNamedWithAnimation(
                routeName: "/CardMainPage",
                routePageAnimation: AirouteTransition.Slide,
              );
            },
            child: Text("组件间通信"),
          ),
          ElevatedButton(
            style: ElevatedButton.styleFrom(
              foregroundColor: Colors.blue,
            ),
            onPressed: () {
              Airoute.pushNamedWithAnimation(
                routeName: "/DragListPage",
                routePageAnimation: AirouteTransition.Slide,
              );
            },
            child: Text("Drag拖拽",style: TextStyle(color:Colors.white )),
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
