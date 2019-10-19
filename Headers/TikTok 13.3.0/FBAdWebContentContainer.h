//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdContentContainer-Protocol.h"
#import "FBAdJSBridgedInterfaceProtocol-Protocol.h"
#import "FBAdTouchGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class FBAdDataModel, NSString, NSURL, UIView, UIWebView;
@protocol FBAdContentContainerDelegate, FBAdViewNavigationPolicy;

@interface FBAdWebContentContainer : NSObject <UIWebViewDelegate, FBAdTouchGestureRecognizerDelegate, FBAdJSBridgedInterfaceProtocol, FBAdContentContainer>
{
    _Bool _loggedImpression;
    _Bool _terminated;
    _Bool _markupImpressionEventReceived;
    _Bool _overrideMarkupImpressionCheck;
    _Bool _isJavascriptAdControlInitialized;
    NSObject<FBAdContentContainerDelegate> *_delegate;
    NSObject<FBAdViewNavigationPolicy> *_parent;
    FBAdDataModel *_offsiteAd;
    double _lastTouchStartTimestamp;
    double _lastTouchCurrentTimestamp;
    double _lastTouchRadius;
    double _lastTouchPressure;
    double _firstImpressionTime;
    UIWebView *_webView;
    NSString *_activationCommand;
    NSURL *_requestURL;
    struct CGSize _actualAdSize;
    struct FBAdSize _adSizeType;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
    struct CGPoint _lastTouchStartLocation;
    struct CGPoint _lastTouchCurrentLocation;
}

+ (void)initialize;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(nonatomic) _Bool isJavascriptAdControlInitialized; // @synthesize isJavascriptAdControlInitialized=_isJavascriptAdControlInitialized;
@property(copy, nonatomic) NSString *activationCommand; // @synthesize activationCommand=_activationCommand;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) _Bool overrideMarkupImpressionCheck; // @synthesize overrideMarkupImpressionCheck=_overrideMarkupImpressionCheck;
@property(nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived; // @synthesize markupImpressionEventReceived=_markupImpressionEventReceived;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated; // @synthesize terminated=_terminated;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(nonatomic, getter=hasLoggedImpression) _Bool loggedImpression; // @synthesize loggedImpression=_loggedImpression;
@property(nonatomic) double lastTouchPressure; // @synthesize lastTouchPressure=_lastTouchPressure;
@property(nonatomic) double lastTouchRadius; // @synthesize lastTouchRadius=_lastTouchRadius;
@property(nonatomic) double lastTouchCurrentTimestamp; // @synthesize lastTouchCurrentTimestamp=_lastTouchCurrentTimestamp;
@property(nonatomic) double lastTouchStartTimestamp; // @synthesize lastTouchStartTimestamp=_lastTouchStartTimestamp;
@property(nonatomic) struct CGPoint lastTouchCurrentLocation; // @synthesize lastTouchCurrentLocation=_lastTouchCurrentLocation;
@property(nonatomic) struct CGPoint lastTouchStartLocation; // @synthesize lastTouchStartLocation=_lastTouchStartLocation;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(retain, nonatomic) FBAdDataModel *offsiteAd; // @synthesize offsiteAd=_offsiteAd;
@property(nonatomic) struct FBAdSize adSizeType; // @synthesize adSizeType=_adSizeType;
@property(nonatomic) struct CGSize actualAdSize; // @synthesize actualAdSize=_actualAdSize;
@property(nonatomic) __weak NSObject<FBAdViewNavigationPolicy> *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak NSObject<FBAdContentContainerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCTAClick;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerTapped:(id)arg1;
- (void)updateTouchDataWithTouches:(id)arg1 andEvent:(id)arg2 logTouch:(_Bool)arg3;
- (void)gestureRecognizer:(id)arg1 cancelledWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 movedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 beganWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)logClickWithExtraData:(id)arg1;
@property(readonly, nonatomic) _Bool logImpression;
- (void)initializeJavascriptAdControl;
- (_Bool)loadAdMarkup:(id)arg1 activationCommand:(id)arg2;
- (_Bool)loadAdData:(id)arg1 minViewability:(int)arg2;
@property(readonly, nonatomic, getter=getView) UIView *view;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)rewardedVideoDataModel;
- (id)htmlDataModel;
- (id)initWithAdView:(id)arg1 actualAdSize:(struct CGSize)arg2 adSizeType:(struct FBAdSize)arg3 overrideMarkupImpressionCheck:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

