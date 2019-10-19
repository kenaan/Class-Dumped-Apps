//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPhotosPreviewCollectionViewCellDelegate-Protocol.h"
#import "AWEPhotosPreviewFadeOutTransitionContextProvider-Protocol.h"
#import "AWEZoomTransitionInnerContextProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEPhotosPreviewDonwloadAnimationButton, NSArray, NSMutableArray, NSString, UICollectionView, UILabel;
@protocol AWEPhotosPreviewViewControllerDelegate;

@interface AWEPhotosPreviewViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEZoomTransitionInnerContextProvider, UIGestureRecognizerDelegate, AWEPhotosPreviewCollectionViewCellDelegate, AWEPhotosPreviewFadeOutTransitionContextProvider>
{
    _Bool _disableZoomTransition;
    _Bool _showSaveButton;
    id <AWEPhotosPreviewViewControllerDelegate> _delegate;
    NSArray *_thumbnailURLs;
    NSArray *_imageURLs;
    NSArray *_titles;
    NSArray *_watermarks;
    long long _currentIndex;
    NSMutableArray *_zoomScales;
    NSMutableArray *_contentOffsets;
    UICollectionView *_collectionView;
    UILabel *_pageLabel;
    UILabel *_titleLabel;
    AWEPhotosPreviewDonwloadAnimationButton *_saveButton;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool showSaveButton; // @synthesize showSaveButton=_showSaveButton;
@property(nonatomic) _Bool disableZoomTransition; // @synthesize disableZoomTransition=_disableZoomTransition;
@property(retain, nonatomic) AWEPhotosPreviewDonwloadAnimationButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *contentOffsets; // @synthesize contentOffsets=_contentOffsets;
@property(retain, nonatomic) NSMutableArray *zoomScales; // @synthesize zoomScales=_zoomScales;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *watermarks; // @synthesize watermarks=_watermarks;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(retain, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(nonatomic) __weak id <AWEPhotosPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)tapSaveImageButton;
- (void)photosPreviewCollectionViewCell:(id)arg1 didUpdateScollViewWithZoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)fadeOutTransitionAllowedTriggerDirection;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (void)handleTap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateLabel;
- (void)p_setupLabel;
- (void)p_setupCollectionView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithThumbnailURLs:(id)arg1 imageURLs:(id)arg2 titles:(id)arg3 watermarks:(id)arg4;
- (id)initWithThumbnailURLs:(id)arg1 imageURLs:(id)arg2 titles:(id)arg3;
- (id)initWithThumbnailURLs:(id)arg1 imageURLs:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

