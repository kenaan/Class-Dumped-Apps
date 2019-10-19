//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEEmotionFeedbackViewModel;

@interface AWEEmotionFeedbackView : UIView
{
    _Bool _isPresented;
    _Bool _hasReplied;
    UIView *_feedbackContainer;
    UIView *_endingContainer;
    AWEEmotionFeedbackViewModel *_viewModel;
}

@property(nonatomic) _Bool hasReplied; // @synthesize hasReplied=_hasReplied;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain, nonatomic) AWEEmotionFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *endingContainer; // @synthesize endingContainer=_endingContainer;
@property(retain, nonatomic) UIView *feedbackContainer; // @synthesize feedbackContainer=_feedbackContainer;
- (void).cxx_destruct;
- (void)handleClose:(id)arg1;
- (void)replyWithActionType:(unsigned long long)arg1;
- (void)handleTap:(id)arg1;
- (void)setupUI;
- (void)dismiss;
- (void)presentOnView:(id)arg1;
- (void)addBlurEffect;
- (id)initWithFeedbackModel:(id)arg1;

@end

