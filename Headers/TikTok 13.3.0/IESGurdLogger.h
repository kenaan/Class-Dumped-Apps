//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IESGurdLogger : NSObject
{
    NSMutableArray *_paramsArray;
}

+ (void)sendStatusMessageWithPackageParams:(id)arg1 remainTimes:(long long)arg2;
+ (id)gurdCommonParams;
+ (void)sendStatuMessagesIfNeeded;
+ (void)recordStatusWithType:(long long)arg1 status:(long long)arg2 accessKey:(id)arg3 channel:(id)arg4 packageID:(unsigned long long)arg5 patchID:(unsigned long long)arg6 extra:(id)arg7;
+ (id)sharedLogger;
@property(retain, nonatomic) NSMutableArray *paramsArray; // @synthesize paramsArray=_paramsArray;
- (void).cxx_destruct;
- (void)innerSendStatuMessagesIfNeeded;
- (void)setupNotification;
- (void)dealloc;

@end

