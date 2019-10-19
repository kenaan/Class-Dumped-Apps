//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWESearchMiddleViewController, AWESearchResultViewController, AWESearchTabConfig, NSString;
@protocol AWESearchChildViewControllerResultFilterProtocol;

@protocol AWESearchChildViewControllerProtocol <NSObject>

@optional
@property(nonatomic) __weak id <AWESearchChildViewControllerResultFilterProtocol> delegate;
@property(retain, nonatomic) AWESearchTabConfig *tabConfig;
@property(retain, nonatomic) AWESearchMiddleViewController *searchMiddleViewController;
@property(nonatomic) __weak AWESearchResultViewController *searchResultViewController;
- (void)setTransitionType:(long long)arg1;
- (void)setHotRank:(NSString *)arg1;
- (void)saveSearchWord:(NSString *)arg1;
- (void)becomeActive;
- (void)reset;
- (void)fetchDataWithKeyWord:(NSString *)arg1 enterFrom:(NSString *)arg2 isSearchByUserClick:(_Bool)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
@end

