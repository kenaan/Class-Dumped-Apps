//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton, NSString, UIImage, UILabel;

@interface AWEAwemeFunctionView : UIView
{
    UIImage *_image;
    AWEAnimatedButton *_actionButton;
    UILabel *_titleLabel;
    CDUnknownBlockType _actionBlock;
    long long _functionViewType;
}

@property(nonatomic) long long functionViewType; // @synthesize functionViewType=_functionViewType;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEAnimatedButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)performAction;
- (void)buildFunctionViewUI;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

@end
