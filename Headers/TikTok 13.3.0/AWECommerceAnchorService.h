//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWECommerceAnchorService-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class NSArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol AWEHttpTask;

@interface AWECommerceAnchorService : HTSService <AWECommerceAnchorService, AWEUserMessage>
{
    NSArray *_anchorList;
    NSMutableDictionary *_disabledAndGreyForType;
    id <AWEHttpTask> _httpTask;
    NSRecursiveLock *_recursiveLock;
}

@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(retain, nonatomic) id <AWEHttpTask> httpTask; // @synthesize httpTask=_httpTask;
@property(retain, nonatomic) NSMutableDictionary *disabledAndGreyForType; // @synthesize disabledAndGreyForType=_disabledAndGreyForType;
@property(copy, nonatomic) NSArray *anchorList; // @synthesize anchorList=_anchorList;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)didLoginFailed;
- (void)didCancelLogin;
- (void)didFinishLogin;
- (void)didClickAnchorWithType:(long long)arg1;
- (void)showAnchorContentPageWithController:(id)arg1 source:(id)arg2;
- (void)showAnchorPanelWithSource:(id)arg1;
- (id)anchorWithType:(long long)arg1;
- (_Bool)shouldShowAnchor;
- (_Bool)disabledAndGreyForType:(long long)arg1;
- (void)setDisabledAndGrey:(_Bool)arg1 forType:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *publishAnchorArray;
- (void)fetchAnchorListIfNeeded;
- (void)fetchAnchorListAfterLaunch;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

