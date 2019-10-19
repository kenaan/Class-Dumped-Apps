//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GMSDisplayLinkClient-Protocol.h"
#import "GMSPhoenixRenderBinSource-Protocol.h"

@class CAEAGLLayer, GMSAnalyticsTimer, GMSDisplayLink, GMSIOSGLContext, NSString, NSTimer, UIColor, UIImageView;
@protocol GMSAbstractRenderer, GMSEntityRendererViewOffscreenSink;

@interface GMSEntityRendererView : UIView <GMSDisplayLinkClient, GMSPhoenixRenderBinSource>
{
    id <GMSAbstractRenderer> _renderer;
    GMSDisplayLink *_displayLink;
    id _setUpNotification;
    id _tearDownNotification;
    _Bool _usingDisplayLink;
    _Bool _preventDraw;
    _Bool _renderTargetSizeNeedsUpdate;
    UIImageView *_snapshotOverlay;
    NSTimer *_snapshotTakedownTimer;
    struct CGPoint _viewCenterOffset;
    reffed_ptr_e23c8d60 _renderTarget;
    reffed_ptr_7371fe81 _texture;
    UIColor *_clearColor;
    _Bool _clearColorNeedsUpdate;
    _Bool _regulateFPS;
    _Bool _offscreen;
    _Bool _pauseDraw;
    _Bool _paused;
    unsigned long long _preferredFrameRate;
    double _uiScale;
    GMSIOSGLContext *_context;
    id <GMSEntityRendererViewOffscreenSink> _offscreenSink;
    GMSAnalyticsTimer *_frameTimer;
}

+ (long long)rendererType;
+ (void)enableHighEndPerformanceFrameRate:(_Bool)arg1;
+ (unsigned int)powerSaveFrameRate;
+ (unsigned int)performanceFrameRate;
+ (Class)layerClass;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) GMSAnalyticsTimer *frameTimer; // @synthesize frameTimer=_frameTimer;
@property(retain, nonatomic) UIColor *clearColor; // @synthesize clearColor=_clearColor;
@property(readonly, nonatomic) __weak id <GMSEntityRendererViewOffscreenSink> offscreenSink; // @synthesize offscreenSink=_offscreenSink;
@property(nonatomic) _Bool pauseDraw; // @synthesize pauseDraw=_pauseDraw;
@property(readonly, nonatomic) _Bool offscreen; // @synthesize offscreen=_offscreen;
@property(readonly, nonatomic) GMSIOSGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <GMSAbstractRenderer> renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) double uiScale; // @synthesize uiScale=_uiScale;
@property(nonatomic) _Bool regulateFPS; // @synthesize regulateFPS=_regulateFPS;
@property(nonatomic) unsigned long long preferredFrameRate; // @synthesize preferredFrameRate=_preferredFrameRate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (vector_ef47c132)phoenixRenderBins;
- (reffed_ptr_e23c8d60)viewRenderTarget;
- (struct EntityRenderer *)entityRenderer;
- (vector_ef47c132)createRenderBinsForRenderer:(id)arg1;
- (void)updateClearColor;
- (void)updateRenderTargetSize;
- (void)draw;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)imageFromSelfSnapshot;
- (void)snapshotToBuffer:(void *)arg1;
- (void)screenshotCleanup:(id)arg1;
- (void)screenshotPrepare:(id)arg1;
- (void)willPausePhoenixRenderer:(id)arg1;
- (void)didResumePhoenixRenderer:(id)arg1;
- (void)willDestroyPhoenixRenderer:(id)arg1;
- (void)didCreatePhoenixRenderer:(id)arg1;
- (void)didDestroyRenderer;
- (void)willDestroyAbstractRenderer:(id)arg1;
- (void)willPauseAbstractRenderer:(id)arg1;
- (void)didResumeAbstractRenderer:(id)arg1;
- (void)didCreateAbstractRenderer:(id)arg1;
- (void)resetRenderer;
- (void)tearDownRenderer;
- (void)pauseRenderer;
- (void)resumeRenderer;
- (void)setUpRenderer;
- (id)createRenderer;
- (_Bool)createContext;
- (void)removeAppActiveObservers;
- (void)addAppActiveObservers;
- (_Bool)isRendering;
- (void)willDisappear;
- (void)didDisappear;
- (void)willAppear;
- (void)didAppear;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)receivedMemoryWarning;
@property(nonatomic) const struct CGPoint *viewCenterOffset;
- (void)displayLinkFired:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 displayLink:(id)arg2 offscreenSink:(id)arg3;
@property(readonly, nonatomic) CAEAGLLayer *renderLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

