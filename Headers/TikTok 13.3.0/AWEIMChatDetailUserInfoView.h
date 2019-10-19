//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEIMChatDetailUserInfoView : UIView
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_sigLabel;
    UIImageView *_arrowView;
    UIImageView *_verifiedLogoView;
    UIView *_separatorLine;
}

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *verifiedLogoView; // @synthesize verifiedLogoView=_verifiedLogoView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *sigLabel; // @synthesize sigLabel=_sigLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)p_verifyBadgeImageByUser:(id)arg1;
- (void)configWithUser:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

