//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWENewVersionAlertUtils : NSObject
{
}

+ (_Bool)isChannelTestFlightOrAppStore;
+ (_Bool)isChannelPP;
+ (_Bool)isChannelAppStore;
+ (_Bool)isChannelTest;
+ (_Bool)isChannelTestFlight;
+ (_Bool)isChannelTFOnline;
+ (_Bool)isChannelTF;
+ (_Bool)appShouldRemindNewVersion;
+ (void)doNotRemindNewVersionUntilUpgrade;
+ (void)recordRequestNewVersionTimestamp;
+ (double)appRequestNewVerisonTimeStamp;
+ (_Bool)isFirstLaunchAfterUpdating;
+ (void)recordDidFinishLaunch;
+ (id)mainStorage;

@end

