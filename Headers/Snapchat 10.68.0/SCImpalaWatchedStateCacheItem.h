//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData, NSString;

@interface SCImpalaWatchedStateCacheItem : SCComposerMarshallableObject
{
    NSString *_itemId;
    NSData *_encodedWatchedState;
}

@property(copy, nonatomic) NSData *encodedWatchedState; // @synthesize encodedWatchedState=_encodedWatchedState;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithItemId:(id)arg1 encodedWatchedState:(id)arg2;

@end
