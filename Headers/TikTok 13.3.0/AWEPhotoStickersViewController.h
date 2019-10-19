//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWELoadingIndicator, AWEPhotoEditorModel, CAGradientLayer, NSArray, NSString, UIButton, UICollectionView, UILabel, UIView;
@protocol AWEPhotoStickersViewControllerDelegate;

@interface AWEPhotoStickersViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <AWEPhotoStickersViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_contentContainerView;
    NSArray *_stickers;
    AWEPhotoEditorModel *_pictureEditorModel;
    UIView *_headerView;
    CAGradientLayer *_coverLayer;
    UILabel *_loadingStickersLabel;
    UILabel *_failToLoadLabel;
    UIButton *_reloadButton;
    AWELoadingIndicator *_loadingIndicator;
}

@property(retain, nonatomic) AWELoadingIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *failToLoadLabel; // @synthesize failToLoadLabel=_failToLoadLabel;
@property(retain, nonatomic) UILabel *loadingStickersLabel; // @synthesize loadingStickersLabel=_loadingStickersLabel;
@property(retain, nonatomic) CAGradientLayer *coverLayer; // @synthesize coverLayer=_coverLayer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel; // @synthesize pictureEditorModel=_pictureEditorModel;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <AWEPhotoStickersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_restoreInitialState;
- (void)handleSwipe:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)removeFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showOnViewController:(id)arg1 containerView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_hideLoadingStickersTint;
- (void)p_hideFailToLoadTint;
- (void)p_showLoadStickersFailedTint;
- (void)p_showLoadingStickersTint;
- (void)p_fetchData;
- (void)p_setupCoverLayer;
- (void)p_setupHeaderView;
- (void)p_setupContentContainerView;
- (void)viewDidLoad;
- (id)initWithPhotoEditorModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

