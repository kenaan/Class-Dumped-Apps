//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSLiveGiftMessage_TextEffect_Detail, UIView;
@protocol HTSLiveViewHierarchyProvider;

@interface HTSLiveEffectPlayerStringPiece : NSObject
{
    double _playDuration;
    unsigned long long _renderContentMode;
    HTSLiveGiftMessage_TextEffect_Detail *_textEffect;
    UIView *_pieceContentView;
    double _videoRatio;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) double videoRatio; // @synthesize videoRatio=_videoRatio;
@property(retain, nonatomic) UIView *pieceContentView; // @synthesize pieceContentView=_pieceContentView;
@property(retain, nonatomic) HTSLiveGiftMessage_TextEffect_Detail *textEffect; // @synthesize textEffect=_textEffect;
@property(nonatomic) unsigned long long renderContentMode; // @synthesize renderContentMode=_renderContentMode;
@property(nonatomic) double playDuration; // @synthesize playDuration=_playDuration;
- (void).cxx_destruct;
- (id)loadBackImageView:(id)arg1;
- (id)loadContentLabel:(id)arg1;
- (void)hide;
- (void)realShow;
- (void)showWithTextEffect:(id)arg1 videoRatio:(double)arg2;
- (void)dealloc;
- (id)init;

@end

