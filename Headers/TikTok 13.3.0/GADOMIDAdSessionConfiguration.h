//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADOMIDAdSessionConfiguration : NSObject
{
    _Bool _isolateVerificationScripts;
    unsigned long long _impressionOwner;
    unsigned long long _videoEventsOwner;
}

@property _Bool isolateVerificationScripts; // @synthesize isolateVerificationScripts=_isolateVerificationScripts;
@property unsigned long long videoEventsOwner; // @synthesize videoEventsOwner=_videoEventsOwner;
@property unsigned long long impressionOwner; // @synthesize impressionOwner=_impressionOwner;
- (id)initWithImpressionOwner:(unsigned long long)arg1 videoEventsOwner:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithImpressionOwner:(unsigned long long)arg1 videoEventsOwner:(unsigned long long)arg2 isolateVerificationScripts:(_Bool)arg3 error:(id *)arg4;

@end

