//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNSignal-Protocol.h"
#import "GADNSignalSource-Protocol.h"

@class GADNRTBRequestParameters, NSMutableDictionary, NSString;
@protocol GADRTBAdapter;

@interface GADNRTBAdapterSignalSource : NSObject <GADNSignalSource, GADNSignal>
{
    id <GADRTBAdapter> _adapter;
    GADNRTBRequestParameters *_requestParameters;
    NSMutableDictionary *_adapterSignals;
}

- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (id)adapterSignals;
- (id)initWithRTBAdapter:(id)arg1 targeting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

