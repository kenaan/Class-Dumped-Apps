//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SPTURIComponentMatcherResult : NSObject
{
    id _payload;
    NSDictionary *_variables;
}

@property(readonly, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(readonly, nonatomic) id payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1 variables:(id)arg2;

@end
