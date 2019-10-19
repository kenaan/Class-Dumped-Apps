//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCCognacScoreShareMessageCardViewDelegate-Protocol.h"

@class NSString, SCChatSDKActionContext, SCCognacScoreShareMessage, SCCognacScoreShareMessageCardViewModel;
@protocol SCCognacImpressionTracking;

@interface SCCognacScoreShareMessageRenderer : NSObject <SCCognacScoreShareMessageCardViewDelegate, SCChatMessageRenderer>
{
    SCCognacScoreShareMessageCardViewModel *_viewModel;
    SCCognacScoreShareMessage *_scoreShareMessage;
    NSString *_conversationId;
    id <SCCognacImpressionTracking> _impressionTracker;
    _Bool _impressionHasBeenTracked;
    _Bool _nonInitialImpressionPass;
    SCChatSDKActionContext *actionContext;
}

@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext;
- (void).cxx_destruct;
- (void)_cancelImpressionTracking;
- (void)_startImpressionTracking;
- (void)didTapOnButtonInCardView:(id)arg1 resetLoadingStateBlock:(CDUnknownBlockType)arg2;
- (void)willDisplayContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)setupContentView:(id)arg1;
- (id)reuseIdentifier;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)didEndDisplayingContentView:(id)arg1;
- (id)createContentView;
- (id)initWithScoreShareMessage:(id)arg1 senderUsername:(id)arg2 conversationId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
