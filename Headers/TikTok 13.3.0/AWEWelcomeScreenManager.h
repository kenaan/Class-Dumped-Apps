//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEWelcomeScreenManager : NSObject
{
}

+ (void)handleAppWillResignActiveNotification;
+ (void)dismissWelcomeScreenWindowWithMethod:(_Bool)arg1;
+ (void)showWelcomeScreenWindow;
+ (_Bool)isStartUpFirstTime;
+ (_Bool)canShow;
+ (void)markFakeResponseSent;
+ (_Bool)isShowing;

@end

