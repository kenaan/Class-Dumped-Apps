//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTHomeTestManager, SPTPlayer, SPTRecentlyPlayedList;

@interface SPTHomeHabitsContentOperation : NSObject <SPTPlayerObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    id <SPTRecentlyPlayedList> _recentlyPlayedList;
    id <SPTHomeTestManager> _testManager;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTRecentlyPlayedList> recentlyPlayedList; // @synthesize recentlyPlayedList=_recentlyPlayedList;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isActivePlayerContextURI:(id)arg1;
- (id)styleForEntityURL:(id)arg1;
- (void)configureListenNowItem:(id)arg1 withRecentlyPlayedItem:(id)arg2;
- (void)addRecentlyPlayedItemsToListenNowBuilder:(id)arg1;
- (void)addPlaybackIndicatorToListenNowBuilders:(id)arg1;
- (id)getListenNowBuilderIfPresentInViewModel:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (id)initWithRecentlyPlayedList:(id)arg1 testManager:(id)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

