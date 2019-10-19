//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageReleaser-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCChatConversationViewModelV3;
@protocol SCChatMessageActionHandling;

@interface SCChatV3MessageReleaser : NSObject <SCChatMessageReleaser>
{
    SCChatConversationViewModelV3 *_conversationViewModel;
    id <SCChatMessageActionHandling> _actionHandler;
    _Bool _isChatViewVisible;
    _Bool _noViewModelInFirstTimeShow;
    struct NSDictionary *_lastDisplayedKCSN;
    _Bool _didCompletelySwipeIn;
    NSMutableArray *_releaseChatTimers;
    NSString *_username;
    struct NSDictionary *_lastReleasedKCSN;
}

@property(retain, nonatomic) NSDictionary *lastReleasedKCSN; // @synthesize lastReleasedKCSN=_lastReleasedKCSN;
- (void).cxx_destruct;
- (void)_cancelDelayedChatReleases;
- (void)_resetStatesIfNecessaryFromBackground:(_Bool)arg1;
- (void)_releaseChatForConversationId:(id)arg1 upToKnownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)_releaseChatForTimer:(id)arg1;
- (void)_scheduleReleaseMessageTimerForConversationId:(id)arg1 knownChatSequenceNumbers:(struct NSDictionary *)arg2;
- (void)_endCurrentChatSession;
- (void)_unpreserveLoadedMessages;
- (void)_releaseChatsIfNotCaughtUp;
- (_Bool)_userIsCaughtUpWithConversation;
- (void)didViewModelsChangeForConversationId:(id)arg1;
- (void)didConversationViewModelChange:(id)arg1;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)blockMessageReleasing;
- (void)allowMessageReleasing;
- (id)initWithActionHandler:(id)arg1 username:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
