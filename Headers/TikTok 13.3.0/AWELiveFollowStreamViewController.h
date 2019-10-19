//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFeedTableViewCellViewControllerProtocol-Protocol.h"
#import "IESLiveNewPlayerControllerDelegate-Protocol.h"

@class AWEAwemeModel, AWEFollowLiveNewStyleStatusView, AWELiveColoredPillButton, AWELiveFollowStreamDiggManager, CAGradientLayer, IESLiveNewPlayerController, NSString, NSTimer, UIImageView, UILabel, UIView;

@interface AWELiveFollowStreamViewController : UIViewController <IESLiveNewPlayerControllerDelegate, AWEFeedTableViewCellViewControllerProtocol>
{
    _Bool _didEndedLive;
    _Bool _isLiveShowing;
    long long _indexPath;
    AWEAwemeModel *_model;
    NSString *_referString;
    long long _type;
    CDUnknownBlockType _clickBlock;
    NSTimer *_timer;
    NSString *_currentPlayerURL;
    UIImageView *_liveCoverImageView;
    UIView *_liveCoverBlurView;
    UIView *_controlContainer;
    UIView *_liveTagGradientView;
    UILabel *_liveTagLabel;
    UILabel *_userNameLabel;
    UILabel *_liveTitleLabel;
    CAGradientLayer *_gradient;
    IESLiveNewPlayerController *_playerController;
    AWELiveColoredPillButton *_watchButton;
    AWELiveFollowStreamDiggManager *_diggManager;
    UIView *_popDiggContainerView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    AWEFollowLiveNewStyleStatusView *_liveStatusTipView;
    struct CGSize _liveTagSize;
}

+ (id)endedRoomIDs;
@property(nonatomic) struct CGSize liveTagSize; // @synthesize liveTagSize=_liveTagSize;
@property(retain, nonatomic) AWEFollowLiveNewStyleStatusView *liveStatusTipView; // @synthesize liveStatusTipView=_liveStatusTipView;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UIView *popDiggContainerView; // @synthesize popDiggContainerView=_popDiggContainerView;
@property(retain, nonatomic) AWELiveFollowStreamDiggManager *diggManager; // @synthesize diggManager=_diggManager;
@property(retain, nonatomic) AWELiveColoredPillButton *watchButton; // @synthesize watchButton=_watchButton;
@property(retain, nonatomic) IESLiveNewPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UILabel *liveTitleLabel; // @synthesize liveTitleLabel=_liveTitleLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *liveTagLabel; // @synthesize liveTagLabel=_liveTagLabel;
@property(retain, nonatomic) UIView *liveTagGradientView; // @synthesize liveTagGradientView=_liveTagGradientView;
@property(retain, nonatomic) UIView *controlContainer; // @synthesize controlContainer=_controlContainer;
@property(retain, nonatomic) UIView *liveCoverBlurView; // @synthesize liveCoverBlurView=_liveCoverBlurView;
@property(retain, nonatomic) UIImageView *liveCoverImageView; // @synthesize liveCoverImageView=_liveCoverImageView;
@property(nonatomic) _Bool isLiveShowing; // @synthesize isLiveShowing=_isLiveShowing;
@property(nonatomic) _Bool didEndedLive; // @synthesize didEndedLive=_didEndedLive;
@property(retain, nonatomic) NSString *currentPlayerURL; // @synthesize currentPlayerURL=_currentPlayerURL;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) long long indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)_trackLiveShow;
- (id)trackParamDict;
- (void)startTimingForTrack;
- (void)trackEventForStayTime;
- (_Bool)shouldShowLiveStream;
- (_Bool)shouldShowNewUIStyle;
- (void)updateUIWithRoomStatus:(_Bool)arg1;
- (void)player:(id)arg1 mediaSizeDidChange:(struct CGSize)arg2;
- (void)player:(id)arg1 loadStateDidChange:(unsigned long long)arg2;
- (void)watchTapped:(id)arg1;
- (void)usernameTapped:(id)arg1;
- (_Bool)_didEndedLive;
- (void)_addCurrentRoomToEndedList;
- (void)enterLiveEnded;
- (void)playerClose;
- (void)playerStop;
- (void)playerPlay;
- (void)_setupUI;
- (void)stop;
- (void)pause;
- (void)play;
- (void)reset;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)fetchRoomEndStatus;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

