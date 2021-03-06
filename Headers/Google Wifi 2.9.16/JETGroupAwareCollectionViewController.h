//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "JETGroupAwareViewDelegate-Protocol.h"

@class JETAccessPointGroup, JETOfflineViewHelper;
@protocol JETUserStateProtocol;

@interface JETGroupAwareCollectionViewController : QTMCollectionViewController <JETGroupAwareViewDelegate>
{
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    JETOfflineViewHelper *_offlineViewHelper;
}

@property(readonly, nonatomic) JETOfflineViewHelper *offlineViewHelper; // @synthesize offlineViewHelper=_offlineViewHelper;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(nonatomic) __weak id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (void)groupListUpdated:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)shouldShowOfflineTopBar;
- (void)offlineStatusDidChange;
- (_Bool)shouldSignalOfflineStatusChangeForGroupID:(id)arg1;
@property(readonly, nonatomic) _Bool online;
- (id)groupStateCache;
- (void)accessPointsGroupIsGone;
- (void)accessPointsGroupIsUpdated;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

@end

