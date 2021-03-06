//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaToggleView.h"

#import "SCOperaLayerView-Protocol.h"
#import "SCUpNextCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCGradientView, SCUpNextCollectionViewLayout, SCUpNextHighlightBarView, UICollectionView;
@protocol SCImageDownloading, SCOperaUpNextLayerViewDelegate;

@interface SCOperaUpNextLayerView : SCOperaToggleView <SCUpNextCollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SCOperaLayerView>
{
    SCUpNextCollectionViewLayout *_upNextCollectionViewLayout;
    UICollectionView *_upNextCollectionView;
    SCUpNextHighlightBarView *_upNextHighlightBarView;
    SCGradientView *_backgroundGradientView;
    NSArray *_visibleUpNextGroupViewModels;
    NSDictionary *_groupViewModelIdentifierToIndex;
    NSDictionary *_groupViewModelIdentifierToVisibleIndex;
    NSMutableDictionary *_collectionViewCellSizes;
    NSArray *_previousOrderedVisibleItemIds;
    _Bool _hasLoadedFirstTime;
    NSString *_currentAttributionText;
    NSString *_currentUsername;
    id <SCOperaUpNextLayerViewDelegate> _delegate;
    NSArray *_upNextGroupViewModels;
    id <SCImageDownloading> _imageDownloader;
    long long _currentIndex;
    long long _activeState;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *currentAttributionText; // @synthesize currentAttributionText=_currentAttributionText;
@property(nonatomic) long long activeState; // @synthesize activeState=_activeState;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) NSArray *upNextGroupViewModels; // @synthesize upNextGroupViewModels=_upNextGroupViewModels;
@property(nonatomic) __weak id <SCOperaUpNextLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCollectionViewAttributionTextIfNeeded;
- (void)updateAttributionText:(id)arg1 forDisplayName:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)updateAttributionText:(id)arg1 forDisplayName:(id)arg2;
- (void)updateYOffset:(double)arg1;
- (_Bool)_hasLoadedInitialCells;
- (void)upNextCollectionViewCell:(id)arg1 wantsDesiredSize:(struct CGSize)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_logItemsUpdated;
- (void)_logAwake:(long long)arg1;
- (void)_logNavigate:(id)arg1 action:(long long)arg2;
- (id)_orderedVisibleItemIds;
- (id)_firstVisibleIndexPath;
- (id)_orderedVisibleIndexPaths;
- (void)_setupViews;
- (id)_cellAtVisibleIndex:(long long)arg1;
- (struct CGSize)_sizeForCellAtVisibleIndex:(long long)arg1;
- (double)_horizontalContentOffsetForVisibleIndex:(long long)arg1;
- (long long)_indexForVisibleIndex:(long long)arg1;
- (long long)_visibleIndexForIndex:(long long)arg1;
- (void)_updateViewsForHorizontalContentOffset:(double)arg1;
- (void)_updateCollectionViewActiveState:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateCollectionViewFocusStateAnimated:(_Bool)arg1;
- (void)_scrollIfNecessaryAnimated:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_updateVisibilityIfNecessaryAnimated:(_Bool)arg1;
- (void)_updateVisibleGroupViewModels:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)updateViewWithRelativeHorizontalContentOffset:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setCurrentIndex:(long long)arg1 scroll:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setCurrentIndex:(long long)arg1 scroll:(_Bool)arg2;
- (void)setActiveState:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

