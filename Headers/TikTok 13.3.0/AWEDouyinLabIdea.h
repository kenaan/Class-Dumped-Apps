//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEDouyinLabIdea-Protocol.h"

@class NSString;

@interface AWEDouyinLabIdea : NSObject <AWEDouyinLabIdea>
{
    NSString *_ideaId;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *ideaId; // @synthesize ideaId=_ideaId;
- (void).cxx_destruct;
- (void)markIdeaUsed;
- (_Bool)isSwitchOn;
- (_Bool)shouldFeedbackAlertPopWithOpenTime:(double)arg1 usageCount:(long long)arg2;
- (void)onSwitchStatusChange:(_Bool)arg1;
- (id)initWithIdeaId:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

