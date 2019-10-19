//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWECollectionViewDelegateWaterfallLayout-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEVisionSearchDataController, AWEVisionSearchResultListHintView, NSMutableArray, NSString, UICollectionView, UIImageView, UIView;

@interface AWEVisionSearchResultListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWECollectionViewDelegateWaterfallLayout, AWEZoomTransitionOuterContextProvider>
{
    _Bool _enableScroll;
    _Bool _hasFetched;
    _Bool _loading;
    AWEVisionSearchDataController *_dataController;
    UICollectionView *_collectionView;
    AWEVisionSearchResultListHintView *_hintView;
    UIView *_loadingView;
    UIImageView *_goToTopImageView;
    long long _entranceIndex;
    NSMutableArray *_goodsModelArray;
    NSMutableArray *_awemeModelArray;
    NSMutableArray *_goodsModelTrackArray;
    NSMutableArray *_awemeModelTrackArray;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSMutableArray *awemeModelTrackArray; // @synthesize awemeModelTrackArray=_awemeModelTrackArray;
@property(copy, nonatomic) NSMutableArray *goodsModelTrackArray; // @synthesize goodsModelTrackArray=_goodsModelTrackArray;
@property(copy, nonatomic) NSMutableArray *awemeModelArray; // @synthesize awemeModelArray=_awemeModelArray;
@property(copy, nonatomic) NSMutableArray *goodsModelArray; // @synthesize goodsModelArray=_goodsModelArray;
@property(nonatomic) long long entranceIndex; // @synthesize entranceIndex=_entranceIndex;
@property(retain, nonatomic) UIImageView *goToTopImageView; // @synthesize goToTopImageView=_goToTopImageView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEVisionSearchResultListHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool hasFetched; // @synthesize hasFetched=_hasFetched;
@property(retain, nonatomic) AWEVisionSearchDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) _Bool enableScroll; // @synthesize enableScroll=_enableScroll;
- (void).cxx_destruct;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumColumnSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)showEmpty;
- (void)showError;
- (void)showResult;
- (void)showLoading;
- (void)goToTop;
- (void)hintAlphaChanged:(id)arg1;
- (void)processDataModelArray:(id)arg1;
- (void)_addGoToTopImageView;
- (void)_addHintView;
- (void)_addLoadingView;
- (void)_addRefreshHeaderAndFooter;
- (void)_addCollectionView;
- (void)loadmore;
- (struct CGPoint)currentContentOffset;
- (void)reloadWithDataModelArray:(id)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

