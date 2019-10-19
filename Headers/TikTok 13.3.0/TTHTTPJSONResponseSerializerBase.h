//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTJSONResponseSerializerProtocol-Protocol.h"

@class NSSet, NSString;
@protocol TTJSONResponseSerializerProtocol;

@interface TTHTTPJSONResponseSerializerBase : NSObject <TTJSONResponseSerializerProtocol>
{
    NSObject<TTJSONResponseSerializerProtocol> *_currentImpl;
}

+ (id)serializer;
@property(retain, nonatomic) NSObject<TTJSONResponseSerializerProtocol> *currentImpl; // @synthesize currentImpl=_currentImpl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *acceptableContentTypes;
- (id)responseObjectForResponse:(id)arg1 jsonObj:(id)arg2 responseError:(id)arg3 resultError:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

