//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveUserEnterViewProtocol-Protocol.h"

@class HTSLiveScorllView, NSString, UIImageView;
@protocol HTSLiveTemplateProvider, IESLiveWebImageService, IESLiveWebPDecoder;

@interface HTSLiveWebpUserEnterView : UIView <HTSLiveUserEnterViewProtocol>
{
    id <IESLiveWebPDecoder> _webPDecoder;
    CDUnknownBlockType _onAnimationEnd;
    CDUnknownBlockType _onTouchViewTap;
    HTSLiveScorllView *_contentView;
    UIImageView *_contentBackgroundView;
    id <HTSLiveTemplateProvider> _templateProvider;
    double _stayTime;
    id <IESLiveWebImageService> _webImageService;
}

@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(nonatomic) double stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) __weak id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) UIImageView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) HTSLiveScorllView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onTouchViewTap; // @synthesize onTouchViewTap=_onTouchViewTap;
@property(copy, nonatomic) CDUnknownBlockType onAnimationEnd; // @synthesize onAnimationEnd=_onAnimationEnd;
@property(retain, nonatomic) id <IESLiveWebPDecoder> webPDecoder; // @synthesize webPDecoder=_webPDecoder;
- (void).cxx_destruct;
- (void)tapAction;
- (void)stopAnimation;
- (void)startShowingAnimation;
- (id)view;
- (void)updateWithEnterMessageNode:(id)arg1;
- (void)startAnimation;
- (void)setTouchCompletion:(CDUnknownBlockType)arg1;
- (void)setAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllFromSuperView;
- (void)renderUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

