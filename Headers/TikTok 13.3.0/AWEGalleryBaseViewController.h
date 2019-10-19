//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGalleryBaseViewController-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEAIVideoClipBubbleManager, AWEAlbumModel, AWEGalleryBlankView, AWEGalleryVideoBottomChoosedCollectionViewCell, AWEUITextLoadingView, NSArray, NSMutableArray, NSString, PHFetchResult, UIButton, UICollectionView, UIView;
@protocol AWEGalleryBaseViewControllerDelegate;

@interface AWEGalleryBaseViewController : UIViewController <AWEZoomTransitionOuterContextProvider, PHPhotoLibraryChangeObserver, UICollectionViewDelegate, UICollectionViewDataSource, AWEGalleryBaseViewController>
{
    _Bool _scrollToBottom;
    _Bool _reverseAsset;
    _Bool _isMV;
    _Bool _isAIVideoClip;
    _Bool _needBottomView;
    _Bool _canMutilSelected;
    _Bool _useForAmericaRecordOptim;
    _Bool _hasCheckedAndReload;
    _Bool _greyMode;
    _Bool _hasRegisterPhotoChangeObserver;
    unsigned long long _galleryUploadResourceType;
    CDUnknownBlockType _selectOnePhotoBlock;
    long long _colCount;
    AWEAlbumModel *_albumModel;
    double _minVideoDuration;
    unsigned long long _maxPictureSelectionCount;
    unsigned long long _initialSelectedPictureCount;
    unsigned long long _minPictureSelectionCount;
    id <AWEGalleryBaseViewControllerDelegate> _delegate;
    NSArray *_allAssetModels;
    UICollectionView *_collectionView;
    AWEGalleryBlankView *_blankContentView;
    NSArray *_dataSource;
    PHFetchResult *_fetchResult;
    NSMutableArray *_selectedAssetModelArray;
    CDUnknownBlockType _selectedPhotoCompletion;
    CDUnknownBlockType _selectedVideoCompletionWithAssetModel;
    CDUnknownBlockType _selectVideoCompletionWithHTSVideoData;
    UIView *_bottomChoosedView;
    UIButton *_bottomAllowMultSelectButton;
    UIView *_maskView;
    double _choosedTotalDuration;
    AWEGalleryVideoBottomChoosedCollectionViewCell *_movingCell;
    AWEUITextLoadingView *_loadingView;
    AWEAIVideoClipBubbleManager *_AIVideoClipBubbleManager;
    struct CGSize _aspectRatio;
    struct CGPoint _currentOffset;
}

+ (id)getVCWithAlbumModel:(id)arg1 resourceType:(unsigned long long)arg2 selectedVideoCompletionWithAssetModel:(CDUnknownBlockType)arg3 selectedVideoCompletionWithHTSVideoData:(CDUnknownBlockType)arg4 selectedPhotoCompletion:(CDUnknownBlockType)arg5;
+ (id)getVCWithResourceType:(unsigned long long)arg1 selectedVideoCompletionWithAssetModel:(CDUnknownBlockType)arg2 selectedVideoCompletionWithHTSVideoData:(CDUnknownBlockType)arg3 selectedPhotoCompletion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) AWEAIVideoClipBubbleManager *AIVideoClipBubbleManager; // @synthesize AIVideoClipBubbleManager=_AIVideoClipBubbleManager;
@property(retain, nonatomic) AWEUITextLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool hasRegisterPhotoChangeObserver; // @synthesize hasRegisterPhotoChangeObserver=_hasRegisterPhotoChangeObserver;
@property(retain, nonatomic) AWEGalleryVideoBottomChoosedCollectionViewCell *movingCell; // @synthesize movingCell=_movingCell;
@property(nonatomic) double choosedTotalDuration; // @synthesize choosedTotalDuration=_choosedTotalDuration;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *bottomAllowMultSelectButton; // @synthesize bottomAllowMultSelectButton=_bottomAllowMultSelectButton;
@property(retain, nonatomic) UIView *bottomChoosedView; // @synthesize bottomChoosedView=_bottomChoosedView;
@property(copy, nonatomic) CDUnknownBlockType selectVideoCompletionWithHTSVideoData; // @synthesize selectVideoCompletionWithHTSVideoData=_selectVideoCompletionWithHTSVideoData;
@property(copy, nonatomic) CDUnknownBlockType selectedVideoCompletionWithAssetModel; // @synthesize selectedVideoCompletionWithAssetModel=_selectedVideoCompletionWithAssetModel;
@property(copy, nonatomic) CDUnknownBlockType selectedPhotoCompletion; // @synthesize selectedPhotoCompletion=_selectedPhotoCompletion;
@property(retain, nonatomic) NSMutableArray *selectedAssetModelArray; // @synthesize selectedAssetModelArray=_selectedAssetModelArray;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AWEGalleryBlankView *blankContentView; // @synthesize blankContentView=_blankContentView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *allAssetModels; // @synthesize allAssetModels=_allAssetModels;
@property(nonatomic) _Bool greyMode; // @synthesize greyMode=_greyMode;
@property(nonatomic) _Bool hasCheckedAndReload; // @synthesize hasCheckedAndReload=_hasCheckedAndReload;
@property(nonatomic) __weak id <AWEGalleryBaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long minPictureSelectionCount; // @synthesize minPictureSelectionCount=_minPictureSelectionCount;
@property(nonatomic) unsigned long long initialSelectedPictureCount; // @synthesize initialSelectedPictureCount=_initialSelectedPictureCount;
@property(nonatomic) unsigned long long maxPictureSelectionCount; // @synthesize maxPictureSelectionCount=_maxPictureSelectionCount;
@property(nonatomic) double minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(retain, nonatomic) AWEAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
@property(nonatomic) _Bool useForAmericaRecordOptim; // @synthesize useForAmericaRecordOptim=_useForAmericaRecordOptim;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) long long colCount; // @synthesize colCount=_colCount;
@property(nonatomic) _Bool canMutilSelected; // @synthesize canMutilSelected=_canMutilSelected;
@property(nonatomic) _Bool needBottomView; // @synthesize needBottomView=_needBottomView;
@property(copy, nonatomic) CDUnknownBlockType selectOnePhotoBlock; // @synthesize selectOnePhotoBlock=_selectOnePhotoBlock;
@property(nonatomic) _Bool isAIVideoClip; // @synthesize isAIVideoClip=_isAIVideoClip;
@property(nonatomic) _Bool isMV; // @synthesize isMV=_isMV;
@property(nonatomic) _Bool reverseAsset; // @synthesize reverseAsset=_reverseAsset;
@property(nonatomic) _Bool scrollToBottom; // @synthesize scrollToBottom=_scrollToBottom;
@property(nonatomic) unsigned long long galleryUploadResourceType; // @synthesize galleryUploadResourceType=_galleryUploadResourceType;
- (void).cxx_destruct;
- (unsigned long long)maxSelectionCount;
@property(nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
- (void)photoLibraryDidChange:(id)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (void)clickAllowMultSelectButton;
- (void)showToastIfNecessary:(id)arg1;
- (void)reloadVisibleCellExcept:(id)arg1;
- (_Bool)validPHAsset:(id)arg1;
- (_Bool)validPixel:(id)arg1;
- (_Bool)validAssetModelForVideo:(id)arg1;
- (_Bool)validAssetModelForPhoto:(id)arg1;
- (void)updateProgressWithModel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)clickToSetup;
- (_Bool)prefersStatusBarHidden;
- (void)checkAuthorizationAndReloadWithScrollToBottom:(_Bool)arg1;
- (void)showAIVideoClipNewFeatureBubble;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)p_reloadWithAssetModel:(id)arg1 fetchResult:(id)arg2 scrollToBottom:(_Bool)arg3;
- (void)reloadDataWithScrollToBottom:(_Bool)arg1;
- (void)reloadWithAlbumModel:(id)arg1;
- (void)showBlankViewIfNeededWithPermission:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAlbumModel:(id)arg1 resourceType:(unsigned long long)arg2 selectedVideoCompletionWithAssetModel:(CDUnknownBlockType)arg3 selectedVideoCompletionWithHTSVideoData:(CDUnknownBlockType)arg4 selectedPhotoCompletion:(CDUnknownBlockType)arg5;
- (id)initWithResourceType:(unsigned long long)arg1 selectedVideoCompletionWithAssetModel:(CDUnknownBlockType)arg2 selectedVideoCompletionWithHTSVideoData:(CDUnknownBlockType)arg3 selectedPhotoCompletion:(CDUnknownBlockType)arg4;
- (void)p_showExceedMaxDurationForAIVideoClipToast;
- (_Bool)p_isDurationExceedMaxDurationForAIVideoClip:(double)arg1;
- (id)p_timeStringWithDuration:(double)arg1;
- (id)p_totalDurationStringWithSecond:(double)arg1;
- (void)gallerySelectedCellWithIndex:(long long)arg1;
- (void)galleryDeselectedCellWithIndex:(long long)arg1 toBeDeleteDuration:(double)arg2;
- (void)addBottomView;
- (_Bool)galleryGreyMode;
- (void)galleryDidSelectRightTopWithCell:(id)arg1 isSelected:(_Bool)arg2;
- (void)selectAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)singleModeSelectVideoWithAssetMode:(id)arg1;
- (void)galleryDidSelectItemAtIndexPath:(id)arg1 collectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

