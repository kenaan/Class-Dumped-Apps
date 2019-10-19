//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESGurdFrontierManager : NSObject
{
}

+ (id)gurdAppVersion;
+ (id)gurdAccessKeys;
+ (id)allChannelsForAccessKey:(id)arg1;
+ (void)enableFrontier;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)load;
- (void)didReceivePushMessage:(id)arg1;
- (void)didReceivePushManagerConnectionStateChanged:(id)arg1;
- (void)didSetEnableGurdKit:(id)arg1;
- (void)didRegisterGurdKitAccessKey:(id)arg1;
- (void)sendACK:(long long)arg1 status:(long long)arg2;
- (void)sendHTTPACK:(long long)arg1 status:(long long)arg2;
- (long long)validatePayload:(id)arg1;
- (void)gurdOnline;
- (void)gurdOnlineIfNeeded;
- (_Bool)sendGurdPushMessage:(id)arg1;

@end

