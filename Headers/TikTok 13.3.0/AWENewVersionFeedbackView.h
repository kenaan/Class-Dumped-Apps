//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface AWENewVersionFeedbackView : UIView
{
    UIView *_backgroundView;
    UIImageView *_feedbackImageView;
    UILabel *_feedbackLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILabel *feedbackLabel; // @synthesize feedbackLabel=_feedbackLabel;
@property(retain, nonatomic) UIImageView *feedbackImageView; // @synthesize feedbackImageView=_feedbackImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)didChangedLanguage;
- (void)windowClicked:(id)arg1;
- (void)dealloc;
- (void)configureFrame;
- (void)setupLayout;
- (void)setupSubviews;
- (void)setupWindow;
- (id)init;

@end

