//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEUIButton, TTTAttributedLabel, UIImageView, UILabel, UIViewController;

@interface AWEPersonalizationAlertView : UIView
{
    TTTAttributedLabel *_descriptionLabel;
    AWEUIButton *_buttonDeny;
    AWEUIButton *_buttonAllow;
    UIView *_animationView;
    UIView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIViewController *_viewController;
}

+ (id)alertViewWithTitle:(id)arg1 fromView:(id)arg2 description:(id)arg3 actionButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 actionBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) AWEUIButton *buttonAllow; // @synthesize buttonAllow=_buttonAllow;
@property(retain, nonatomic) AWEUIButton *buttonDeny; // @synthesize buttonDeny=_buttonDeny;
@property(retain, nonatomic) TTTAttributedLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (void)cancelClicked;
- (void)__dismissAlertWithAnimation;
- (void)dismissAlertView;
- (void)__showAlertWithAnimation;
- (void)showWithAnimation;
- (void)loadSubviews;
- (id)init;

@end

