//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOSlotAdLoadDelegate-Protocol.h"

@class GADOSlot, NSString;

@interface GADOAdPreprocessor : NSObject <GADOSlotAdLoadDelegate>
{
    GADOSlot *_slot;
    CDUnknownBlockType _completionHandler;
    NSString *_nativeAdJSON;
}

- (void).cxx_destruct;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)callAndClearCompletionHandlerWithAdConfiguration:(id)arg1 slot:(id)arg2 error:(id)arg3;
- (id)environmentJSONString;
- (void)handlePreprocessorNotification:(id)arg1;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)preprocessNativeAdJSON:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAdUnitID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

