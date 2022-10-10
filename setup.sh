#!/bin/bash

rootPath=$PWD
echo "Step 1 : Setup React Native"
yarn install
npm run ios-build

echo "Step 2 : Setup Flutter"
cd ./ios/Flutter/afjflutter
flutter clean
flutter pub get
flutter build ios --release --no-codesign
cd $rootPath

echo "Step 3 : Setup CocoaPods"
cd ./ios/
pod install

echo "Step 4 : Open Xcode"
open AFJ-iOS.xcworkspace