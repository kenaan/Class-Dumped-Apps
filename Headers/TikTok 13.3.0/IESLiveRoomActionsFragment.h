//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveAnchorActions-Protocol.h"
#import "HTSLiveAudienceActions-Protocol.h"
#import "HTSLiveComponent-Protocol.h"

@class NSString, RACCompoundDisposable;
@protocol IESActionDispatcher;

@interface IESLiveRoomActionsFragment : NSObject <HTSLiveAudienceActions, HTSLiveAnchorActions, HTSLiveComponent>
{
    id <IESActionDispatcher> _dispatcher;
    RACCompoundDisposable *_disposable;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)receiveError:(id)arg1 withPrompts:(id)arg2;
- (void)willStopLive;
- (void)stopLive;
- (void)startLive;
- (void)liveWillEnd;
- (void)liveWillStart;
- (void)_setupActions;
- (void)componentDidUnmount;
- (void)componentDidMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

