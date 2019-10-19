//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAnimatedButton, AWEPlayer, AWEVideoPublishViewModel, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface AWEAutoCaptionsEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isPlaying;
    _Bool _ignoreScroll;
    NSString *_enterFrom;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _savedBlock;
    AWEVideoPublishViewModel *_publishModel;
    AWEPlayer *_player;
    NSMutableArray *_captions;
    UILabel *_titleLabel;
    AWEAnimatedButton *_backButton;
    AWEAnimatedButton *_saveButton;
    UIView *_separateLine;
    UITableView *_captionTableView;
    long long _currentEditRow;
    double _audioStopTime;
    NSString *_captionMD5;
    double _startTime;
    double _backupStartTime;
    long long _currentIndex;
    long long _backupCurrentIndex;
}

@property(nonatomic) _Bool ignoreScroll; // @synthesize ignoreScroll=_ignoreScroll;
@property(nonatomic) long long backupCurrentIndex; // @synthesize backupCurrentIndex=_backupCurrentIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double backupStartTime; // @synthesize backupStartTime=_backupStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *captionMD5; // @synthesize captionMD5=_captionMD5;
@property(nonatomic) double audioStopTime; // @synthesize audioStopTime=_audioStopTime;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) long long currentEditRow; // @synthesize currentEditRow=_currentEditRow;
@property(retain, nonatomic) UITableView *captionTableView; // @synthesize captionTableView=_captionTableView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) AWEAnimatedButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) AWEAnimatedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *captions; // @synthesize captions=_captions;
@property(retain, nonatomic) AWEPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(copy, nonatomic) CDUnknownBlockType savedBlock; // @synthesize savedBlock=_savedBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (double)navigationBarOffsetY;
- (_Bool)validCurrentEditRow;
- (_Bool)captionHasChanged;
- (void)saveButtonClicked;
- (void)backButtonClicked;
- (void)updateCaptionWithCaption:(id)arg1 tailRange:(struct _NSRange)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)needAdaptKeyboardHeightWithCellIndexPath:(id)arg1 keyboardHeight:(double)arg2;
- (void)handleKeyboardWillShowNotification:(id)arg1;
- (void)handleKeyboardChangeFrameNotification:(id)arg1;
- (void)updateAudioPlayerStatusWithCurrentPlayerTime:(double)arg1;
- (void)addObservers;
- (void)setupUI;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 player:(id)arg2 captions:(id)arg3 selectedIndex:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

