//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEIMChatModel, AWEIMStrangerChatListDataController, NSString;
@protocol AWEIMBaseDataStrangeControllerDelegate;

@interface AWEIMBaseDataStrangeController : NSObject <AWEUserMessage>
{
    _Bool _shouldFetchRemoteWhenEnterMessageTab;
    _Bool _fetchingRemote;
    id <AWEIMBaseDataStrangeControllerDelegate> _delegate;
    AWEIMChatModel *_model;
    NSString *_filepath;
    AWEIMStrangerChatListDataController *_dataController;
}

@property(nonatomic) _Bool fetchingRemote; // @synthesize fetchingRemote=_fetchingRemote;
@property(retain, nonatomic) AWEIMStrangerChatListDataController *dataController; // @synthesize dataController=_dataController;
@property(copy, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(nonatomic) _Bool shouldFetchRemoteWhenEnterMessageTab; // @synthesize shouldFetchRemoteWhenEnterMessageTab=_shouldFetchRemoteWhenEnterMessageTab;
@property(retain, nonatomic) AWEIMChatModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <AWEIMBaseDataStrangeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)tabbarControllerDidChangeIndex:(id)arg1;
- (void)handleUpdateStrangerChatNoti:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_removeKVO;
- (void)p_addKVO;
- (void)p_configWithStrangerMsg:(id)arg1 unreadCount:(long long)arg2;
- (void)p_updateWithLatestChat:(id)arg1;
- (void)p_fetchRemoteStrangerChat;
- (void)p_removeCache;
- (void)p_updateCache:(id)arg1;
- (void)p_loadStrangerFromCache;
- (void)removeAllStrangerChat:(_Bool)arg1;
- (void)fetchRemoteStrangerChat;
- (id)localStrangeChat;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

