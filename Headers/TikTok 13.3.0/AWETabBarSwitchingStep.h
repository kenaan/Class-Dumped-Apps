//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEWorkflowStep.h"

#import "AWEUserMessage-Protocol.h"

@class NSString;

@interface AWETabBarSwitchingStep : AWEWorkflowStep <AWEUserMessage>
{
    unsigned long long _tabType;
}

@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (void)switchToTargetTab;
- (void)onStep:(id)arg1;
- (id)initWithTabType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

