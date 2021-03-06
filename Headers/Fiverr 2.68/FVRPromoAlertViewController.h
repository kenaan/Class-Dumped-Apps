//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FVRPromoAlertAction, FVRPromoAlertAnimation, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface FVRPromoAlertViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    NSString *_alertImage;
    NSString *_alertTitle;
    NSString *_alertSubTitle;
    NSString *_alertActionButonTitle;
    UIView *_alertView;
    UIImageView *_alertIconImageView;
    UILabel *_alertTitleLabel;
    UILabel *_alertSubtitleLabel;
    UIButton *_alertActionButton;
    UIView *_backgroundView;
    FVRPromoAlertAction *_action;
    FVRPromoAlertAnimation *_animation;
    NSLayoutConstraint *_subtitleHeightConstraint;
    NSLayoutConstraint *_iconeImageWidthConstrain;
    NSLayoutConstraint *_iconeImageHeightConstrain;
    struct CGSize _iconeImageSize;
}

+ (id)alertControllerWithTitle:(id)arg1 subTitle:(id)arg2 iconName:(id)arg3;
@property(nonatomic) __weak NSLayoutConstraint *iconeImageHeightConstrain; // @synthesize iconeImageHeightConstrain=_iconeImageHeightConstrain;
@property(nonatomic) __weak NSLayoutConstraint *iconeImageWidthConstrain; // @synthesize iconeImageWidthConstrain=_iconeImageWidthConstrain;
@property(nonatomic) __weak NSLayoutConstraint *subtitleHeightConstraint; // @synthesize subtitleHeightConstraint=_subtitleHeightConstraint;
@property(retain, nonatomic) FVRPromoAlertAnimation *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) FVRPromoAlertAction *action; // @synthesize action=_action;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *alertActionButton; // @synthesize alertActionButton=_alertActionButton;
@property(nonatomic) __weak UILabel *alertSubtitleLabel; // @synthesize alertSubtitleLabel=_alertSubtitleLabel;
@property(nonatomic) __weak UILabel *alertTitleLabel; // @synthesize alertTitleLabel=_alertTitleLabel;
@property(nonatomic) __weak UIImageView *alertIconImageView; // @synthesize alertIconImageView=_alertIconImageView;
@property(nonatomic) struct CGSize iconeImageSize; // @synthesize iconeImageSize=_iconeImageSize;
@property(nonatomic) __weak UIView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)actionButtonClicked:(id)arg1;
- (void)closePromoScreen;
- (void)addAction:(id)arg1;
- (void)layoutSetup;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 iconName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

