//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMUserMessageTableViewCell.h"

@class CAShapeLayer, UILabel, UIView;

@interface AWEIMRecallMessageTableViewCell : AWEIMUserMessageTableViewCell
{
    UIView *_bubbleView;
    CAShapeLayer *_bubbleLayer;
    UILabel *_contentLabel;
}

+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
+ (id)identifier;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_updateBubbleLayer;
- (void)setupUI;
- (id)p_getBubblePath;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)configWithMessage:(id)arg1;

@end

