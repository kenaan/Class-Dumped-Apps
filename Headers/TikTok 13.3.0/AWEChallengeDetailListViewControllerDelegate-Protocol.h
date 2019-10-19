//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEListDataController, NSArray, NSDictionary, NSString;
@protocol AWEChallengeDetailViewScrollDelegate, AWEChallengeListDataControllerDelegate;

@protocol AWEChallengeDetailListViewControllerDelegate <NSObject>
@property(copy, nonatomic) NSString *searchType;
@property(copy, nonatomic) NSDictionary *searchLogPassback;
@property(copy, nonatomic) NSString *enterFromPageString;
@property(readonly, nonatomic) AWEListDataController<AWEChallengeListDataControllerDelegate> *dataController;
@property(nonatomic) __weak id <AWEChallengeDetailViewScrollDelegate> scrollDelegate;
- (void)updateSortMenu:(_Bool)arg1;
- (id)initWithChallengeID:(NSString *)arg1 hashtagName:(NSString *)arg2 authorID:(NSString *)arg3 showSortMenu:(_Bool)arg4 isCommerce:(_Bool)arg5;
- (id)init;

@optional
@property(copy, nonatomic) NSArray *videoListToInsertFront;
@end

