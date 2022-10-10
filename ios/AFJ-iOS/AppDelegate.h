//
//  AppDelegate.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/11.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <Flutter/Flutter.h>
#import "AFJCaseItemData.h"
//TODO::Unity
#include <UnityFramework/UnityFramework.h>

#import "AFJMenuViewController.h"
#import "AFJSearchListViewController.h"
#import "AFJLogViewController.h"

#import "MMDrawerController.h"
#import "CYLMainRootViewController.h"

typedef NS_ENUM(NSUInteger, AJFRootVCType) {
    AJFRootVCType_Drawer = 0,
    AJFRootVCType_Tab
};

@interface AppDelegate : UIResponder
<
UIApplicationDelegate,
UnityFrameworkListener //TODO::Unity
>

@property (nonatomic, strong) FlutterEngine *flutter_eng;
@property (nonatomic, strong) UIWindow * window;
@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;
@property (nonatomic, strong) UnityFramework *ufw; //TODO::Unity

@property (nonatomic, strong) AFJSearchListViewController *homeVC;
@property (nonatomic, strong) AFJMenuViewController *menuVC;
@property (nonatomic, strong) AFJLogViewController *logVC;

@property (nonatomic, strong) UINavigationController *navHome;
@property (nonatomic, strong) UIViewController *tmpRootVC;
@property (nonatomic, assign) BOOL allowOrentitaionRotation;

@property (nonatomic, strong) MMDrawerController *drawerController;
@property (nonatomic, strong) CYLMainRootViewController *tabController;

@property (nonatomic, assign) AJFRootVCType rVCType;

@property (copy) void (^backgroundURLSessionCompletionHandler)(void);

- (void)showUnityView;

- (void)showNativeView;

- (void)saveContext;

- (void)backHome;

- (void)back;

- (void)selectedLeftVCIndex:(AFJCaseItemData *)item;

@end

