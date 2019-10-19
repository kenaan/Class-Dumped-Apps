//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveEnvironment-Protocol.h"

@class NSString;
@protocol IESLiveAppInfo, IESLiveLearningService;

@interface IESLiveEnvironmentIMP : NSObject <IESLiveEnvironment>
{
    id <IESLiveAppInfo> _appInfo;
    id <IESLiveLearningService> _learningService;
}

@property(retain, nonatomic) id <IESLiveLearningService> learningService; // @synthesize learningService=_learningService;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (_Bool)isI18NApp;
- (_Bool)isHelo;
- (_Bool)isXiguaToutiao;
- (_Bool)isToutiaoLite;
- (_Bool)isToutiaoLearning;
- (_Bool)isToutiao;
- (_Bool)isXigua;
- (_Bool)isPPX;
- (_Bool)isMT;
- (_Bool)isDMT;
- (_Bool)isMusically;
- (_Bool)isTiktok;
- (_Bool)isDouyin;
- (_Bool)isHotsoonVigo;
- (_Bool)isVigo;
- (_Bool)isHotsoon;
- (id)currentTargetName;
- (unsigned long long)currentTarget;
- (id)liveStreamProjectKeyForRoomScene:(long long)arg1;
- (id)liveSDKVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

