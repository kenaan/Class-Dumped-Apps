//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveChooseView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class HTSLiveScenarioModel, IESLiveImageLabelButton, NSMutableArray, NSString, UIView;

@interface HTSLiveTypeChooseViewNew : HTSLiveChooseView <UIGestureRecognizerDelegate>
{
    _Bool _backgroundDrawed;
    HTSLiveScenarioModel *_scenario;
    unsigned long long _selectedLiveType;
    CDUnknownBlockType _hideBlock;
    IESLiveImageLabelButton *_video;
    IESLiveImageLabelButton *_audio;
    IESLiveImageLabelButton *_game;
    IESLiveImageLabelButton *_external;
    UIView *_containerView;
    UIView *_backView;
    UIView *_controlView;
    NSMutableArray *_btnArray;
}

@property(nonatomic) _Bool backgroundDrawed; // @synthesize backgroundDrawed=_backgroundDrawed;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) IESLiveImageLabelButton *external; // @synthesize external=_external;
@property(retain, nonatomic) IESLiveImageLabelButton *game; // @synthesize game=_game;
@property(retain, nonatomic) IESLiveImageLabelButton *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) IESLiveImageLabelButton *video; // @synthesize video=_video;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(nonatomic) unsigned long long selectedLiveType; // @synthesize selectedLiveType=_selectedLiveType;
@property(retain, nonatomic) HTSLiveScenarioModel *scenario; // @synthesize scenario=_scenario;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addControlView;
- (double)getBtnWidthWithButton:(id)arg1;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)deselectBtn:(id)arg1;
- (void)selectBtn:(id)arg1;
- (long long)getArrayIndexFromLiveType:(unsigned long long)arg1;
- (void)updateWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

