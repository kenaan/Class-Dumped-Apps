//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEWelcomeScreenContent-Protocol.h"
#import "IESVideoPlayerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWEWelcomScreenMaskView, LOTAnimationView, NSString, UIImageView, UIScrollView;
@protocol IESVideoPlayerProtocol;

@interface AWEWelcomeScreenViewController : UIViewController <IESVideoPlayerDelegate, UIScrollViewDelegate, AWEWelcomeScreenContent>
{
    id <IESVideoPlayerProtocol> _player;
    CDUnknownBlockType _completionBlock;
    LOTAnimationView *_fingerGIFImageView;
    unsigned long long _strategy;
    UIImageView *_coverImageView;
    UIScrollView *_scrollView;
    AWEWelcomScreenMaskView *_maskView;
}

@property(retain, nonatomic) AWEWelcomScreenMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) unsigned long long strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) LOTAnimationView *fingerGIFImageView; // @synthesize fingerGIFImageView=_fingerGIFImageView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)playerDidReadyForDisplay:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (id)getFirstPreviewFrame:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

