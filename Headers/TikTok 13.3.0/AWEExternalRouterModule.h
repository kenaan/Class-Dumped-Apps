//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSModule-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSDictionary, NSString, UIWindow;

@interface AWEExternalRouterModule : NSObject <UNUserNotificationCenterDelegate, HTSModule>
{
    _Bool _launchInsertVideo;
    NSDictionary *_launchOptions;
}

+ (void)load;
+ (unsigned long long)priority;
@property(nonatomic) _Bool launchInsertVideo; // @synthesize launchInsertVideo=_launchInsertVideo;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)stopLiveNotificationHandler;
- (id)loadHandlingPushData;
- (id)referStringFromScheme:(id)arg1;
- (void)trackAppLaunchWithPushOpenURL:(id)arg1 isInBackground:(_Bool)arg2;
- (void)trackAppLaunchWithScheme:(id)arg1 isInBackground:(_Bool)arg2;
- (void)trackAppLaunchWithOptions:(id)arg1;
- (void)selectivelyCleanPushNotifications:(id)arg1;
- (void)handleAwemePush:(id)arg1 type:(unsigned long long)arg2 userInfo:(id)arg3;
- (unsigned long long)checkSchemeInsertVideo:(id)arg1;
- (unsigned long long)checkPushInsertVideo:(id)arg1 isColdLaunch:(_Bool)arg2;
- (long long)_tabIndexFromUrlString:(id)arg1;
- (_Bool)handleVideoNotification:(id)arg1 withActionIdentifier:(id)arg2 inputText:(id)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)dealWithNotification:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)_application:(id)arg1 sourceApplication:(id)arg2 url:(id)arg3 annotation:(id)arg4;
- (_Bool)isPushForbidden;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleRemoteNotificationForApplication:(id)arg1 userInfo:(id)arg2;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationRootViewDidAppear:(id)arg1;
- (void)applicationRootWindowVisible:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

