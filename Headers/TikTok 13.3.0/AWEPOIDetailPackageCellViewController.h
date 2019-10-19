//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEPOIDetailEdgePanCollectionView, AWEPOIDetailResponse, AWEPOIDetailStore, NSArray, NSString, UILabel;

@interface AWEPOIDetailPackageCellViewController : AWEPOIDetailCellViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _firstAppear;
    UILabel *_titleLabel;
    AWEPOIDetailEdgePanCollectionView *_collectionView;
    AWEPOIDetailResponse *_poiDetail;
    NSArray *_dataSource;
    AWEPOIDetailStore *_store;
    struct CGSize _cellSize;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(nonatomic) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AWEPOIDetailResponse *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(retain, nonatomic) AWEPOIDetailEdgePanCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)p_trackShowForItemAtIndexPath:(id)arg1;
- (void)p_updateCellSize;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

