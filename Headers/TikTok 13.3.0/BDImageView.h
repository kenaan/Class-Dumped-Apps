//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "BDAnimatedImagePlayerDelegate-Protocol.h"

@class BDAnimatedImagePlayer, BDImage, NSString;

@interface BDImageView : UIImageView <BDAnimatedImagePlayerDelegate>
{
    _Bool _animateEnable;
    _Bool _infinityLoop;
    _Bool _frameCacheAutomatically;
    _Bool _cacheAllFrame;
    _Bool _autoPlayAnimatedImage;
    unsigned long long _customLoop;
    CDUnknownBlockType _loopCompletionBlock;
    BDImage *_animateImage;
    BDAnimatedImagePlayer *_player;
}

@property(retain, nonatomic) BDAnimatedImagePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) BDImage *animateImage; // @synthesize animateImage=_animateImage;
@property(copy, nonatomic) CDUnknownBlockType loopCompletionBlock; // @synthesize loopCompletionBlock=_loopCompletionBlock;
@property(nonatomic) _Bool autoPlayAnimatedImage; // @synthesize autoPlayAnimatedImage=_autoPlayAnimatedImage;
@property(nonatomic) _Bool cacheAllFrame; // @synthesize cacheAllFrame=_cacheAllFrame;
@property(nonatomic) _Bool frameCacheAutomatically; // @synthesize frameCacheAutomatically=_frameCacheAutomatically;
@property(nonatomic) unsigned long long customLoop; // @synthesize customLoop=_customLoop;
@property(nonatomic) _Bool infinityLoop; // @synthesize infinityLoop=_infinityLoop;
@property(nonatomic, getter=isAnimateEnable) _Bool animateEnable; // @synthesize animateEnable=_animateEnable;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)imagePlayerDidReachEnd:(id)arg1;
- (void)imagePlayer:(id)arg1 didUpdateImage:(id)arg2 index:(unsigned long long)arg3;
- (void)_tryPlayAnimateImage;
@property(nonatomic) unsigned long long currentAnimatedImageIndex;
- (void)stopAnimation;
- (void)startAnimation;
- (void)pauseAnimation;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)stopAnimating;
- (void)startAnimating;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 new:(_Bool)arg2;
- (void)setImageForIOS13:(id)arg1 new:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

