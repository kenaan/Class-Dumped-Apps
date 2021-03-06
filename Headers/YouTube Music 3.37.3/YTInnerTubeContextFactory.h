//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, YTColdConfig, YTHotConfig, YTReachabilityController, YTUserDefaults;
@protocol YTInnerTubeConfig;

@interface YTInnerTubeContextFactory : NSObject
{
    id <YTInnerTubeConfig> _innerTubeConfig;
    YTHotConfig *_hotConfig;
    YTColdConfig *_coldConfig;
    YTReachabilityController *_reachabilityController;
    NSString *_stableDeviceID;
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

+ (id)preferredContentSizeCategory;
+ (double)screenPixelDensity;
+ (struct CGSize)windowSize;
+ (struct CGSize)portraitScreenSize;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)stableDeviceID;
- (id)clientInfoWithSendDeviceIdentifier:(_Bool)arg1;
- (id)contextWithIdentity:(id)arg1 clickTrackingParams:(id)arg2 sendDeviceIdentifier:(_Bool)arg3 clientScreenNonce:(id)arg4 consistencyTokenJars:(id)arg5;
- (id)contextWithIdentity:(id)arg1 clickTrackingParams:(id)arg2 sendDeviceIdentifier:(_Bool)arg3;
- (id)contextWithIdentity:(id)arg1;
- (id)init;

@end

