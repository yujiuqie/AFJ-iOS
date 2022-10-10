import 'package:afjflutter/component/BasePresenter.dart';

///MVP--View-
abstract class BaseView<T extends BasePresenter> {
  setPresenter(T presenter);
}
