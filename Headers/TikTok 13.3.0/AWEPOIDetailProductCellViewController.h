//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEPOIHotelScrollTailView, AWEPOIProductInfoModel, NSString, UIButton, UICollectionView, UILabel;

@interface AWEPOIDetailProductCellViewController : AWEPOIDetailCellViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isTransfering;
    UILabel *_titleLbl;
    UIButton *_moreBtn;
    UICollectionView *_cardPanel;
    AWEPOIProductInfoModel *_productInfo;
    NSString *_poiID;
    AWEPOIHotelScrollTailView *_horizonScrollTailView;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(nonatomic) _Bool isTransfering; // @synthesize isTransfering=_isTransfering;
@property(retain, nonatomic) AWEPOIHotelScrollTailView *horizonScrollTailView; // @synthesize horizonScrollTailView=_horizonScrollTailView;
@property(retain, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) AWEPOIProductInfoModel *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) UICollectionView *cardPanel; // @synthesize cardPanel=_cardPanel;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (id)replaceEnterFromAndEnterMethodWithUrl:(id)arg1 enterMethod:(id)arg2;
- (void)openUrl:(id)arg1;
- (void)creatSubviewsIfNeed;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)p_cellSize;
- (void)updateWithModel:(id)arg1;
- (id)cellIdentifier;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

