//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWERatingViewDelegate-Protocol.h"

@class AWEDouYinLabIdeaModel, AWEDouYinLabViewControllerDataManager, AWEDouyinLabIdea, AWERatingView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEDouyinLabIdeaFeedbackViewController : UIViewController <AWERatingViewDelegate>
{
    UIView *_topView;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UIView *_animatiedView;
    UIView *_ratingContainer;
    AWERatingView *_ratingView;
    UILabel *_titleLabel;
    UILabel *_rateDescLabel;
    UILabel *_nickInfoLabel;
    UIButton *_confirmBtn;
    UIView *_feedBackView;
    UIView *_seperateLine;
    AWEDouYinLabViewControllerDataManager *_dataManager;
    AWEDouyinLabIdea *_idea;
    AWEDouYinLabIdeaModel *_remoteIdeaInfo;
}

@property(retain, nonatomic) AWEDouYinLabIdeaModel *remoteIdeaInfo; // @synthesize remoteIdeaInfo=_remoteIdeaInfo;
@property(retain, nonatomic) AWEDouyinLabIdea *idea; // @synthesize idea=_idea;
@property(retain, nonatomic) AWEDouYinLabViewControllerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIView *feedBackView; // @synthesize feedBackView=_feedBackView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *nickInfoLabel; // @synthesize nickInfoLabel=_nickInfoLabel;
@property(retain, nonatomic) UILabel *rateDescLabel; // @synthesize rateDescLabel=_rateDescLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWERatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UIView *ratingContainer; // @synthesize ratingContainer=_ratingContainer;
@property(retain, nonatomic) UIView *animatiedView; // @synthesize animatiedView=_animatiedView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)close;
- (id)rateDescOfRate:(id)arg1;
- (id)p_maskLayerForRect:(struct CGRect)arg1;
- (void)fadeDismiss;
- (void)showStartUpAnimation;
- (void)updateRateDescWithRate:(id)arg1;
- (void)onRateViewTapped:(double)arg1;
- (void)feedbackTapped:(id)arg1;
- (void)confirmBtnClicked:(id)arg1;
- (void)updateUIWhenRated;
- (void)settingUI;
- (void)fetchIdea:(id)arg1;
- (void)configIdea:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithIdea:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

