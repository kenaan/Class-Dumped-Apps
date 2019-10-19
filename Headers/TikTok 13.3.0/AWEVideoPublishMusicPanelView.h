//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEVideoPublishMusicSelectView, AWEVideoPublishViewModel, HTSVideoSoundEffectPanelView, NSMutableArray, UIButton, UIViewController, UIVisualEffectView;

@interface AWEVideoPublishMusicPanelView : UIView
{
    _Bool _showing;
    _Bool _firstShow;
    CDUnknownBlockType _showHandler;
    CDUnknownBlockType _dismissHandler;
    CDUnknownBlockType _clipButtonClickHandler;
    CDUnknownBlockType _didSelectMusicHandler;
    CDUnknownBlockType _enterMusicLibraryHandler;
    HTSVideoSoundEffectPanelView *_volumeView;
    AWEVideoPublishMusicSelectView *_musicSelectView;
    UIVisualEffectView *_blurView;
    UIView *_topView;
    long long _currentTag;
    UIButton *_musicSelectButton;
    UIButton *_volumeButton;
    UIViewController *_viewController;
    AWEVideoPublishViewModel *_publishModel;
    NSMutableArray *_userCollectedMusicList;
}

@property(retain, nonatomic) NSMutableArray *userCollectedMusicList; // @synthesize userCollectedMusicList=_userCollectedMusicList;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(retain, nonatomic) UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) UIButton *musicSelectButton; // @synthesize musicSelectButton=_musicSelectButton;
@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) AWEVideoPublishMusicSelectView *musicSelectView; // @synthesize musicSelectView=_musicSelectView;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) HTSVideoSoundEffectPanelView *volumeView; // @synthesize volumeView=_volumeView;
@property(copy, nonatomic) CDUnknownBlockType enterMusicLibraryHandler; // @synthesize enterMusicLibraryHandler=_enterMusicLibraryHandler;
@property(copy, nonatomic) CDUnknownBlockType didSelectMusicHandler; // @synthesize didSelectMusicHandler=_didSelectMusicHandler;
@property(copy, nonatomic) CDUnknownBlockType clipButtonClickHandler; // @synthesize clipButtonClickHandler=_clipButtonClickHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) CDUnknownBlockType showHandler; // @synthesize showHandler=_showHandler;
- (void).cxx_destruct;
- (void)updateMusicClipButtonState;
- (void)updateWithUserCollectedMusicList:(id)arg1;
- (void)updateCurrentPlayMusicClipRange:(struct _HTSAudioRange)arg1;
- (void)updatePlayerTime:(double)arg1;
- (void)updateWithMusicList:(id)arg1 playingMusic:(id)arg2;
- (void)dismiss;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)show;
- (void)didMoveToSuperview;
- (void)tapToClose:(id)arg1;
- (void)changePanel:(id)arg1;
- (void)updateSelectedPanel:(unsigned long long)arg1 aniamted:(_Bool)arg2;
- (void)setSelectViewUserCollectedMusicDelegate:(id)arg1;
- (id)actionButton;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2 publishModel:(id)arg3 userCollectedMusicList:(id)arg4;

@end

