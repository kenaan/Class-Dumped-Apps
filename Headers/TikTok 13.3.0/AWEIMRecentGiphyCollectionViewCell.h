//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEIMEmoticonCollectionView, AWEIMEmoticonThemeModel, AWEIMRecentGiphyEmptyView, NSString;
@protocol AWEIMRecentGiphyCollectionViewCellDelegate;

@interface AWEIMRecentGiphyCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <AWEIMRecentGiphyCollectionViewCellDelegate> _delegate;
    AWEIMEmoticonCollectionView *_collectionView;
    AWEIMEmoticonThemeModel *_themeModel;
    AWEIMRecentGiphyEmptyView *_emptyView;
}

+ (id)identifier;
@property(retain, nonatomic) AWEIMRecentGiphyEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) AWEIMEmoticonThemeModel *themeModel; // @synthesize themeModel=_themeModel;
@property(retain, nonatomic) AWEIMEmoticonCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <AWEIMRecentGiphyCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addEmptyView;
- (void)removeEmptyView;
- (void)configWithThemeModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

