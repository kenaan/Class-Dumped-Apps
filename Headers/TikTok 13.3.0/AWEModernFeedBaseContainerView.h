//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEModernFeedContentContainerView, AWEModernFeedOriginalItemContentView, NSString, UIImageView, UILabel;

@interface AWEModernFeedBaseContainerView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_repostIconImageView;
    UILabel *_repostLabel;
    AWEModernFeedOriginalItemContentView *_originContentDescView;
    UIView *_contentOutterWrapperView;
    AWEModernFeedContentContainerView *_contentContainerView;
    CDUnknownBlockType _baseContainerViewTappedAction;
    unsigned long long _layoutType;
    long long _cutType;
}

@property(nonatomic) long long cutType; // @synthesize cutType=_cutType;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(copy, nonatomic) CDUnknownBlockType baseContainerViewTappedAction; // @synthesize baseContainerViewTappedAction=_baseContainerViewTappedAction;
@property(retain, nonatomic) AWEModernFeedContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIView *contentOutterWrapperView; // @synthesize contentOutterWrapperView=_contentOutterWrapperView;
@property(retain, nonatomic) AWEModernFeedOriginalItemContentView *originContentDescView; // @synthesize originContentDescView=_originContentDescView;
@property(retain, nonatomic) UILabel *repostLabel; // @synthesize repostLabel=_repostLabel;
@property(retain, nonatomic) UIImageView *repostIconImageView; // @synthesize repostIconImageView=_repostIconImageView;
- (void).cxx_destruct;
- (double)protectedPanelHeight;
- (void)updateLayoutWithFrame:(id)arg1;
- (void)baseContainerViewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)configWithFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

