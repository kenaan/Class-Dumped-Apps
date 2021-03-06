//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, UIButton, UIControl, UIImageView, UILabel;
@protocol AWEARPotteryFindUserViewDelegate;

@interface AWEARPotteryFindUserView : UIView
{
    id <AWEARPotteryFindUserViewDelegate> _delegate;
    UIButton *_joinButton;
    LOTAnimationView *_transformLottieView;
    LOTAnimationView *_loadingLottieView;
    UIImageView *_reloadImageView;
    UILabel *_noUserLabel;
    UIControl *_refreshControl;
}

@property(retain, nonatomic) UIControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UILabel *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) UIImageView *reloadImageView; // @synthesize reloadImageView=_reloadImageView;
@property(retain, nonatomic) LOTAnimationView *loadingLottieView; // @synthesize loadingLottieView=_loadingLottieView;
@property(retain, nonatomic) LOTAnimationView *transformLottieView; // @synthesize transformLottieView=_transformLottieView;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(nonatomic) __weak id <AWEARPotteryFindUserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshControlTapped:(id)arg1;
- (void)joinButtonTapped:(id)arg1;
- (void)setupUI;
- (void)stopLoadingRefreshControlWithUserFound:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

