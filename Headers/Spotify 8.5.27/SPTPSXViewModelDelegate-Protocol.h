//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTFollowShelfFactory, SPTPSXViewModel;

@protocol SPTPSXViewModelDelegate <NSObject>
- (void)viewModelDidUpdateArtistRecommendations:(id <SPTPSXViewModel>)arg1 withFactory:(id <SPTFollowShelfFactory>)arg2;
- (void)viewModelDidUpdateOfflineStatus:(id <SPTPSXViewModel>)arg1;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didUpdateFollowStatus:(_Bool)arg2;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 didUpdateFollowerCount:(long long)arg2;
- (void)viewModelDidUpdateMetadata:(id <SPTPSXViewModel>)arg1;
- (void)viewModelDidUpdateData:(id <SPTPSXViewModel>)arg1;
- (void)viewModel:(id <SPTPSXViewModel>)arg1 failedToLoadDataWithError:(NSError *)arg2;
- (void)viewModelDidLoadData:(id <SPTPSXViewModel>)arg1;
@end
