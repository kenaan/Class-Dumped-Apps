//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface AWEDouyinLabCenter : NSObject <AWEUserMessage>
{
    _Bool _showProfileYellowDot;
    _Bool _hasNewIdeaRegisted;
    NSDictionary *_ideaMap;
}

+ (void)safeExcuteIdea:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(nonatomic) _Bool hasNewIdeaRegisted; // @synthesize hasNewIdeaRegisted=_hasNewIdeaRegisted;
@property(retain, nonatomic) NSDictionary *ideaMap; // @synthesize ideaMap=_ideaMap;
@property(nonatomic) _Bool showProfileYellowDot; // @synthesize showProfileYellowDot=_showProfileYellowDot;
- (void).cxx_destruct;
- (void)didFinishLogin;
- (_Bool)isLabAble;
- (_Bool)isInternalLabAble;
- (void)clearSettingSliderYellowDot;
- (_Bool)shoudShowNewIdeaYellowDot;
- (id)ideaStorageKey:(struct NSString *)arg1;
@property(readonly, nonatomic) NSArray *ideas;
- (id)supportedInternalIdeas;
@property(readonly, nonatomic) NSArray *supportedIdeas;
- (void)showIdeaFeedback:(id)arg1;
- (_Bool)isIdeaSwitchOnFromLocalStatus:(id)arg1;
- (void)popFeedbackAlertOnProfileViewIfNeeded;
- (void)changeIdea:(id)arg1 switchStatus:(_Bool)arg2;
- (_Bool)isIdeaSupportByID:(id)arg1;
- (_Bool)isIdeaSupported:(id)arg1;
- (_Bool)isIdeaSwitchOn:(id)arg1;
- (_Bool)isIdeaSwitchOnById:(id)arg1;
- (void)trackIdeaUsedWithIdeaId:(struct NSString *)arg1;
- (void)markIdeaUsed:(struct NSString *)arg1;
- (void)onIdeaRegisted:(id)arg1;
- (id)getIdeaWithId:(struct NSString *)arg1;
- (void)registerIdea:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

