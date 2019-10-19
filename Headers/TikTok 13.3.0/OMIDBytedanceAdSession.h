//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray, NSString, OMIDBytedanceAdSessionConfiguration, OMIDBytedanceAdSessionContext, OMIDBytedanceAdSessionStatePublisher, OMIDBytedanceBridge, OMIDBytedanceEventFilter, UIView;
@protocol OMIDBytedanceAdEventsPublisher, OMIDBytedanceAdSessionDelegate, OMIDBytedanceVideoEventsPublisher;

@interface OMIDBytedanceAdSession : NSObject
{
    NSPointerArray *_friendlyObstructions;
    UIView *_mainAdView;
    OMIDBytedanceAdSessionContext *_context;
    _Bool _lastPublishedViewStateWasPopulated;
    OMIDBytedanceAdSessionConfiguration *_configuration;
    NSString *_identifier;
    OMIDBytedanceEventFilter *_eventFilter;
    OMIDBytedanceBridge *_bridge;
    OMIDBytedanceAdSessionStatePublisher *_statePublisher;
    id <OMIDBytedanceAdSessionDelegate> _delegate;
}

@property(nonatomic) _Bool lastPublishedViewStateWasPopulated; // @synthesize lastPublishedViewStateWasPopulated=_lastPublishedViewStateWasPopulated;
@property(nonatomic) __weak id <OMIDBytedanceAdSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OMIDBytedanceAdSessionStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
@property(readonly, nonatomic) OMIDBytedanceBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, nonatomic) OMIDBytedanceEventFilter *eventFilter; // @synthesize eventFilter=_eventFilter;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) OMIDBytedanceAdSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (double)deviceVolume;
- (void)setDeviceVolume;
- (void)logErrorWithType:(unsigned long long)arg1 message:(id)arg2;
- (void)internal_removeAllFriendlyObstructions;
- (void)removeAllFriendlyObstructions;
- (void)internal_removeFriendlyObstruction:(id)arg1;
- (void)removeFriendlyObstruction:(id)arg1;
- (void)internal_addFriendlyObstruction:(id)arg1;
- (void)addFriendlyObstruction:(id)arg1;
- (void)onFinish;
- (void)finish;
- (void)onStart;
- (void)start;
- (void)internal_setMainAdView:(id)arg1;
@property(nonatomic) __weak UIView *mainAdView;
@property(readonly, nonatomic) id <OMIDBytedanceVideoEventsPublisher> videoEventsPublisher;
@property(readonly, nonatomic) id <OMIDBytedanceAdEventsPublisher> adEventsPublisher;
@property(readonly, nonatomic) NSArray *friendlyObstructions;
- (void)addToRegistry;
- (id)initWithConfiguration:(id)arg1 adSessionContext:(id)arg2 error:(id *)arg3;

@end

