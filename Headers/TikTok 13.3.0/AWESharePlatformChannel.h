//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareBaseChannel.h"

@interface AWESharePlatformChannel : AWEShareBaseChannel
{
    long long _sharePlatform;
}

+ (_Bool)isAvailableForType:(id)arg1;
+ (id)channelWithType:(id)arg1;
+ (void)initialize;
+ (id)registryEntryForPlatform:(long long)arg1;
+ (void)registerPlatform:(long long)arg1 withMask:(unsigned long long)arg2 title:(id)arg3 imageName:(id)arg4 smallImageName:(id)arg5;
+ (id)platformRegistry;
+ (void)registerMusicallyPlatforms;
+ (void)registerTikTokPlatforms;
+ (void)registerI18NPlatforms;
+ (void)registerDomesticPlatforms;
+ (void)registerCommonPlatforms;
+ (void)__awe__codeRunnerRun_23;
@property(readonly, nonatomic) long long sharePlatform; // @synthesize sharePlatform=_sharePlatform;
- (void)shareDidFinishSuccessfully:(_Bool)arg1 withError:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareImageForStyle:(unsigned long long)arg1;
- (id)shareTitle;
- (long long)shareCategory;
- (id)trackingLabel;
- (id)shareType;
- (id)initWithPlatform:(long long)arg1;

@end

