//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface AWENotificationMutiAvatarView : UIView
{
    UIImageView *_leftAvatarImageView;
    UIImageView *_rightAvatarImageView;
}

@property(retain, nonatomic) UIImageView *rightAvatarImageView; // @synthesize rightAvatarImageView=_rightAvatarImageView;
@property(retain, nonatomic) UIImageView *leftAvatarImageView; // @synthesize leftAvatarImageView=_leftAvatarImageView;
- (void).cxx_destruct;
- (void)refreshWithUsers:(id)arg1;
- (void)commonInit;
- (id)init;

@end

