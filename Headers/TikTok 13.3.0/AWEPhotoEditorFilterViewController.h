//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMediaSmallAnimationProtocol-Protocol.h"
#import "AWERecordFilterSwitchProtocol-Protocol.h"
#import "AWESliderDelegate-Protocol.h"
#import "AWETabControlledCollectionWrapperViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWECameraFilterConfiguration, AWEPhotoEditorModel, AWERecordFilterCollectionView, AWERecordFilterSwitchManager, AWESlider, AWETabControlledCollectionWrapperView, IESEffectModel, IESImageProcess, NSDictionary, NSString, UIImageView, UILabel, UIView;

@interface AWEPhotoEditorFilterViewController : UIViewController <AWEMediaSmallAnimationProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWESliderDelegate, AWERecordFilterSwitchProtocol, AWETabControlledCollectionWrapperViewDelegate>
{
    _Bool enableFilterSwitch;
    _Bool _hasShowIntensityChooseView;
    _Bool _hasSelectedFilterIntensity;
    _Bool _willShowFilterName;
    _Bool _hasSetForSwitchFilter;
    _Bool _hasShown;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _willDismissBlock;
    UIView *_mediaContainerView;
    UIImageView *_stickerImageView;
    UIImageView *_originImageView;
    UIImageView *_stickerImageViewForOrigin;
    UIView *_bottomView;
    UIView *_intensityChooseView;
    UIView *_bottomToolContainerView;
    UIView *_intensityChooseViewToolView;
    UIImageView *_compareView;
    UIView *_separateLineView;
    AWECameraFilterConfiguration *_filterConfiguration;
    AWERecordFilterCollectionView *_filterCollectionView;
    AWETabControlledCollectionWrapperView *_tabFilterCollectionView;
    IESEffectModel *_incomingEffect;
    IESEffectModel *_currentSelectedFilter;
    double _currentSelectedFilterIntensity;
    AWEPhotoEditorModel *_pictureEditorModel;
    AWESlider *_pictureEditorSliderView;
    IESImageProcess *_imageProcess;
    AWERecordFilterSwitchManager *_filterSwitchManager;
    UILabel *_filterNameLabel;
    NSDictionary *_logDictionary;
}

@property(copy, nonatomic) NSDictionary *logDictionary; // @synthesize logDictionary=_logDictionary;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
@property(nonatomic) _Bool hasSetForSwitchFilter; // @synthesize hasSetForSwitchFilter=_hasSetForSwitchFilter;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) AWERecordFilterSwitchManager *filterSwitchManager; // @synthesize filterSwitchManager=_filterSwitchManager;
@property(retain, nonatomic) IESImageProcess *imageProcess; // @synthesize imageProcess=_imageProcess;
@property(retain, nonatomic) AWESlider *pictureEditorSliderView; // @synthesize pictureEditorSliderView=_pictureEditorSliderView;
@property(retain, nonatomic) AWEPhotoEditorModel *pictureEditorModel; // @synthesize pictureEditorModel=_pictureEditorModel;
@property(nonatomic) _Bool willShowFilterName; // @synthesize willShowFilterName=_willShowFilterName;
@property(nonatomic) _Bool hasSelectedFilterIntensity; // @synthesize hasSelectedFilterIntensity=_hasSelectedFilterIntensity;
@property(nonatomic) double currentSelectedFilterIntensity; // @synthesize currentSelectedFilterIntensity=_currentSelectedFilterIntensity;
@property(retain, nonatomic) IESEffectModel *currentSelectedFilter; // @synthesize currentSelectedFilter=_currentSelectedFilter;
@property(retain, nonatomic) IESEffectModel *incomingEffect; // @synthesize incomingEffect=_incomingEffect;
@property(retain, nonatomic) AWETabControlledCollectionWrapperView *tabFilterCollectionView; // @synthesize tabFilterCollectionView=_tabFilterCollectionView;
@property(retain, nonatomic) AWERecordFilterCollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) AWECameraFilterConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIImageView *compareView; // @synthesize compareView=_compareView;
@property(retain, nonatomic) UIView *intensityChooseViewToolView; // @synthesize intensityChooseViewToolView=_intensityChooseViewToolView;
@property(retain, nonatomic) UIView *bottomToolContainerView; // @synthesize bottomToolContainerView=_bottomToolContainerView;
@property(nonatomic) _Bool hasShowIntensityChooseView; // @synthesize hasShowIntensityChooseView=_hasShowIntensityChooseView;
@property(retain, nonatomic) UIView *intensityChooseView; // @synthesize intensityChooseView=_intensityChooseView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *stickerImageViewForOrigin; // @synthesize stickerImageViewForOrigin=_stickerImageViewForOrigin;
@property(retain, nonatomic) UIImageView *originImageView; // @synthesize originImageView=_originImageView;
@property(retain, nonatomic) UIImageView *stickerImageView; // @synthesize stickerImageView=_stickerImageView;
@property(retain, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(nonatomic) _Bool enableFilterSwitch; // @synthesize enableFilterSwitch;
- (void).cxx_destruct;
- (void)slider:(id)arg1 valueDidChanged:(float)arg2;
- (void)applyFilter:(id)arg1 intensity:(double)arg2;
- (void)dismissIntensityChooseView;
- (void)showIntensityChooseView;
- (void)didLeaveCompareButton;
- (void)didTouchCompareButton;
- (void)compareGesture:(id)arg1;
- (void)didClickedIntensityCancelButton;
- (void)didClickedIntensitySaveButton;
- (void)didClickedSaveButton;
- (void)didClickedCancelButton;
- (double)mediaSmallBottomViewHeight;
- (id)mediaSmallBottomView;
- (struct CGRect)mediaSmallMediaContainerFrame;
- (id)mediaSmallMediaContainer;
- (void)filterBoxButtonClicked;
- (void)clearFilterApply;
- (void)tabClickedWithName:(id)arg1;
- (_Bool)shouldSelectFilter:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onEffectUpdated:(id)arg1;
- (void)onEffectListUpdated:(id)arg1;
- (void)reportSelectFilter:(id)arg1 tabName:(id)arg2;
- (void)applyFilter:(id)arg1;
- (_Bool)selectFilter:(id)arg1;
- (void)selectAndScrollToFilter:(id)arg1;
- (_Bool)switchFilterGestureShouldBegin;
- (void)switchFilterWithFilterOne:(id)arg1 FilterTwo:(id)arg2 direction:(long long)arg3 progress:(double)arg4;
- (void)applyFilterWithFilterModel:(id)arg1 type:(long long)arg2;
- (void)showFilterNamaLabelWithFilterName:(id)arg1 categoryName:(id)arg2;
- (void)configFilterSwitchManager;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithImageProcess:(id)arg1 pictureEditorModel:(id)arg2 filterConfiguration:(id)arg3 logDictionary:(id)arg4 hasShown:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

