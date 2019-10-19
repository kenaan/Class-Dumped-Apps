//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWESimpleUserModel, CAGradientLayer, UILabel, UIPanGestureRecognizer;

@interface AWEHitRankNoticeView : UIView
{
    _Bool _completed;
    UILabel *_contentLabel;
    CAGradientLayer *_gradientLayer;
    AWESimpleUserModel *_userModel;
    double _lastY;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) double lastY; // @synthesize lastY=_lastY;
@property(retain, nonatomic) AWESimpleUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)configUI;
- (void)moveView:(id)arg1;
- (void)didClicked;
- (void)setStatus:(_Bool)arg1 model:(id)arg2;
- (id)init;

@end

