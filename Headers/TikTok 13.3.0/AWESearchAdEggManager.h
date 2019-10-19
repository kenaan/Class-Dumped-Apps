//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAdWebViewController, AWESearchAdEasterEggModel, NSString, NSTimer, UIButton, UIImageView, UIView;

@interface AWESearchAdEggManager : NSObject
{
    _Bool _eggDisablePrefetch;
    AWESearchAdEasterEggModel *_model;
    NSString *_keyword;
    NSString *_enterFrom;
    UIView *_containerView;
    UIView *_interactionView;
    UIButton *_closeButton;
    AWEAdWebViewController *_webViewController;
    UIImageView *_gifImageView;
    NSTimer *_autoDismissTimer;
    double _bindDataTime;
    double _maxWaitToShowTime;
}

+ (id)shareInstance;
@property(nonatomic) _Bool eggDisablePrefetch; // @synthesize eggDisablePrefetch=_eggDisablePrefetch;
@property(nonatomic) double maxWaitToShowTime; // @synthesize maxWaitToShowTime=_maxWaitToShowTime;
@property(nonatomic) double bindDataTime; // @synthesize bindDataTime=_bindDataTime;
@property(retain, nonatomic) NSTimer *autoDismissTimer; // @synthesize autoDismissTimer=_autoDismissTimer;
@property(retain, nonatomic) UIImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) AWEAdWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) AWESearchAdEasterEggModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)contentClicked;
- (void)closeBtnClicked;
- (void)trackLoadFailEvent:(long long)arg1;
- (void)autoDismiss;
- (void)tryShowing;
- (void)dismiss;
- (void)dismissWithNotification:(id)arg1;
- (void)reset;
- (_Bool)hasOvertime;
- (void)showEggAdWithModel:(id)arg1 searchKeyword:(id)arg2 enterFrom:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showEggAdWithModel:(id)arg1 searchKeyword:(id)arg2;
- (id)init;

@end

