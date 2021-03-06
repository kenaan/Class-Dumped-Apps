//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTPodcastUtteranceSurveyViewModelViewDelegate-Protocol.h"

@class GLUEButton, NSString, SPTPodcastUtteranceSurveyMicrophoneView, SPTPodcastUtteranceSurveyViewModel, UIImageView, UILabel, UIStackView;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTPodcastUtteranceSurveyView : UIView <SPTPodcastUtteranceSurveyViewModelViewDelegate>
{
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
    SPTPodcastUtteranceSurveyViewModel *_viewModel;
    SPTPodcastUtteranceSurveyMicrophoneView *_microphoneView;
    UIStackView *_stackView;
    UIImageView *_spotifyIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_containerView;
    UIView *_descriptionContainer;
    GLUEButton *_dismissButton;
    GLUEButton *_microphoneButton;
    GLUEButton *_doneButton;
    GLUEButton *_startButton;
}

@property(retain, nonatomic) GLUEButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) GLUEButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) GLUEButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) GLUEButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIView *descriptionContainer; // @synthesize descriptionContainer=_descriptionContainer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *spotifyIcon; // @synthesize spotifyIcon=_spotifyIcon;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyMicrophoneView *microphoneView; // @synthesize microphoneView=_microphoneView;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)didStopListening;
- (void)didStartListening;
- (void)pageDidUpdate;
- (void)dismissButtonTapped:(id)arg1;
- (void)microphoneButtonTapped:(id)arg1;
- (void)startButtonTapped:(id)arg1;
- (void)updateVisibility;
- (void)updateText;
- (void)setupLayout;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1 glueImageLoader:(id)arg2 glueTheme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

