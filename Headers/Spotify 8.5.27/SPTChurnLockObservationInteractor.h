//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTUICompletionNotifierObserver-Protocol.h"

@class NSString;
@protocol SPTChurnLockObservationInteractorDelegate, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTUICompletionNotifier;

@interface SPTChurnLockObservationInteractor : NSObject <SPTUICompletionNotifierObserver, SPTFeatureFlagSignalObserver>
{
    id <SPTChurnLockObservationInteractorDelegate> _delegate;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    id <SPTFeatureFlagSignal> _churnLockEnabledSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> churnLockEnabledSignal; // @synthesize churnLockEnabledSignal=_churnLockEnabledSignal;
@property(readonly, nonatomic) id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic) __weak id <SPTChurnLockObservationInteractorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isBlockedForTA;
- (void)loggedInUIDidBecomeLoaded;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)createFeatureEnabledStateSignalWithFactory:(id)arg1;
- (void)stopObserving;
- (void)observeFlagsAndPaymentState;
- (void)startObserving;
- (id)initWithFeatureFlagFactory:(id)arg1 UICompletionNotifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

