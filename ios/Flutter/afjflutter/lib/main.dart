import 'package:air_design/air_design.dart';
import 'package:airoute/airoute.dart';
import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:afjflutter/component/builder/future_builder_async_request_page.dart';
import 'package:afjflutter/component/builder/future_builder_main_page.dart';
import 'package:afjflutter/component/builder/stream_builder_main_page.dart';
import 'package:afjflutter/component/fit/fitted_box_page.dart';
import 'package:afjflutter/component/image/image_picker_page.dart';
import 'package:afjflutter/component/login/login_page.dart';
import 'package:afjflutter/component/login/tv_login_page.dart';
import 'package:afjflutter/component/main/main_page.dart';
import 'package:afjflutter/component/main/tv_main_page.dart';
import 'package:afjflutter/component/paint/sun_main_page.dart';
import 'package:afjflutter/component/route/second_page.dart';
import 'package:afjflutter/component/route/third_page.dart';
import 'package:afjflutter/component/shop/shopping_list.dart';
import 'package:afjflutter/component/state/inherited_widget_main_page.dart';
import 'package:afjflutter/component/tab/tab_main_page.dart';
import 'package:afjflutter/component/test/test_page.dart';
import 'package:afjflutter/global_view_model.dart';
import 'package:afjflutter/sample/anim/anim_of_switch_page.dart';
import 'package:afjflutter/sample/anim/animated_builder_page.dart';
import 'package:afjflutter/sample/anim/animated_container_page.dart';
import 'package:afjflutter/sample/anim/color_tween_page.dart';
import 'package:afjflutter/sample/anim/draw_anim_page.dart';
import 'package:afjflutter/sample/anim/fade_in_image_page.dart';
import 'package:afjflutter/sample/anim/hero_anim_page.dart';
import 'package:afjflutter/sample/anim/main_anim_sort_page.dart';
import 'package:afjflutter/sample/anim/opacity_and_animated_opacity_page.dart';
import 'package:afjflutter/sample/anim/transform_page.dart';
import 'package:afjflutter/sample/collapsing_toolbar_page.dart';
import 'package:afjflutter/sample/drag/drag_list_page.dart';
import 'package:afjflutter/sample/drawer_variously_page.dart';
import 'package:afjflutter/sample/ink/ink_page.dart';
import 'package:afjflutter/sample/loading/main_loading_page.dart';
import 'package:afjflutter/sample/main_sort_list_page.dart';
import 'package:afjflutter/sample/notifier/card_info_page.dart';
import 'package:afjflutter/sample/notifier/card_main_page.dart';
import 'package:afjflutter/sample/popup/main_popup_page.dart';
import 'package:afjflutter/sample/view_pager_fragment_page.dart';
import 'package:afjflutter/sample/wave/main_wave_page.dart';
import 'package:flutter_easyloading/flutter_easyloading.dart';
import 'package:flutter_localizations/flutter_localizations.dart';
import 'package:provider/provider.dart';

import 'ChineseCupertinoLocalizations.dart';
import 'component/barcode/barcode_main_page.dart';
import 'component/builder/stream_builder_async_request_page.dart';
import 'component/filter/select_color_filter_page.dart';
import 'component/message/awesome_message_main_page.dart';
import 'component/network/network_check_page.dart';
import 'component/personal/user_info_page.dart';
import 'component/route/launch_page.dart';
import 'component/search/search_page.dart';
import 'component/setting/setting_page.dart';
import 'component/tab/navigation_drawer_page.dart';
import 'component/tab/navigation_rail_page.dart';
import 'component/video/video_player_page.dart';
import 'sample/anim/icon/main_icon_anim_page.dart';
import 'sample/anim/snappable_page.dart';
import 'sample/chart/chart_page.dart';
import 'sample/clip/clip_main_page.dart';
import 'sample/navigation/curved_navigation_bar_page.dart';
import 'sample/overlay/main_overlay_page.dart';
import 'sample/overlay/simple_overlay_page.dart';
import 'sample/picker/main_picker_page.dart';
import 'sample/progress/main_progress_page.dart';
import 'sample/segment/drop_down_page.dart';
import 'sample/segment/segment_page.dart';
import 'sample/text/rich_text_page.dart';
import 'sample/tip/flushbar_page.dart';
import 'sample/webview/air_license_page.dart';
import 'sample/webview/flutter_web_page.dart';
import 'sample/wheel/list_wheel_scroll_view_page.dart';

///
/// main
void main() {
  runApp(
    MyApp(),
  );
}

///
/// MyApp
class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    ErrorWidget.builder = (detail) {
      return AppTextHeadline6Widget.defaultStyle(data: detail.toString());
    };
    return MultiProvider(
      providers: [ChangeNotifierProvider(create: (_) => GlobalViewModel.getInstance())],
      child: Consumer<GlobalViewModel>(
        builder: (context, value, child) {
          return ColorFiltered(
            colorFilter: ColorFilter.mode(Colors.transparent, BlendMode.color),
            child: Shortcuts(
              shortcuts: <LogicalKeySet, Intent>{
                LogicalKeySet(LogicalKeyboardKey.select): ActivateIntent(),
              },
              child: Airoute.createMaterialApp(
                  title: "flutter app sample",
                  debugShowCheckedModeBanner: false,
                  home: Scaffold(
                    body: MainPage(),
                  ),
                  themeMode: value.themeMode,
                  theme: ThemeData.light().copyWith(
                    primaryColor: Colors.blue,
                    //primary color,button enable color,check color
                    primaryColorDark: Colors.blue,
                    accentColor: Colors.blueAccent,
                    //select color
                    unselectedWidgetColor: Colors.grey,
                    //unchecked color,unselected color
                    splashColor: Colors.blueAccent[100],
                    //splash color
                    errorColor: Colors.red,
                    //error color
                    indicatorColor: Colors.orange,
                    textTheme: Theme.of(context).textTheme.copyWith(
                          headline1: TextStyle(),
                        ),
                    //indicator color
                    appBarTheme: AppBarTheme.of(context).copyWith(
                      elevation: 0.0,
                      centerTitle: true,
                      titleTextStyle: TextStyle(
                        color: Colors.black,
                      ),
                    ),
                  ),
                  darkTheme: ThemeData.dark().copyWith(
                    primaryColor: Colors.grey[900],
                    //primary color,button enable color,check color
                    primaryColorDark: Colors.black,
                    accentColor: Colors.tealAccent[200],
                    //select color
                    unselectedWidgetColor: Colors.grey,
                    //unchecked color,unselected color
                    splashColor: Colors.black26,
                    //splash color
                    errorColor: Colors.red,
                    //error color
                    indicatorColor: Colors.orange,
                    textTheme: Theme.of(context).textTheme.copyWith(
                          headline1: TextStyle(),
                        ),
                    //indicator color
                    appBarTheme: AppBarTheme.of(context).copyWith(
                      elevation: 0.0,
                      centerTitle: true,
                      titleTextStyle: TextStyle(
                        color: Colors.black,
                      ),
                    ),
                  ),
                  locale: const Locale('zh', 'CH'),
                  localizationsDelegates: [
                    ChineseCupertinoLocalizations.delegate,
                    DefaultCupertinoLocalizations.delegate,
                    GlobalMaterialLocalizations.delegate,
                    GlobalWidgetsLocalizations.delegate,
                  ],
                  supportedLocales: [
                    const Locale('zh', 'CH'),
                    const Locale('en', 'US'),
                  ],

                  ///全局静态路由的配置！
                  routes: <String, WidgetBuilder>{
                    "/LoginPage": (_) => LoginPage(),
                    "/TvLoginPage": (_) => TvLoginPage(),
                    "/MainPage": (_) => MainPage(),
                    "/TvMainPage": (_) => TvMainPage(),
                    "/TestPage": (_) => TestPage(),
                    "/ShoppingList": (_) => ShoppingListPage(),
                    "/MainSortListPage": (_) => MainSortListPage(),
                    "/ViewPagerFragmentPage": (_) => ViewPagerFragmentPage(),
                    "/CollapsingToolbarPage": (_) => CollapsingToolbarPage(),
                    "/MainAnimSortPage": (_) => MainAnimSortPage(),
                    "/AnimOfSwitchPage": (_) => AnimOfSwitchPage(),
                    "/AnimatedContainerPage": (_) => AnimatedContainerPage(),
                    "/OpacityAndAnimatedOpacityPage": (_) => OpacityAndAnimatedOpacityPage(),
                    "/FadeInImagePage": (_) => FadeInImagePage(),
                    "/HeroAnimPage": (_) => HeroAnimPage(),
                    "/TransformPage": (_) => TransformPage(),
                    "/AnimatedBuilderPage": (_) => AnimatedBuilderPage(),
                    "/ColorTweenPage": (_) => ColorTweenPage(),
                    "/AnappablePage": (_) => AnappablePage(),
                    "/DrawAnimPage": (_) => DrawAnimPage(),
                    "/CardMainPage": (_) => CardMainPage(),
                    "/CardInfoPage": (_) => CardInfoPage(),
                    "/DragListPage": (_) => DragListPage(),
                    "/DrawerVariouslyPage": (_) => DrawerVariouslyPage(),
                    "/FlushBarPage": (_) => FlushBarPage(),
                    "/ChartPage": (_) => ChartPage(),
                    "/UserInfoPage": (_) => UserInfoPage(),
                    "/MainPickerPage": (_) => MainPickerPage(),
                    "/FlutterWebPage": (_) => FlutterWebPage(),
                    "/AirLicensePage": (_) => AirLicensePage(),
                    "/ListWheelScrollViewPage": (_) => ListWheelScrollViewPage(),
                    "/CurvedNavigationBarPage": (_) => CurvedNavigationBarPage(),
                    "/ClipMainPage": (_) => ClipMainPage(),
                    "/InkPage": (_) => InkPage(),
                    "/RichTextPage": (_) => RichTextPage(),
                    "/MainProgressPage": (_) => MainProgressPage(),
                    "/SegmentPage": (_) => SegmentPage(),
                    "/DropDownPage": (_) => DropDownPage(),
                    "/MainPopupPage": (_) => MainPopupPage(),
                    "/MainWavePage": (_) => MainWavePage(),
                    "/MainIconAnimPage": (_) => MainIconAnimPage(),
                    "/MainOverlayPage": (_) => MainOverlayPage(),
                    "/SimpleOverlayPage": (_) => SimpleOverlayPage(),
                    "/MainLoadingPage": (_) => MainLoadingPage(),
                    "/SelectColorFilterPage": (_) => SelectColorFilterPage(),
                    "/NetworkCheckPage": (_) => NetworkCheckPage(),
                    "/VideoPlayerPage": (_) => VideoPlayerPage(),
                    "/SettingPage": (_) => SettingPage(),
                    "/BarcodeMainPage": (_) => BarcodeMainPage(),
                    "/route/LaunchPage": (_) => LaunchPage(),
                    "/route/SecondPage": (_) => SecondPage(),
                    "/route/ThirdPage": (_) => ThirdPage(),
                    "/message/AwesomeMessageMainPage": (_) => AwesomeMessageMainPage(),
                    "/paint/SunMainPage": (_) => SunMainPage(),
                    "/image/ImagePickerPage": (_) => ImagePickerPage(),
                    "/StreamBuilderMainPage": (_) => StreamBuilderMainPage(),
                    "/StreamBuilderMainPage/StreamBuilderAsyncRequestPage": (_) => StreamBuilderAsyncRequestPage(),
                    "/FutureBuilderMainPage": (_) => FutureBuilderMainPage(),
                    "/FutureBuilderMainPage/FutureBuilderAsyncRequestPage": (_) => FutureBuilderAsyncRequestPage(),
                    "/InheritedWidgetMainPage": (_) => InheritedWidgetMainPage(),
                    "/TabMainPage": (_) => TabMainPage(),
                    "/TabMainPage/NavigationRailPage": (_) => NavigationRailPage(),
                    "/TabMainPage/NavigationDrawerPage": (_) => NavigationDrawerPage(),
                    "/FittedBoxPage": (_) => FittedBoxPage(),
                    "/SearchPage": (_) => SearchPage(),
                    // "/DartpadPage": (_) => DartpadPage(),
                  },
                  builder: EasyLoading.init(
                    //loading
                    builder: (context, Widget? widget) {
                      return MediaQuery(
                        data: MediaQuery.of(context).copyWith(textScaleFactor: 1.0),
                        child: widget!,
                      );
                    },
                  )),
            ),
          );
        },
      ),
    );
  }
}
