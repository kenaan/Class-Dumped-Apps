//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HTSLiveCreateRoomPromotionView : UIView
{
    CDUnknownBlockType _clickHandler;
    UIImageView *_icon;
    UILabel *_title;
}

@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void).cxx_destruct;
- (void)__tapped;
- (void)setupViews;
- (id)init;

@end

