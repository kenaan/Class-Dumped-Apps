//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFUIVideoDisplayPageCellProtocol-Protocol.h"

@class BottomAlignLabel, NSString, NSTimer;
@protocol NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol;

@interface UICollectionViewCell (NFLX) <NFUIVideoDisplayPageCellProtocol>
+ (long long)nflx_zIndexForIndexPath:(id)arg1;
- (void)displayTitleTextWithImage:(id)arg1 imageView:(id)arg2;
- (void)displayTitleText:(id)arg1;
- (void)addTextToCell:(id)arg1 imageView:(id)arg2;
@property(retain, nonatomic) BottomAlignLabel *titleLabel;
@property(retain, nonatomic) NSTimer *titleTimer;
- (void)willDisplayCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NFUIDisplayPageProtocol><NFUIDisplayPageViewModelDelegateProtocol><NFUIDisplayPageCollectionViewProtocol> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

