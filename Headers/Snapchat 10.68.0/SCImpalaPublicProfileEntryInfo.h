//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCImpalaPublicProfileEntryInfo : SCComposerMarshallableObject
{
    NSString *_sourcePageType;
    NSString *_sourcePageSessionId;
    NSString *_pageEntryType;
}

@property(copy, nonatomic) NSString *pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(copy, nonatomic) NSString *sourcePageSessionId; // @synthesize sourcePageSessionId=_sourcePageSessionId;
@property(copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithSourcePageType:(id)arg1 sourcePageSessionId:(id)arg2 pageEntryType:(id)arg3;

@end
