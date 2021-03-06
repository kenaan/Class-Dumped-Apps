//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEEditAndPublishViewDataSource-Protocol.h"
#import "AWEPublishModelProtocol-Protocol.h"

@class AWECameraFilterConfiguration, AWEEditView, AWEHashTagAutoAppendService, AWEPrivateSelectViewController, AWERecordFilterSwitchManager, AWEVideoEditPublishTitleViewController, AWEVideoPublishViewModel, NSMutableSet, NSString, UILabel, UIView;

@interface AWEEditAndPublishViewController : UIViewController <AWEPublishModelProtocol, AWEEditAndPublishViewDataSource>
{
    AWEEditView *_editAndPublishView;
    UILabel *_filterNameLabel;
    AWERecordFilterSwitchManager *_filterSwitchManager;
    AWECameraFilterConfiguration *_cameraFilterConfiguration;
    NSMutableSet *_scrollBrowsedFilters;
    AWEHashTagAutoAppendService *_hashTagAutoAppendService;
    UIView *_avoidShowBgColorViewWhenDisapper;
    UIView *_editAndPublishViewSnap;
    UIView *_mediaContainerSnap;
    UIView *_mediaContainer;
    UIView *_maskView;
    CDUnknownBlockType _cancelBlock;
    AWEVideoPublishViewModel *_publishModel;
    AWEPrivateSelectViewController *_privateSelectViewController;
    AWEVideoEditPublishTitleViewController *_titleEditViewController;
}

@property(retain, nonatomic) AWEVideoEditPublishTitleViewController *titleEditViewController; // @synthesize titleEditViewController=_titleEditViewController;
@property(retain, nonatomic) AWEPrivateSelectViewController *privateSelectViewController; // @synthesize privateSelectViewController=_privateSelectViewController;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(retain, nonatomic) UIView *mediaContainerSnap; // @synthesize mediaContainerSnap=_mediaContainerSnap;
@property(retain, nonatomic) UIView *editAndPublishViewSnap; // @synthesize editAndPublishViewSnap=_editAndPublishViewSnap;
@property(retain, nonatomic) UIView *avoidShowBgColorViewWhenDisapper; // @synthesize avoidShowBgColorViewWhenDisapper=_avoidShowBgColorViewWhenDisapper;
@property(retain, nonatomic) AWEHashTagAutoAppendService *hashTagAutoAppendService; // @synthesize hashTagAutoAppendService=_hashTagAutoAppendService;
@property(retain, nonatomic) NSMutableSet *scrollBrowsedFilters; // @synthesize scrollBrowsedFilters=_scrollBrowsedFilters;
@property(retain, nonatomic) AWECameraFilterConfiguration *cameraFilterConfiguration; // @synthesize cameraFilterConfiguration=_cameraFilterConfiguration;
@property(retain, nonatomic) AWERecordFilterSwitchManager *filterSwitchManager; // @synthesize filterSwitchManager=_filterSwitchManager;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) AWEEditView *editAndPublishView; // @synthesize editAndPublishView=_editAndPublishView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)editAndPublishViewShowPublish;
@property(readonly, nonatomic) unsigned long long uiStyle;
- (void)getLocation;
- (void)configFilterSwitchManager;
- (void)addAvoidShowBgColorViewWhenDisapper;
- (void)snapBeforeTransition;
- (void)showFilterNamaLabelWithFilterName:(id)arg1 categoryName:(id)arg2;
- (id)publishIconUrl;
- (unsigned long long)publishType;
- (void)editAndPublishViewPrivateButtonClicked;
- (void)editAndPublishViewPublishTitleClicked;
- (void)setCoverImage:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

