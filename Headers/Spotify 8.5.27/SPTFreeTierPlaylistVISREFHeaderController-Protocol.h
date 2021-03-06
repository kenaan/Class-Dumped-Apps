//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UIImage, UIView;
@protocol SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistVISREFHeaderControllerDelegate, VISREFHeaderViewAnimationProgress;

@protocol SPTFreeTierPlaylistVISREFHeaderController <NSObject>
@property(nonatomic) __weak id <SPTFreeTierPlaylistVISREFHeaderControllerDelegate> delegate;
- (void)setSearchView:(UIView *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setFollowButton:(UIButton *)arg1;
- (void)setContextMenuButton:(UIButton *)arg1;
- (void)setCustomBackButton:(UIView<VISREFHeaderViewAnimationProgress> *)arg1;
- (void)update;
- (void)configureWithPlayViewModel:(id <SPTFreeTierPlaylistPlayViewModel>)arg1 followViewModel:(id <SPTFreeTierPlaylistFollowViewModel>)arg2 defaultHeaderViewModel:(id <SPTFreeTierPlaylistDefaultHeaderViewModel>)arg3 fullbleedHeaderViewModel:(id <SPTFreeTierPlaylistFullbleedHeaderViewModel>)arg4 filterSortBarView:(UIView *)arg5;
@end

