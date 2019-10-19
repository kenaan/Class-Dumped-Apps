//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEADSymphonyCardView, AWEAdSymphonyMaskView, AWEAwemeModel, AWEAwemeMusicInfoView, AWEAwemePlayDislikeViewController, AWEButton, AWEFeedVideoButton, AWELoadingAndVolumeView, AWEMusicAnimationView, AWEMusicCoverButton, MPVolumeView, NSArray, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;
@protocol BDSNativeAdProtocol;

@interface AWEAdSymphonyInteractionViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _pureMode;
    _Bool _isMaskShowing;
    AWEAwemeModel *_model;
    id <BDSNativeAdProtocol> _nativeAd;
    NSString *_referString;
    UILongPressGestureRecognizer *_dislikeGesture;
    AWEAwemePlayDislikeViewController *_dislikeViewController;
    UIImageView *_avatarView;
    AWEFeedVideoButton *_likeButton;
    AWEFeedVideoButton *_commentButton;
    AWEFeedVideoButton *_shareButton;
    AWEMusicCoverButton *_musicButton;
    AWEMusicAnimationView *_musicAnimationView;
    UIView *_adTagBkgView;
    UILabel *_adTagLabel;
    UILabel *_authorLabel;
    UILabel *_descriptionLabel;
    AWEAwemeMusicInfoView *_musicInfoView;
    AWEButton *_adButton;
    AWELoadingAndVolumeView *_loadAndVolumeView;
    AWEADSymphonyCardView *_cardView;
    AWEAdSymphonyMaskView *_maskView;
    MPVolumeView *_volumeView;
    NSArray *_animationViews;
}

@property(retain, nonatomic) NSArray *animationViews; // @synthesize animationViews=_animationViews;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) AWEAdSymphonyMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AWEADSymphonyCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) AWELoadingAndVolumeView *loadAndVolumeView; // @synthesize loadAndVolumeView=_loadAndVolumeView;
@property(retain, nonatomic) AWEButton *adButton; // @synthesize adButton=_adButton;
@property(retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView; // @synthesize musicInfoView=_musicInfoView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *adTagLabel; // @synthesize adTagLabel=_adTagLabel;
@property(retain, nonatomic) UIView *adTagBkgView; // @synthesize adTagBkgView=_adTagBkgView;
@property(retain, nonatomic) AWEMusicAnimationView *musicAnimationView; // @synthesize musicAnimationView=_musicAnimationView;
@property(retain, nonatomic) AWEMusicCoverButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) AWEFeedVideoButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) AWEFeedVideoButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) AWEFeedVideoButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) AWEAwemePlayDislikeViewController *dislikeViewController; // @synthesize dislikeViewController=_dislikeViewController;
@property(retain, nonatomic) UILongPressGestureRecognizer *dislikeGesture; // @synthesize dislikeGesture=_dislikeGesture;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool isMaskShowing; // @synthesize isMaskShowing=_isMaskShowing;
@property(retain, nonatomic) id <BDSNativeAdProtocol> nativeAd; // @synthesize nativeAd=_nativeAd;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool pureMode; // @synthesize pureMode=_pureMode;
- (void).cxx_destruct;
- (void)resumeMusicAnimations;
- (void)pauseMusicAnimations;
- (void)stopMusicAnimations;
- (void)playMusicAnimations;
- (_Bool)touchCapturedWithPosition:(struct CGPoint)arg1;
- (void)resetMask;
- (void)closeMask;
- (_Bool)showMask;
- (void)longPressDislikeVideo;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)registerdAdViews;
- (void)dimissAdCardIfNeeded;
- (void)showAdCardIfNeeded;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onVolumeChangeNotification:(id)arg1;
- (void)addObserver;
- (void)shareButtonClicked;
- (void)showNotSupportToast;
- (void)showDislikeOnVideo;
- (void)setupDislikeVC;
- (void)setupConstraints;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

