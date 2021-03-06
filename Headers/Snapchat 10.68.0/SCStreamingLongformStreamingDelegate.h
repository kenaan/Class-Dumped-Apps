//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingDelegate-Protocol.h"

@class NSString;
@protocol SCStreamingRequestExtraInfoProviding;

@interface SCStreamingLongformStreamingDelegate : NSObject <SCStreamingDelegate>
{
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
}

@property(readonly, nonatomic) __weak id <SCStreamingRequestExtraInfoProviding> extraInfoProvider; // @synthesize extraInfoProvider=_extraInfoProvider;
- (void).cxx_destruct;
- (id)cacheKeyForRequestInfo:(id)arg1 request:(id)arg2;
- (_Bool)shouldUseStreamingRequestManagerAPIForRequestInfo:(id)arg1 request:(id)arg2;
- (id)initWithExtraInfoProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

